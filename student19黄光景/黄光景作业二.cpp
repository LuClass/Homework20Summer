#include <iostream>
#include<string.h>
#include <time.h>
using namespace std;
class date{
	int year,month,day;
	public:
	void setdate(int year,int month,int day){
		this->year=year;
		this->month=month;
		this->day=day;
	}
	date(){
		time_t ltime=time(NULL);
		tm * today=localtime(&ltime);
		year=today->tm_year+1900;
		month=today->tm_mon+1;
		day=today->tm_mday;
	}
	void print(){
		cout<<year<<'.'<<month<<'.'<<day<<' ';
	}	
	int getyear(){return year;}
	int getmon(){return month;}
	int getday(){return day;}
	void setyear(int y){year=y;}
	void setmonth(int m){month=m;}
	void setday(int d){day=d;}
};
class DateTime{
	private:
		date date1;
		int hour,min,sec;
	public:
		DateTime(int year,int month,int day,int hour,int min,int sec){
			this->date1.setdate(year,month,day);
		    this->hour=hour;
		    this->min=min;
		    this->sec=sec;
		}
		DateTime(){
			time_t ltime=time(NULL);
			tm * today=localtime(&ltime);
			date1;
			hour=today->tm_hour;
			min=today->tm_min;
			sec=today->tm_sec;
		}		
		void show(){
			date1.print();
			cout<<hour<<':'<<min<<':'<<sec<<endl;
		}	
	int gethour(){return hour;}
	int getmin(){return min;}
	int getsec(){return sec;}
	void sethour(int h){hour=h;}
	void setmin(int mi){min=mi;}
	void setsec(int s){sec=s;}	
};
int main()
{
	DateTime time1,time2(2020,5,20,13,14,21);
	time1.show();
	time2.show();
	//设置time1，time2内的各参数值，用set与get函数，再输出对比； 
	return 0;
}
