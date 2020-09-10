using namespace std;
#include <iostream>
#include <time.h>
class Date
{   
	int year,month,day;
	public:
		Date(int a,int b,int c)
		{
			year=a;
			month=b;
			day=c;
		}
		Date()
		{time_t ltime=time(NULL);
		 tm *today=localtime(&ltime);
		 year=today->tm_year+1900;
		 month=today->tm_mon+1;
		 day=today->tm_mday;
		}
		void print()
		{
			cout<<year<<"年"<<month<<"月"<<day<<"日"<<' '; 
		}
		int getteryear()
		{
			return year;
		}
		int gettermonth()
		{
			return month;
		}
		int getterday()
		{
			return day;
		}
	
};
class DateTime
{
	Date date1;
	int hour,min,sec;
	public:
	DateTime(int year,int month,int day,int hour,int min,int sec):date1(year,month,day)
	{
		this->hour=hour;
		this->min=min;
		this->sec=sec;
	}
	DateTime()
	{
		time_t ltime=time(NULL);
		 tm *today=localtime(&ltime);
		 hour=today->tm_hour;
		 min=today->tm_min;
		 sec=today->tm_sec;
	}
	void setter(int a,int b,int c,int d,int e,int f)
	{   date1=Date(a,b,c);
		hour=d;
		min=e;
		sec=f;
	}
	Date getterdate()
	{ return date1;
	}
	int getterhour()
		{
			return hour;
		}
		int gettermin()
		{
			return min;
		}
		int gettersec()
		{
			return sec;
		}
	void show()
	{
		cout<<"DateTime是：";
		date1.print();
		cout<<hour<<"时"<<min<<"分"<<sec<<"秒"<<endl; 
	}
};
int main()
{
	DateTime d1;
	d1.show();
	d1=DateTime(2001,05,07,22,30,35);
	d1.show();
	d1.setter(2005,07,19,12,25,40);
	d1.show();
	return 0;
	
}
