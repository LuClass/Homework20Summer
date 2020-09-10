#include <iostream>
#include <time.h>
using namespace std;

class Date {

	private:
		int year;
		int month;
		int day;
	
	public:
		
		Date ( int y, int m, int d )
			:year(y), month(m), day(d)
			{
				this->year = y;
				this->month = m;
				this->day = d;
			}
			
		Date ()
		{
			time_t ltime = time(NULL);
			tm *today = localtime(&ltime);
   			year = today->tm_year + 1900;
			month = today->tm_mon + 1;
			day = today->tm_mday;
		}
		
		~Date(){
			
		}
		
		void show (){
			cout<<year<<"年"<<month<<"月"<<day<<"日";	
		}
		
		void setter (){
			cin>>year>>month>>day;
		}
		
		int getyear (){	return year; }
		
		int getmonth (){ return month; }
		
		int getday (){ return day; }
		
};

class DateTime {
	private:
		Date date;
		int hour;
		int minute;
		int second;
	
	public:
		
		DateTime ( Date dt, int hour, int min, int sec )			//构造函数1 
			:date(dt), hour(hour), minute(min), second(sec)
		{
			this->date = dt;
			this->hour = hour;
			this->minute = min;
			this->second = sec;
		}
		
		DateTime ( int y, int m, int d, int hour, int min, int sec )//构造函数2 
			:date( Date(y, m, d) ), hour(hour), minute(min), second(sec)
		{
			Date date = Date (y, m ,d);
			this->hour = hour;
			this->minute = min;
			this->second = sec;
		}
		
		DateTime ()											//缺省构造函数 
		{
			Date();
			time_t ltime = time(NULL);
			tm *today = localtime(&ltime);
   			hour = today->tm_hour;
			minute = today->tm_min;
			second = today->tm_sec;
		}
		
		~DateTime (){									//析构函数 
		}
		
		void show (){
			date.show();
			cout<<' '<<hour<<':'<<minute<<':'<<second<<endl;
		}
		
		void setter (){
			date.setter();
			cin>>hour>>minute>>second;
		}
		
		Date getdate (){
			int y = date.getyear();
			int m = date.getmonth();
			int d = date.getday();
			return Date(y, m ,d);
		}
		
		int gethour (){	return hour; }
		
		int getmin (){	return minute; }
		
		int getsec (){ return second; }
		
};


int main (){
	Date date( 2001, 10, 17 );
	DateTime datetime( date, 12, 23, 34 );
	datetime.show();
	
	DateTime *datetime1 = new DateTime;
	datetime1->show();
	
	DateTime datetime2( 2000, 12, 12, 12, 12, 12 );
	datetime2.show();
	
	return 0;
}
