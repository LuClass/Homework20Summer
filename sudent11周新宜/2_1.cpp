using namespace std;
#include <iostream>
#include <time.h>
class Date
{
 public:
	int year,month,day;
};
class DateTime
{
 private:
	Date date;
	int hour,min,sec;
 public:
 	DateTime()
 	{
 		time_t ltime=time(NULL);
 		tm * today=localtime(&ltime);
 		date.year=today->tm_year+1900;
 		date.month=today->tm_mon+1;
 		date.day=today->tm_mday;
 		hour=today->tm_hour;
 		min=today->tm_min;
 		sec=today->tm_sec;
 		show();
 		cout<<endl;
	}
	DateTime(int y,int m,int d,int h,int mi,int s)
	{
		date.year=y;
		date.month=m;
		date.day=d;
		hour=h;
		min=mi;
		sec=s;
		show();
		cout<<endl;
	}
	void getter(int y,int m,int d,int h,int mi,int s)
	{
		date.year=y;
		date.month=m;
		date.day=d;
		hour=h;
		min=mi;
		sec=s;
	}
	void setter(int y,int m,int d,int h,int mi,int s)
	{
		y=date.year;
		m=date.month;
		d=date.day;
		h=hour;
		mi=min;
		s=sec;
	}
	void show()
	{
		cout<<date.year<<"年"<<date.month<<"月"<<date.day<<"日"<<endl;
		cout<<hour<<"时"<<min<<"分"<<sec<<"秒";
	}
}; 
int main()
{
	DateTime *datetime1=new DateTime;
	cout<<endl;
	delete datetime1;
	DateTime datetime2(2000,12,9,20,0,0);
	return 0;
}
