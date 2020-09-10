#include<iostream>
#include<string.h>
#include<time.h>
using namespace std;
class Date{
	int year,month,day;
	public:
	void setdate(int y,int m,int d)
	 {year=y;
	 month=m;
	 day=d;
	 }
	 int getyear(){return year;}
	  int getmonth(){return month;}
	   int getday(){return day;}
	
}; 
class Datetime{
	int hour,min,sec;
	Date d;
	public:
		
		Datetime()
		{time_t ltime=time(NULL);
		tm * today=localtime(&ltime);
		int year1=today->tm_year+1900;
		int month1=today->tm_mon+1;
		int day1=today->tm_mday; 
		d.setdate(year1,month1,day1);
		hour=today->tm_hour;
		min=today->tm_min;
		sec=today->tm_sec;
		}
		Datetime(int year,int month,int day, int hour,int min, int sec);
		void settter(int y,int m,int day1, int h,int min1,int s)
		 {d.setdate(y,m,day1);
		 hour=h;
		 min=min1;
		 sec=s;
		 }
		 int getter()
		  {return d.getyear(),d.getmonth(),d.getday(),hour,min,sec;
		  }
		  void show()
		  {cout<< d.getyear()<<"."<<d.getmonth()<<"."<<d.getday()<<" "<<hour<<":"<<min<<":"<<sec;
		  }
};

int main()
{Datetime a1;
  a1.show();
  return 0;
 } 
