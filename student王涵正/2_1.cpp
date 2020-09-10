#include<iostream>
#include<time.h>
using namespace std;
class Date{
private:
int year,month,day;
public:
void setyear(int y){
year=y;	
}
void setmonth(int m){
month=m;	
}
void setday(int d){
day=d;	
}
void getyear(){
cout<<year;	
}
void getmonth(){
cout<<month;	
}
void getday(){
cout<<day;	
}	
};
class DateTime{
private:Date date;
int hour;int min;int sec;
public:	
DateTime(){
time_t ltime=time(NULL);
tm*today=localtime(&ltime);
date.setyear(today->tm_year+1900);
date.setmonth(today->tm_mon+1);
date.setday(today->tm_mday);
this->hour=today->tm_hour;
this->min=today->tm_min;	
this->sec=today->tm_sec;		
getter();	
cout<<endl;	//缺省构造取当前时间 
}

DateTime(int year,int month,int day,int hour,int min,int sec){
date.setyear(year);
date.setmonth(month);
date.setday(day);
this->hour=hour;
this->min=min;
this->sec=sec;
}//构造函数2取输入时间 
void setter(int year,int month,int day,int hour,int min,int sec){
date.setyear(year);
date.setmonth(month);
date.setday(day);
this->hour=hour;
this->min=min;
this->sec=sec;	
}
void getter(){
date.getyear();cout<<".";date.getmonth();cout<<".";date.getday();cout<<"  ";cout<<hour<<"."<<min<<"."<<sec<<endl; 
}
void show(){
date.getyear();cout<<"年";
date.getmonth();cout<<"月";
date.getday();cout<<"日";
cout<<hour<<":"<<min<<":"<<sec<<endl;	
}	
	
};

int main(){
DateTime date1;
DateTime date2(2000,10,28,0,27,20);	
date2.getter();	
date1.setter(2001,9,29,0,34,12);
date1.show();	
}


