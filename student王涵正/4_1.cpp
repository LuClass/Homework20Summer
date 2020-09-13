#include<iostream>
#include<time.h>
using namespace std;
class Date{
	int year,month,day;
	public:
		Date(int y,int m,int d)
		: year(y),month(m),day(d){}
		Date()
		{
			time_t ltime = time(NULL);
			tm * today = localtime(&ltime);
			year = today -> tm_year + 1900;
			month = today -> tm_mon + 1;
			day = today -> tm_mday;
		}
		Date(const Date &d)
		: year(d.year),month(d.month),day(d.day){}
		Date & operator=(const Date & d){
			year = d.year;
			month = d.month;
			day = d.day;
			return *this;
		}
		~Date(){}
		void setYear(int year){this->year = year;}
		void setMonth(int month){this->month = month;}
		void setDay(int day){this->day = day;}
		int getYear(){return year;}
		int getMonth(){return month;}
		int getDay(){return day;}
		bool isLeapYear()
		{
			return year%400 == 0 || year%4 == 0 && year%100 != 0;
		}
		void print(){
			cout<<year<<"."<<month<<"."<<day;
		}
};
class File{
	private:
		string name;
		double size;
		Date create_date,revise_date;
	public:
		File(Date create ,Date revise ,string name,float size)
			{
				this->name = name;
				this->size = size;
				this->create_date = create;
				this->revise_date = revise;
			}
		File(){this->name = "untitled";this->size = 0;}
void setName(string name){
			this->name = name;
		}
		void setSize(int size){
			this->size = size;
		}
		void setCreateDate(Date date){
			this->create_date = date;
		}
		void setReviseDate(Date date){
			this->revise_date = date;
		}
void print(){
			cout<<this->name<<endl;
			cout<<this->size<<"kb"<<endl;
			create_date.print();
			cout<<endl;
			revise_date.print();
		}
};
class MediaFile:public File{
	private:
		string kind;
		int time;
   public:
   	MediaFile(Date create = {0,0,0},Date modify = {0,0,0},string name = "untitled",float size = 0
				,string kind= "unknown",int time = 0)
			:File(create,modify,name,size)
			{
				this->kind = kind;
				this->time = time;
			}
};
int main(){
	
}
 
