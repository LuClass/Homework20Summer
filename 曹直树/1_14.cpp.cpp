#include <iostream>
using namespace std;
#include <time.h>
class Date{
	int year,month,day;
public:
	void setDate(){
		
		time_t ltime =time(NULL);
		tm*today =localtime(&ltime);
		year=today->tm_year+1900;
		month=today->tm_mon+1;
		day=today->tm_mday;
		
	}
	void setdate(int y,int m,int d){
	year=y;
	month=m;
	day=d;
}
	int getYear(){return year;	}
	int getMonth(){return month;	}
	int getDay(){return day;	}
	void print(){
		cout<<year<<"年"<<month<<"月"<<day<<"日";
	}
};
class DateTime{
	int hour,min,sec;
	Date date;
public:
	DateTime(){
		date.setDate();
		time_t ltime =time(NULL);
		tm*today =localtime(&ltime);
		hour=today->tm_hour+8;
		min=today->tm_min;
		sec=today->tm_sec;
		
	}
	
	DateTime(int year,int month,int day,int hour,int min,int sec){
		date.setdate(year,month,day);
		this->hour=hour;
		this->min=min;
		this->sec=sec;
	}
	
	~DateTime(){}
	
	int gethour(){return hour;	}
	int getmin(){return min;	}
	int getsecond(){return sec;	}
	
	void show(){
	date.print();
	cout<<hour<<"时"<<min<<"分"<<sec<<"秒"<<endl;
	}
};
int main(){
	DateTime d1;
	d1.show();
	DateTime *d2=new DateTime;
	d2->show();
	delete d2;
	d1=DateTime(1989,12,13,13,13,13);
	d1.show();
	return 0;
}
