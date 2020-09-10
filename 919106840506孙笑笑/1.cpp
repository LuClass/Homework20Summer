#include <iostream>
#include <string>
#include <time.h>
using namespace std;
class Date{
int year, month, day;
public:
void setDate(int y, int m, int d){
year = y;
month = m; 
day = d;
}
int getYear(){return year;}
int getMonth(){return month;}
int getDay(){return day;}
};
class Cat{
private:
    Date age;
	double weight;
	string color;
public:
    void setcolor(const char *p)
    {color=p;
	}
	const char * getcolor()
	{return color.c_str();
	}
	void setweight(double w)
	{
		weight=w;
	}
	double getweight()
	{return weight;
	}
void setage(int year,int month,int day)
{
	age.setDate(year,month,day);
}
int getage(){ 
time_t ltime = time(NULL); 
tm * today = localtime(&ltime); 
int ctyear = today->tm_year + 1900;
int cmonth = today->tm_mon + 1; 
int cday = today->tm_mday;
if (cmonth > age.getMonth() ||
cmonth == age.getMonth() && cday >= age.getDay())
return ctyear - age.getYear();
else
return ctyear - age.getYear() - 1;
}	
void show(){
cout << "它的年龄为：" << getage();
cout << ";体重为:"<<getweight()<<"斤";
cout<<";颜色是:"<<getcolor()<<endl;	
}
}; 
int main(){
	Cat a,b;
	a.setage(2018,8,8);
	a.setweight(9.00);
	a.setcolor("orange");
	a.show();
	b.setage(2019,6,6);
	b.setweight(6.66);
	b.setcolor("white");
	b.show(); 
return 0;	
}












