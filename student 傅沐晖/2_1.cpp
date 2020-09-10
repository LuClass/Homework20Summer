#include <iostream>
#include <time.h>

using namespace std;


class Date {
	int year, month, day;
public:
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	Date() {
		struct tm t;   //tm结构指针
		time_t now;  //声明time_t类型变量
		time(&now);      //获取系统日期和时间
		localtime_s(&t, &now);
		year = t.tm_year + 1900;
		month = t.tm_mon + 1;
		day = t.tm_mday;
	}

	void setdate(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}

	int getyear() {
		int y = year;
		return y;
	}

	int getmonth() {
		int m = month;
		return m;
	}

	int getday() {
		int d = day;
		return d;
	}
	
	void show() {
		cout << year << '/' << month << '/' << day<< " ";
	}
};

class Datetime {
	Date date;
	int hour, min, sec;

public:
	Datetime() { 
		struct tm t;   
		time_t now;  
		time(&now);      
		localtime_s(&t, &now);
		hour = t.tm_hour;
		min = t.tm_min;
		sec = t.tm_sec;
	}
	Datetime(int year, int month, int day, int hour, int min, int sec)
		:hour(hour), min(min), sec(sec), date(year, month, day)
	{
	}
	void setter(int y, int m, int d, int hour, int min, int sec) {   //写
		date.setdate(y, d, m);
		this->hour = hour;
		this->min = min;
		this->sec = sec;

	}
	void getter() {   //读
		cout << "DateTime:";
		date.show();
		cout << hour << ":" << min << ":" << sec << endl;
	}
	void show() {
		int a = date.getyear();
		int b = date.getmonth();
		int c = date.getday();
		cout << "当地时间为:" << a << "年" << b << "月" << c << "日" << hour << "时" << min << "分" << sec << "秒"<< endl;
	}
};


int main()
{
	Datetime date1;
	date1.getter();
	Datetime date2;
	date2.show();
	date2.setter(2001, 2, 4, 0, 14, 20);
	date2.show();

}