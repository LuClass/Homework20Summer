#include<iostream>
#include<time.h>
using namespace std;

class Date{
private:	
	int year,month,day;
public:
	void setdate(int y,int m,int d)
	{
		year=y;
		month=m;
		day=d;
	}
	int getyear(){
		return year;
	}
	int getmon(){
		return month;
	}
	int getday(){
		return day;
	}
};

class DateTime{
private:
	int hour,min,sec;
	Date date;
public:
	DateTime(){
		time_t ltime=time(NULL);
		tm * today=localtime(&ltime);
		date.setdate(today->tm_year+1900,today->tm_mon+1,today->tm_mday);
        hour=today->tm_hour;
        min=today->tm_min;
        sec=today->tm_sec;
	}
	
	DateTime(int year,int month,int day,int hour,int min,int sec){
	    date.setdate(year,month,day);
		this->hour=hour;
		this->min=min;
		this->sec=sec; 
	}
	
	void SetDate(int year,int month,int day){
		date.setdate(year,month,day);
	}
	void SetTime(int h,int m,int s){
		hour=h;
		min=m;
		sec=s;
	}
	int GetYear(){
		return date.getyear();
	}
	int GetMon(){
		return date.getmon();
	}
	int GetDay(){
		return date.getday();
	}
	int GetHour(){
		return hour;
	}
	int GetMin(){
		return min;
	}
	int GetSec(){
		return sec;
	}
	void print(){
		cout<<date.getyear()<<"."<<date.getmon()<<"."<<date.getday()<<"    "
		<<hour<<":"<<min<<":"<<sec<<endl;
	}
}; 

int main()
{
	DateTime d1;
	d1.print();
	return 0;
} 
