#include <iostream>
#include <time.h>
using namespace std;
class Date {
	int year,month,day; 
public:
    void SetDate(int year,int month ,int day){
        this->year=year;
    	this->month=month;
    	this->day=day;
	} 
	int getyear(){
		return year;
	} 
	int getmonth(){
		return month;
	}
	int getday(){
		return day;
	}
	void Print_Date(){
		cout<<year<<"年"<<month<<"月"<<day<<"日";
	} 
};
class DateTime{
	int hour,min,sec;
	Date d; 
public:
	void setter(int year,int month,int day,int hour,int min,int sec){
		this->hour=hour;
		this->min=min;
		this->sec=sec;
		d.SetDate(year, month, day);
	}
	int gethour( ){
		return hour;
	}
	int getmin(){
		return min;
	}
	int getsec(){
		return sec;
	}
	void show(){
		d.Print_Date();
		cout<<hour<<"时"<<min<<"分"<<sec<<"秒"<<endl;
	}
	DateTime(){
		time_t ltime = time(NULL);
        tm * today = localtime(&ltime);
        d.SetDate(today->tm_year + 1900,today->tm_mon + 1,today->tm_mday);
        hour=today->tm_hour;
        min=today->tm_min;
        sec=today->tm_sec;
	}
    DateTime(int year,int month,int day,int hour,int min,int sec){
    	this->hour=hour;
		this->min=min;
		this->sec=sec;
		d.SetDate(year, month, day);	
	}
};
int main (){	
	DateTime d1(2001,7,27,23,41,21);
	DateTime d2;
	d1.show();
	d2.show();
}
