#include <iostream>
#include <time.h>
using namespace std;
class Date{
	private:
		int year;
		int month;
		int day;
	public:
		void SetDate(int y,int m,int d){
			year=y;
			month=m;
			day=d;
		}
		int getYear(){
			return year;
		}
		int getMon(){
			return month;
		}
		int getDay(){
			return day;
		}
};
class DateTime{
	private:
		Date date;
		int hour;
		int min;
		int sec;
	public:
		int getYear(){
			return date.getYear();
		}
		int getMon(){
			return date.getMon();
		}
		int getDay(){
			return date.getDay();
		}
		int getHour(){
			return hour;
		}
		int getMin(){
			return min;
		}
		int getSec(){
			return sec;
		}
		DateTime (int year, int month, int day, int hour, int min, int sec)
		{
			date.SetDate(year,month,day);
			this->hour=hour;
			this->min=min;
			this->sec=sec;
		}
		DateTime (){
			time_t ltime=time(NULL);
			tm *today=localtime(&ltime);
			date.SetDate(today->tm_year+1900,today->tm_mon+1,today->tm_mday);
			this->hour=today->tm_hour;
			this->min=today->tm_min;
			this->sec=today->tm_sec;
			cout<<"Default Constructor of Date:";
			cout<<endl;
		}
		void print(){
			cout<<date.getYear()<<":"<<date.getMon()<<":"<<date.getDay()<<" "<<hour<<":"<<min<<":"<<sec<<endl;
		}
};
int main()
{
	DateTime time1(2000,10,21,12,34,45);
	DateTime time2;
	cout<<"date1:";time1.print();cout<<endl;
	cout<<"date2:";time2.print();cout<<endl;
}
