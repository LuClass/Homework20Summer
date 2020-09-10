#include<iostream>
#include<time.h>
using namespace std;
class Date{
	int year,month,day;
	public:
		Date(int y,int m,int d){
			year=y;
			month=m;
			day=d;
		}
		Date(){
				time_t ltime=time(NULL);
		tm*today=localtime(&ltime);
		year=today->tm_year+1900;
		month=today->tm_mon+1;
		day=today->tm_mday;
		}
		void setterYear(int y){year=y;}
		void setterMonth(int m){month=m;}
		void setterDay(int d){day=d;}
		
   int getterYear(){return year;}
   int getterMonth(){return month;}
   int getterDay(){return day;}
};
class DateTime{
	  int hour,min,sec;
	  Date date;//调用别的类作为这个类的私有成员 
public:
	DateTime(int year,int month,int day,int hour,int min,int sec)
//	:date(year,month,day)
{   this->hour=hour;
    this->min=min;
    this->sec=sec;
	
	
	show();
}	DateTime(){
		time_t ltime=time(NULL);
		tm*today=localtime(&ltime);
		hour=today->tm_hour;
		min=today->tm_min;
		sec=today->tm_sec;
		show();
	} 
		void setterHour(int h){hour=h;}
		void setterMonth(int mi){min=mi;}
		void setterSec(int s){sec=s;}
   int getterHour(){ return hour;
   }
   int getterMin(){
   	return min;
   }
   int getterSec(){
   	return sec;
   }
   void show(){
   	cout<<date.getterYear()<<"."<<date.getterMonth()<<"."<<date.getterDay()<<" "<<hour<<":"<<min<<":"<<sec;
   }
};
int main(){
		DateTime date1(2019,6,8,17,20,10);
		cout<<endl;
		DateTime *date2=new DateTime;
		delete date2;

}
