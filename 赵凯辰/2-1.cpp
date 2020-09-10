#include<iostream>
#include<time.h>
using namespace std;
class Date{
	private:
	  int year,month,day;
	public:
		Date(){
		}
		Date(int year,int month,int day);
		void setYear(int year);
		void setMonth(int month);
		void setDay(int day);
		int getYear();
		int getMonth();
		int getDay();
		void show();
		~Date();
};
Date::Date(int year,int month,int day){
	this->year=year;
	this->month = month;
	this->day = day;
}
void Date::setYear(int year){
	this->year = year;
}
void Date::setMonth(int month){
	this->month = month;
}
void Date::setDay(int day){
	this->day = day;
}
int Date::getYear(){
	return year;
}
int Date::getMonth(){
	return month;
}
int Date::getDay(){
	return day;
} 
void Date::show(){
	cout << this->year << "年"<<this->month<<"月"<<this->day <<"日" << endl;
}
Date::~Date(){
} 
class DateTime{
	private:
		Date date;
		int hour,min,sec;
	public:
		DateTime(int year,int month,int day,int hour,int min,int sec)
		  :date(year,month,day),hour(hour),min(min),sec(sec) {
		  }
		DateTime(){
			time_t ltime = time(NULL);
			tm* today = localtime(&ltime);
			int ctyear = today-> tm_year + 1900;
			int cmonth = today-> tm_mon +1;
			int cday = today-> tm_mday;
			int chour = today->tm_hour;
			int cmin = today-> tm_min;
			int csec = today-> tm_sec;
			date.setYear(ctyear);
			date.setMonth(cmonth);
			date.setDay(cday);
			this->hour = chour;
			this->min = cmin;
			this->sec = csec;
		}
		void setDate(int year,int month,int day);
		void setHour(int hour);
		void setMin(int min);
		void setSec(int sec);
		Date getDate();
		int getHour();
		int getMin();
		int getSec();
		void show();
		~DateTime(){
		}
};
void DateTime::setDate(int year,int month,int day){
	this->date.setYear(year);
	this->date.setMonth(month);
	this->date.setDay(day);
}
void DateTime::setHour(int hour){
	this->hour = hour;
}
void DateTime::setMin(int min){
	this->min = min;
}
void DateTime::setSec(int sec){
	this->sec = sec;
}
Date DateTime::getDate(){
	return date;
}
int DateTime::getHour(){
	return hour;
}
int DateTime::getMin(){
	return min;
}
int DateTime::getSec(){
	return sec;
}
void DateTime::show(){
	this->date.show();
	cout << hour << "时"<<min << "分"<<sec << "秒"<<endl;
}
int main(){
	DateTime a;
	DateTime b(2000,7,28,12,25,36);
	a.show();
	b.show();
}

