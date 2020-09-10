#include<iostream>
#include<time.h>
using namespace std;

class Date{
private:	
	int year,month,day;
public:
	void setdate(int x,int y,int z)
	{
		year=x;
		month=y;
		day=z;
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
	int GetMonth(){
		return date.getmonth();
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
		cout<<date.getyear()<<"年"<<date.getmonth()<<"月"<<date.getday()<<"日"
		<<hour<<"时"<<min<<"分"<<sec<<"秒"<<endl;
	}
}; 

int main()
{
	DateTime d1;
	d1.print();
	return 0;
} 
