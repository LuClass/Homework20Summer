#include <iostream>
#include<time.h>
using namespace std;
class Date{
	private:
		int year,month,day;
	public:
		void setYear(int year){
			this->year=year;
		}
		void setMonth(int month){
			this->month=month;
		}
		void setDay(int day){
			this->day=day;
		}
		int getYear(){
			return year;
		}
		int getMonth(){
			return month;
		}
        int getDay(){
        	return day;
		}
	
};
class DateTime{
	private:
		Date date;
		int hour,min,sec;
    public:
    	DateTime(){
    		time_t ltime=time(NULL);
    		tm* today=localtime(&ltime);
    		date.setYear(today->tm_year+1900); 
    		date.setMonth(today->tm_mon); 
    		date.setDay(today->tm_mday);
			hour=today->tm_hour;
			min=today->tm_min;
			sec=today->tm_sec; 
		}
		DateTime(int year,int month,int day,int hour,int min,int sec){
			        this->date.setYear(year);
				    this->date.setMonth(month);
					this->date.setDay(day);
					this->hour=hour;
					this->min=min;
					this->sec=sec;
			
		}
		void setterYear(int year){
			this->date.setYear(year);
		}
		void setterMonth(int month){
		this->date.setMonth(month);
		}
		void setterDay(int day){
			this->date.setDay(day);
		}
		void setterHourint (int hour){
			this->hour=hour;
		}
		void setterMin(int min){
			this->min=min;
		}
		void setterSec(int sec){
			this->sec=sec;
		}
		int getterYear(){
			return this->date.getYear();
		}
		int getterMonth(){
			return this->date.getMonth();
		}
	    int getterDay(){
	    	return this->date.getDay();
		}
		int getterHour(){
			return this->hour;
		}
		int getterMin(){
			return this->min;
		}
		int getterSec(){
			return this->sec;
		}
		void show(){
			cout<<getterYear()<<"-"<<getterMonth()<<"-"<<getterDay()<<"  "<<getterHour()<<":"<<getterMin()<<":"<<getterSec();
		}
};
int main(){
	DateTime dt;
	dt.show();
	cout<<endl;
	DateTime dt1=DateTime(2000,10,01,13,14,20);
	dt1.show();
	return 0;
}
