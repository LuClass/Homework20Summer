#include <iostream>
#include <time.h>
using namespace std;
class Date
{
	int year,month,day;
	public:
		void setDate(int y,int m,int d)
		{
			year=y;
			month=m;
			day=d;
		}
		void print()
		{
			cout<<year<<"."<<month<<"."<<day;
		}
};
class DateTime
{
	Date date;
	int hour,min,sec;
	public:
		void setdate(int year,int month,int day)
		{
			date.setDate(year,month,day);
		}
		DateTime()
		{
			time_t ltime=time(NULL);
			tm*today=localtime(&ltime);
			int year1=today->tm_year+1900;
			int month1=today->tm_mon+1;
			int day1=today->tm_mday;
			hour=today->tm_hour;
			min=today->tm_min;
			sec=today->tm_sec;
			setdate(year1,month1,day1);
			show();
			cout<<endl;
		}
		DateTime(int year,int month,int day,int hour,int min,int sec)
		{
			setdate(year,month,day);
			this->hour=hour;
			this->min=min;
			this->sec=sec;
			show();
			cout<<endl;
		}
		void show()
		{
			date.print();
			cout<<" "<<hour<<":"<<min<<":"<<sec;
		}
};
int main ()
{
	DateTime a;
	DateTime b(2001,3,14,6,12,3);
	return 0;
}
