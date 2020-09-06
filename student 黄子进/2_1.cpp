#include<iostream>
#include<time.h>
using namespace std;
class Date{
	int year,month,day;
	public:
		Date(int y,int m,int d)
		: year(y),month(m),day(d){}
		Date()
		{
			time_t ltime = time(NULL);
			tm * today = localtime(&ltime);
			year = today -> tm_year + 1900;
			month = today -> tm_mon + 1;
			day = today -> tm_mday;
		}
		Date(const Date &d)
		: year(d.year),month(d.month),day(d.day){}
		Date & operator=(const Date & d){
			year = d.year;
			month = d.month;
			day = d.day;
			return *this;
		}
		~Date(){}
		void setYear(int year){this->year = year;}
		void setMonth(int month){this->month = month;}
		void setDay(int day){this->day = day;}
		int getYear(){return year;}
		int getMonth(){return month;}
		int getDay(){return day;}
		bool isLeapYear()
		{
			return year%400 == 0 || year%4 == 0 && year%100 != 0;
		}
		void print(){
			cout<<year<<"."<<month<<"."<<day;
		}
};
class DateTime{
	private:
	Date date;
	int hour;
	int min;
	int sec;
	public:
		
	DateTime()
	{
		Date dt;
		this->date = dt;
		time_t ltime = time(NULL);
		tm * today = localtime(&ltime);
		hour = today -> tm_hour;
		min = today -> tm_min;
		sec = today -> tm_sec;
	}
	DateTime(int year,int month,int day,int hour,int min,int sec){
		date.setYear(year);
		date.setMonth(month);
		date.setDay(day);
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}
	
	void setDate(int year,int month,int day){this->date = {year,month,day};}
	void setHour(int hour){this->hour = hour;}
	void setMin(int min){this->min = min;}
	void setSec(int sec){this->sec = sec;}
	
	Date getDate(){return this->date;}
	int getHour(){return hour;}
	int getMin(){return min;}
	int getSec(){return sec;}
	
	void show(){
		date.print();
		printf(" %02d:%02d:%02d",hour,min,sec);
	}
};
int main()
{
	DateTime datetime;
	datetime.show();
}
