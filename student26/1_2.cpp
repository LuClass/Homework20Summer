#include<iostream>
#include<time.h>
using namespace std;

class Date
{
	private:
		int year,month,day;
	public:
		Date()
		{
			time_t ltime=time(NULL);
			tm* today=localtime(&ltime);
			year=today->tm_year+1900;
			month=today->tm_mon+1;
			day=today->tm_mday;
		}
		Date(int x,int y,int z)
		{
			year=x,month=y,day=z;
		}
		~Date(){}
		void set_date(int y,int m,int d)
		{
			year=y,month=m,day=d;
		}
		int get_year(){return year;}
		int get_month(){return month;}
		int get_day(){return day;}
};

class DateTime
{
	private:
		Date date;
		int h,m,s;
	public:
		DateTime()
		{
			time_t ltime=time(NULL);
			tm* today=localtime(&ltime);
			h=today->tm_hour;
			m=today->tm_min;
			s=today->tm_sec;
			cout<<"DC:\n";
			this->show();
		}
		DateTime(int year,int month,int day,int hour,int min,int sec)
		{
			date=Date(year,month,day);
			h=hour,m=min,s=sec;
			cout<<"CON:\n";
			this->show();
		}
		~DateTime(){cout<<"DS:\n";this->show();}
		int get_year(){return date.get_year();}
		int get_month(){return date.get_month();}
		int get_day(){return date.get_day();}
		int get_hour(){return h;}
		int get_min(){return m;}
		int get_sec(){return s;}
		void setter(int year,int month,int day,int hour,int min,int sec)
		{
			date.set_date(year,month,day);
			h=hour,m=min,s=sec;
		}
		void show()
		{
			cout<<date.get_year()<<"."<<date.get_month()<<"."<<date.get_day()<<endl;
			cout<<h<<":"<<m<<":"<<s<<endl<<endl;
		}
};

int main(void)
{
	DateTime a;
	DateTime b(2020,9,3,21,32,56);
	a.show();
	b.show();
	return 0;
}
