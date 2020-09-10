//p293 14
#include <bits/stdc++.h>
#include <ctime>
#pragma warning(disable:4996)
using namespace std;
class Date {
private:
	int year, month, day;
public:
	Date(int y, int m, int d) {		//构造函数1
		year = y;
		month = m;
		day = d;
	}
	Date() {					//构造函数2：当前日期
		time_t ltime = time(NULL); 	//取得当前时间
		tm* today = localtime(&ltime);//转换为本地时间
		year = today->tm_year + 1900;	//取得当前年份
		month = today->tm_mon + 1;	//取得当前月份,0-11
		day = today->tm_mday;		//取得当前日,1-31
	}
	int getYear() {
		return this->year;
	}
	int getMonth() {
		return this->month;
	}
	int getDay() {
		return this->day;
	}
	void setYear(int year) {
		this->year = year;
	}
	void setMonth(int month) {
		this->month = month;
	}
	void setDay(int day) {
		this->day = day;
	}
};

class DateTime{
private:
	Date d;
	int hour, min, sec;
public:
	DateTime() {
		time_t ltime = time(NULL);
		tm* today = localtime(&ltime);
		hour = today->tm_hour;
		min = today->tm_min;
		sec = today->tm_sec;
	}
	//DateTime(int year, int month, int day, int hour, int min, int sec) :d(year, month, day), hour(hour), min(min), sec(sec) {}
	DateTime(int year, int month, int day, int hour, int min, int sec) {
		d.setYear(year);
		d.setMonth(month);
		d.setDay(day);
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}
	void setDate(Date d) {
		this->d = d;
	}
	Date getDate() {
		return this->d;
	}
	void setHour(int hour) {
		this->hour = hour;
	}
	void setMin(int min) {
		this->min = min;
	}
	void setSec(int sec) {
		this->sec = sec;
	}
	int getHour() {
		return this->hour;
	}
	int getMin() {
		return this->min;
	}
	int getSec() {
		return this->sec;
	}
	void show() {
		cout << this->getDate().getYear() << "年" << this->getDate().getMonth() << "月" << this->getDate().getDay() << "日"
			<< this->getHour() << "时" << this->getMin() << "分" << this->getSec() << "秒" << endl;
	}
};

int main() {
	DateTime dt0;
	dt0.show();
	DateTime dt1(1919, 5, 4, 12, 10, 5);
	dt1.show();
	return 0;
}