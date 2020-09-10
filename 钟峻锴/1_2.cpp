#include<time.h>
#include<iostream>
#include<iomanip>
#include<cstring>
#include<ctime>

using namespace std;


class Date{
	
	int y,m,d;
	
	
	public:
		Date ()
		{
			time_t ltime = time(NULL);
			tm * today = localtime(&ltime); 
			y = today->tm_year + 1900;
			m = today->tm_mon + 1;
			d = today->tm_mday;  
			
		}
		
		setDate (int year, int month, int day)
		{
			y = year;
			m = month;
			d = day;
		}
		
		void show ()
		{
			cout << y << "年" <<m<<"月"<< d<<"日\n";
		}
		
		void setYear(int year)
		{
			y = year;
		}
		
		void setMonth(int year)
		{
			m = year;
		}
		
		void setDay(int year)
		{
			d = year;
		}
		
		int getYear()
		{
			return y;
		}
		
		int getMonth()
		{
			return m;
		}
		
		int getDay()
		{
			return d;
		}
		
}; 

class DateTime{
	Date date;
	int h, mi, s;
	public:
		DateTime ()
		{
			time_t ltime = time(NULL);
			tm * today = localtime(&ltime); 
			h = today->tm_hour;
			mi = today->tm_min;
			s = today->tm_sec;  
		}
		
		DateTime (int year, int month, int day, int hour, int min, int sec)
		{
			date.setDate(year, month, day);
			h = hour ;
			mi = min ;
			s = sec ;
		}
		
		void setDateTime(int year, int month, int day, int hour, int min, int sec)
		{
			date.setYear(year);
			date.setMonth(month);
			date.setDay(day);
			h = hour ;
			mi = min ;
			s = sec ;
		}
		
		void setYear(int year)
		{
			date.setYear(year);
		}
		
		void setMonth(int year)
		{
			date.setMonth(year);
		}
		
		void setDay(int year)
		{
			date.setDay(year);
		}
		
		void setHour(int year)
		{
			h = year;
		}
		
		void setMin(int year)
		{
			mi = year;
		}
		
		void setSec(int year)
		{
			s = year;
		}
		
		int getYear()
		{
			return date.getYear();
		}
		
		int getMonth()
		{
			return date.getMonth();
		}
		
		int getDay()
		{
			return date.getDay();
		}
		
		int getHour()
		{
			return h;
		}
		
		int getMin()
		{
			return mi;
		}
		
		int getSec()
		{
			return s;
		}
		
		void show(){
			date.show();
			cout<<h<<"时"<<mi<<"分"<<s<<"秒"<<endl;
		}
};


int main()
{
	DateTime a, b(1997, 7, 7 , 22, 56, 8);	
	a.show();	
	return 0;
 } 

