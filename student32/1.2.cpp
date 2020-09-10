#include <bits/stdc++.h>
using namespace std;

class Date{
	private:
		int year,month,day;
	public:
		void setdate(int y,int m,int d){
			year=y;
			month=m;
			day=d;
		}
		void print(){
			cout<<year<<"."<<month<<"."<<day;
		}
};

class DateTime{
	private:
		Date date;
		int hour,min,sec;
	public:		
		DateTime(int year,int month,int day,int hour,int min,int sec){
		    date.setdate(year,month,day);
			this->hour=hour;
			this->min=min;
			this->sec=sec;			
		}
		DateTime(){
			time_t ltime=time(NULL);
			tm * today=localtime(&ltime);
			int y=today->tm_year+1900;
			int m=today->tm_mon+1;
			int d=today->tm_mday;
			date.setdate(y,m,d);
			hour=today->tm_hour;
			min=today->tm_min;
			sec=today->tm_sec;
		}
		void setter(int year,int month,int day,int hour,int min,int sec){
			date.setdate(year,month,day);
			this->hour=hour;
			this->min=min;
			this->sec=sec;
		}
		int getter(){
		    return sec;	
		}
		void show(){
			cout<<"日期：";
			date.print(); 
			cout<<endl;
			cout<<"时间："; 
			printf("%d:%d:%d\n",hour,min,sec);
		}
}; 

int main(){
	DateTime d1;
	int x=d1.getter();
	cout<<x<<endl;
	cout<<"date 1:"<<endl;
	d1.show();
	cout<<endl;
	DateTime d2(2000,01,01,12,12,12);
	cout<<"date 2:"<<endl;
	d2.show();
	cout<<endl;
	return 0;
}
