//P293.14
#include<iostream>
#include<time.h>
using namespace std;
class date{
	int year,month,day;
	public:
	void setdate(int year,int month,int day){
		this->year=year;
		this->month=month;
		this->day=day;
	}
	void setyear(){
		cin>>year;
	}
	void setmonth(){
		cin>>month;
	}
	void setday(){
		cin>>day;
	}
	int getyear(){
		return year;
	}
	int getmonth(){
		return month;
	}
	int getday(){
		return day;
	}
	date(){
		time_t ltime=time(NULL);
		tm * today=localtime(&ltime);
		year=today->tm_year+1900;
		month=today->tm_mon+1;
		day=today->tm_mday;
	}
	void print(){
		cout<<year<<'.'<<month<<'.'<<day<<' ';
	}	
};
class DateTime{
	private:
		date date1;
		int hour,min,sec;
	public:
		DateTime(int year,int month,int day,int hour,int min,int sec){
			this->date1.setdate(year,month,day);
		    this->hour=hour;
		    this->min=min;
		    this->sec=sec;
		}
		DateTime(){
			time_t ltime=time(NULL);
			tm * today=localtime(&ltime);
			date1;
			hour=today->tm_hour;
			min=today->tm_min;
			sec=today->tm_sec;
		}
	void sethour(){
		cin>>hour;
	}
	void setmin(){
		cin>>min;
	}
	void setsec(){
		cin>>sec;
	}
	int gethour(){
		return hour;
	}
	int getmin(){
		return min;
	}
	int getsec(){
		return sec;
	}		
		void show(){
			date1.print();
			cout<<hour<<':'<<min<<':'<<sec<<endl;
		}		
};
int main()
{
	DateTime time1,time2(2001,3,1,20,10,20);
	time1.show();
	time2.show();
	return 0;
}
