#include<iostream>
#include<time.h>
using namespace std;
class Date{
	int year,month,day;
public:
	Date(){}
	Date(int y,int m,int d)
	:year(y),month(m),day(d){	}
	int getYear(){return year;}	
	int getMonth(){return month;}	
	int getDay(){return day;}
	void setYear(int year){ this->year=year;}	
	void setMonth(int month){ this->month=month;}	
	void setDay(int day){ this->day=day;}
Date&operator=(const Date&date){
	year=date.year;
	month=date.month;
	day=date.day;
	return *this;
}
void print(){
	cout<<year<<"."<<month<<"."<<day<<endl;
}
}; 
class Datetime{
	Date date;
	int hour,min,sec;
public:
	Datetime(int year,int month,int day,int hour,int min,int sec){
        this->date = {year,month,day};
          this->hour=hour;
          this->min=min;
          this->sec=sec;
		 }
Datetime(){
	time_t ltime=time(NULL);
	tm*now=localtime(&ltime);
	date.setYear(now->tm_year + 1900);
    date.setMonth(now->tm_mon + 1);
    date.setDay(now->tm_mday); 
	hour=now->tm_hour;
	min=now->tm_min;
	sec=now->tm_sec;
}
~Datetime(){
}
    
	int getHour(){return hour;}	
	int getMin(){return min;}	
	int getSec(){return sec;}
	
	int setHour(){return hour;}	
	int setMin(){return min;}	
	int setSec(){return sec;}	 
	void show(){
		date.print();
		cout<<hour<<":"<<min<<":"<<sec;
	}
};
int main(){
	Datetime datetime;
	datetime.show();
	return 0;
}
