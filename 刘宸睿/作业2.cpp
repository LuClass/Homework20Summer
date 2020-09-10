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
		Date(){
			time_t ltime=time(NULL);
			tm *today=localtime(&ltime);
			year=today->tm_year+1900;
			month=today->tm_mon+1;
			day=today->tm_mday;
		}
		void setYear(int y){
			year=y;
		}
		int getYear(){
			return year;
		}
		void setMonth(int y){
			month=y;
		}
		int getMonth(){
			return month;
		}
		void setDay(int y){
			day=y;
		}
		int getDay(){
			return day;
		}
};
class DateTime{
	Date a;
	int hour,min,sec;
	public:
		DateTime(){
			time_t lntime=time(NULL);
			tm *today=localtime(&lntime);
			hour=today->tm_hour;
			min=today->tm_min;
			sec=today->tm_sec;
		}
		DateTime(int year,int month,int day,int hour,int min,int sec);
		void setDate(int y,int m,int d){
			a.setDay(d);
			a.setMonth(m);
			a.setYear(y);
		}
		Date getDate(){
			return a;
		}
	    void setHour(int h){
	    	hour=h;
		}
		int getHour(){
			return hour;
		}
		void setMin(int h){
	    	min=h;
		}
		int getMin(){
			return min;
		}
		void setSecond(int h){
	    	sec=h;
		}
		int getSecond(){
			return sec;
		}
		void show(){
			cout<<a.getYear()<<" "<<a.getMonth()<<" "<<a.getDay()<<" "<<hour<<":"<<min<<":"<<sec<<endl;
		}
};



int main(){
	DateTime a;
	a.show();
	return 0;
}
