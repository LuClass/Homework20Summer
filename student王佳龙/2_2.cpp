#include <iostream>
#include <string.h>
using namespace std;
class date{
	int year,month,day,hour,min;
public:
	int getyear(){
		return year;
	}
	int getmonth(){
		return month;
	}
	int getday(){
		return day;
	}
	int gethour(){
		return hour;
	}
	int getmin(){
		return min;
	}
	void setdate(int year,int month,int day,int hour,int min){
		this->year=year;
		this->month=month;
		this->day=day;
		this->hour=hour;
		this->min=min;
	}
	void print(){
		cout<<year<<"/"<<month<<"/"<<day<<" "<<hour<<":"<<min;
	}
};
class File {
	char  name[100];
	int size;
	date creat,change;
public:
	void setFile(char *name ,int size ,int year1,int month1,int day1,int hour1,int min1,int year2,int month2,int day2,int hour2,int min2){
		strcpy(this->name,name);
		this->size=size;
		creat.setdate(year1,month1,day1,hour1,min1);
		change.setdate(year2,month2,day2,hour2,min2); 
	}
	char* getname(){
		return name;
	}
	int getsize(){
		return size;
	}
	void print_creatdate(){
		creat.print();
	}
	void print_changedate(){
		change.print();
	}
}; 
class MediaFile:public File{
	char kind[100];
	date play;
public:
	File F1;
	MediaFile(char *name,int size,int year1,int month1,int day1,int hour1,int min1,int year2,int month2,int day2,int hour2,int min2,char *kind,int year3,int month3,int day3,int hour3,int min3):File(F1){
        setFile(name,size,year1,month1,day1,hour1,min1,year2,month2,day2,hour2,min2);
		strcpy(this->kind,kind);
		play.setdate(year3,month3,day3,hour3,min3);		
	}
	char* getkind(){
	    return kind;
	}
	void print_playdate(){
		play.print();
	}
};
int main (){
	File F1;
	F1.setFile("abc",111,2020,8,29,20,15,2020,8,30,12,51);
	MediaFile m1("abcde",222,2020,9,1,10,20,2020,9,9,15,41,"MP4",2020,9,10,20,14);
	cout<<m1.getname()<<endl;
	cout<<m1.getkind()<<endl;
	cout<<m1.getsize()<<"MB"<<endl;
	cout<<"创建时间: ";m1.print_creatdate();cout<<endl;
	cout<<"修改时间: ";m1.print_changedate();cout<<endl;	
	cout<<"播放时间: ";m1.print_playdate();cout<<endl;
}
