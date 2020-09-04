#include <iostream>
#include <time.h>
using namespace std;
class Date{
	int year,month,day;
public:
	void setYear(int y)
	{
		this->year=y;
	}
	void setMonth(int m)
	{
		this->month=m;
	}
	void setDay(int d)
	{
		this->day=d;
	}
	int getYear()
	{
		return year;
	}
	int getMonth()
	{
		return month;
	}
	int getDay()
	{
		return day;
	}
};
class DateTime{
	Date date;
	int hour,min,sec;
public:
	void setHour(int hour)
	{
		this->hour=hour;
	}
	void setMin(int min)
	{
		this->min=min;
	}
	void setSec(int sec)
	{
		this->sec=sec;
	}
	int getHour()
	{
		return hour;
	}
	int getMin()
	{
		return min;
	}
	int getsec()
	{
		return sec;
	}
	DateTime(int year,int month, int day,int hour, int min,int sec)
	{
		date.setYear(year);
		date.setMonth(month);
		date.setDay(day);
		this->hour=hour;
		this->min=min;
		this->sec=sec;
		cout<<"Constructor of Date:";
		//printDate();
		cout<<endl;
    }
    DateTime()
    {
    	time_t ltime=time(NULL);
    	tm *today=localtime(&ltime);
    	date.setYear(today->tm_year+1900);
		date.setMonth(today->tm_mon+1);
		date.setDay(today->tm_mday);
		this->hour=today->tm_hour;
		this->min=today->tm_min;
		this->sec=today->tm_sec;
		cout<<"Default Constructor of Date:";
		//printDate();
		cout<<endl;
	}
	void printDate()
	{
		cout<<date.getYear()<<" : "<<date.getMonth()<<" : "<<date.getDay()<<" : "<<getHour()<<" : "<<getMin()<<" : "<<getsec()<<endl;
	}
};
int main()
{
	//DateTime d2;
	DateTime d1(2000,10,1,15,12,20);
	d1.printDate();
	DateTime d2;
	d2.printDate();
	
}
