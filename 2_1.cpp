#include <iostream>
#include <time.h>
using namespace std;
class Date{
	int year,month,day;
public:
	Date(int y,int m,int d){
		year=y;month=m;day=d;
	}
	Date(){
		time_t ltime = time(NULL);
		tm * today = localtime(&ltime);
		year = today->tm_year + 1900;
		month = today->tm_mon + 1;
		day = today->tm_mday;    
	}
	int getyear(){return year;}
	int getmonth(){return month;}
	int getday(){return day;}
	void setdate(int y, int m, int d){
		day=d;year=y;month=m;
	} 
};

class DateTime{
	Date day;
	int hour;
	int min;
	int sec;
public:
   int getmin(){return min;}
   int gethour(){return hour;}
   int getsec(){return sec;}
   DateTime(){
		time_t now=time(0);
		tm* ltm=localtime(&now);
		hour=ltm->tm_hour;
		min=ltm->tm_min;
		sec=ltm->tm_sec;
	}
   DateTime(int h,int m,int s,Date d=Date()){
		hour=h;min=m;sec=s;day=d;
   }
   void show(){
      cout<<day.getyear()<<".";
      cout<<day.getmonth()<<".";
      cout<<day.getday()<<".";
      cout<<gethour()<<".";
      cout<<getmin()<<".";
      cout<<getsec();
    }
};

int main(){
	DateTime d;
	d.show();
	return 0;
}
