#include<iostream>
#include<time.h>

using namespace std;

class Date{
		int year,month,day;
	public:
		Date(){
			time_t ltime=time(NULL);
			tm * today=localtime(&ltime);
			year=today->tm_year+1900;
			month=today->tm_mon+1;
			day=today->tm_mday;
		}
		Date(int y,int m,int d){
			year=y;
			month=m;
			day=d;
		}
		void setter(){
			cin>>year>>month>>day;
		}
		void show(){
			cout<<year<<'.'<<month<<'.'<<day;
		}
};

class DateTime{
		Date date;
		int hour,minute,second;
	public:
		DateTime(int year,int month,int day,int hour,int minute,int second)
		:date(year,month,day),hour(hour),minute(minute),second(second){}
		DateTime():date(){
			time_t ltime=time(NULL);
			tm * today=localtime(&ltime);
			hour=today->tm_hour;
			minute=today->tm_min;
			second=today->tm_sec;
		}
		void setter(){
			date.setter();
			cin>>hour>>minute>>second;
		}
		void show(){
			date.show();
			cout<<' '<<hour<<':'<<minute<<':'<<second<<'\n';
		}
};

int main(void)
{
	DateTime d1;
	d1.show();
	return 0;
}
