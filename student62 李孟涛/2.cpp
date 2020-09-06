#define _CRT_SECURE_NO_WARNINGS
#include<iostream> 
#include<time.h>
using namespace std;
class Date{
private:
	int year,month,day;
public:
   Date(int y,int m,int d)
   {
   	year=y;
   	month=m;
   	day=d;
   }
Date(){
	time_t ltime=time(NULL);
	tm*now=localtime(&ltime);
	year=now->tm_year+1900;
	month=now->tm_mon+1;
	day=now->tm_mday;
}
};
class DateTime{
private:
	Date date;
	int hour,min,sec;
public:
DateTime(){
	time_t ltime=time(NULL);
	tm*now=localtime(&ltime);
	hour=now->tm_hour;
	min=now->tm_min;
	sec=now->tm_sec;
}
DateTime(int year,int month,int day,int hour,int min,int sec):date(year,month,day)
{
	this->hour=hour;
	this->min=min;
	this->sec=sec;
	int h,m1,s,y,m,d;
	hour=h;
	min=m1;
	sec=s;
	year=y;
   	month=m;
   	day=d;
}
void show()
{
	cout<<year<<"年"<<month<<"月"<<day<<"日" <<hour<<"时"<<min<<"分" <<sec<<"秒" <<endl;
}
};
int main()
{
	DateTime dt;
    int a;
	cout<<"查看当前时间请按1；读写时间请按2";
	cin>>a;
	if(a=1)
     dt.show();
   else if(a=2)
    {
    cin>>y>>m>>d>>h>>m1>>s;
     if(y<0|m<0|m>12|d<0|d>31|h<0|h>24|m1<0|m1>60|s<0|s>0)
     cout<<"error"<<endl;
     else dt.show() 
	}
}

