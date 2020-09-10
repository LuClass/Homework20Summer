using namespace std;
#include<iostream>
#include<time.h>
class Date
{
	int year,month,day;
	public:
	void setdate(int year,int month,int day)
	{
		this->year=year;
		this->month=month;
		this->day=day;
	}
	void print()
	{
		cout<<year<<"."<<month<<"."<<day;
	}
		
};
class datetime
{
	private:Date date;
	        int  hour,min,sec;
	public:
		void setter(int year,int month,int day,int  hour,int min,int sec)
		{
			date.setdate(year,month,day);
			
		}
		void show()
		{
			date.print();
			cout<<"-"<<hour<<":"<<min<<":"<<sec<<endl;
		}
		datetime()
	{         
	    time_t ltime = time(NULL);
	    tm * today = localtime(&ltime); 
        int year = today->tm_year + 1900;
        int month = today->tm_mon + 1; 
	    int day = today->tm_mday;
	    date.setdate(year,month,day);
        
        hour=today->tm_hour;
        min=today->tm_min;
        sec=today->tm_sec;
    }  
    datetime(int year,int month,int day,int  hour,int min,int sec)
    {
    	date.setdate(year,month,day);
    	this->hour=hour;
    	this->min=min;
    	this->sec=sec;
	}		
};

     
int main()
{
	datetime date1;
	date1.show();
	datetime date2(2001,01,01,10,10,10);
	date2.show();
	date2.setter(2001,02,02,10,10,10);
	date2.show();
	return 0;
	
}
