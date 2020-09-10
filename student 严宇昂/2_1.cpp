#include <iostream>
#include <time.h>
using namespace std;
class Date{
    int year, month, day;
    public:
    Date(int y, int m, int d)    : year(y), month(m), day(d) {

    }
    Date(){ 
        time_t ltime = time(NULL);
        tm * today = localtime(&ltime);
        year = today->tm_year + 1900;
        month = today->tm_mon + 1;
        day = today->tm_mday;    
    }
    ~Date(){ 
       
    }
    int getYear(){return year;}
    int getMonth(){return month;}
    int getDay(){return day;}
    bool isLeapYear(){
        return year%400 == 0 || year%4 == 0 && year%100 != 0;
    }
    void setDate(int y, int m, int d)
    {
        this->day = d;
        this->year = y;
        this->month = m;
    } 
};

class DateTime{
    Date date;
    int hour;
    int min;
    int sec;
    public:
    int getmin()    {return this->min;}
    int gethour()    {return this->hour;}
    int getsec()    {return this->sec;}

    DateTime(int hour, int min, int sec, Date dt = Date())
    {
           this->hour = hour;
           this->min = min;
           this->sec = sec;
           this->date = dt;
    }
    void printDateTime()
    {
        cout << this->date.getYear() << ".";
        cout << this->date.getMonth() << ".";
        cout << this->date.getDay() << ".";
        cout << this->gethour() << ".";
        cout << this->getmin() << ".";
        cout << this->getsec() << ".";
    }
  
};


