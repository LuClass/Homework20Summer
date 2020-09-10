#include<iostream>
#include<time.h>
using namespace std;
class Date{
	int year,month,day;
public:
	Date(int y,int m,int d){
		year=y;
		month=m;
		day=d;
	}
	Date(){       //缺省构造函数，取当前日期
		time_t ltime=time(NULL);
		tm * today=localtime(&ltime);
		year=today->tm_year+1900;
		month=today->tm_mon+1;
		day=today->tm_mday;
	}
	int getYear(){return year;}
	int getMonth(){return month;}
	int getDay(){return day;}
};
class DateTime{
	Date d;
	int hour,min,sec;
public:
	DateTime(){
		d=Date();
		time_t ltime=time(NULL);
		tm * ptime=localtime(&ltime);
		hour=ptime->tm_hour;
		min=ptime->tm_min;
		sec=ptime->tm_sec;
	}
	DateTime(int year,int month,int day,int h,int m,int s){
		d=Date(year,month,day);
		hour=h;
		min=m;
		sec=s;
	}
	void setDate(int year,int month,int day){d=Date(year,month,day);}
	void setHour(int h){hour=h;}
	void setMin(int m){min=m;}
	void setSec(int s){sec=s;}
	Date getDate(){return d;}
	int getHour(){return hour;}
	int getMin(){return min;}
	int getSec(){return sec;}
	void show(){
		cout<<d.getYear()<<"."<<d.getMonth()<<"."<<d.getDay()<<"  "<<hour<<":"<<min<<":"<<sec<<endl;
	}
};
int main(){
	DateTime dt1(2020,10,1,11,30,20);
	dt1.show();
	dt1.setDate(2019,3,8);
	dt1.setHour(10);
	dt1.show();
	cout<<dt1.getDate().getYear()<<endl;
	cout<<dt1.getHour()<<endl;
	DateTime dt2;
	dt2.show();
	return 0;
}
