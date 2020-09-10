# include <iostream>
# include <time.h>
using namespace std;
class Date{ 
int year, month, day;
public:
Date(){ 
time_t ltime = time(NULL); 
tm * today = localtime(&ltime); 
year = today->tm_year + 1900;
month = today->tm_mon + 1; 
day = today->tm_mday;
}
void setDate(int y, int m, int d){
year = y;
month = m; 
day = d;
}
int getYear(){return year;}
int getMonth(){return month;}
int getDay(){return day;}
bool isLeapYear(){
return year%400 == 0 || year%4 == 0 && year%100 != 0;
}
}; 
class DateTime{
	int hour,min,sec;
	Date now;
public:
DateTime(){
time_t ltime = time(NULL);
tm * today = localtime(&ltime);
hour = today->tm_hour;
min = today->tm_min;
sec = today->tm_sec;
}	
DateTime(int h,int mi,int s)
        :hour(h),min(mi),sec(s)	
	{
		show();
		cout<<endl;
	}
void settime(int p,int q,int r)
    {hour=p;
     min=q;
     sec=r;
	}	
int gethour()
{return hour;
}
int getmin()
{return min;
}
int getsec()
{return sec;
}
void setnow(int year,int month,int day)
{
	now.setDate(year,month,day);
}
void show()
{
	
	cout<<now.getYear()<<"年"<<now.getMonth()<<"月"<<now.getDay()<<"日"<<hour<<"时"<<min<<"分"<<sec<<"秒";
}
};
int main()
{
	DateTime *a=new DateTime;
    a->show();
    cout<<endl;
    delete a;
}

















