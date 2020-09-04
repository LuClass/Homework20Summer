using namespace std;
#include <iostream>
#include <time.h>
class Date{
public:
	int year;
	int month;
	int day;
};
class DateTime{
private:
	Date date;
	int h;
	int m;
	int s;
public:
	DateTime(){
		time_t ltime=time(NULL);
		tm *today=localtime(&ltime);
		date.year=today->tm_year+1900;
		date.month=today->tm_mon+1;
		date.day=today->tm_mday;
		h=today->tm_hour;
		m=today->tm_min;
		s=today->tm_sec;
	}
	DateTime(int year,int month,int day,int hour,int min,int sec);
	void SetDateTime(int year,int month,int day,int hour,int min,int sec);
	void GetDateTime(int year,int month,int day,int hour,int min,int sec);
	void show(){
		cout<<date.year<<"."<<date.month<<"."<<date.day<<endl;
		cout<<h<<":"<<m<<":"<<s<<endl;
	};
};
void DateTime::GetDateTime(int year,int month,int day,int hour,int min,int sec)
{
	year=date.year;
	month=date.month;
	day=date.day;
	hour=h;
	min=m;
	sec=s;
}
void DateTime::SetDateTime(int year,int month,int day,int hour,int min,int sec)
{
	date.year=year;
	date.month=month;
	date.day=day;
	h=hour;
	m=min;
	s=sec;
}
int main()
{
	DateTime *a= new DateTime;
	a->show();
	delete a;
	return 0;
}

