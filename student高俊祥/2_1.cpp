#include<iostream>
#include<string>
#include<iomanip>
#include<time.h>
using namespace std;
class Date {
	int year, month, day;
public:
	void set_year(int y) {
		year = y;
	}
	void set_month(int m) {
		month = m;
	}
	void set_day(int d) {
		day = d;
	}
	int get_year() {
		return year;
	}
	int get_month() {
		return month;
	}
	int get_day() {
		return day;
	}
	Date() {
		time_t ltime = time(NULL); 
		tm* today = localtime(&ltime);
		year = today->tm_year + 1900;
		month = today->tm_mon + 1;
		day = today->tm_mday;
	}
};

class DateTime {
	Date  date;
	int hour, min, sec;
public:
	void set_hour(int h) {
		hour = h;
	}
	void set_min(int m) {
		min = m;
	}
	void set_sec(int s) {
		sec = s;
	}
	int get_hour() {
		return hour;
	}
	int get_min() {
		return min;
	}
	int get_sec() {
		return sec;
	}
	void show() {
		cout << "现在是" << date.get_year() << "年" << date.get_month() << "月" << date.get_day() << "日";
		cout << this->get_hour() << "时" << this->get_min() << "分" << this->get_sec() << "秒" << endl;
	}
	DateTime() {
		time_t ltime = time(NULL);
		tm* today = localtime(&ltime);
		hour = today->tm_hour;
		min = today->tm_min;
		sec = today->tm_sec;
	}
	DateTime(int year, int month, int day, int hour, int min, int sec) {
		date.set_year(year);
		date.set_month(month);
		date.set_day(day);
		this->set_hour(hour);
		this->set_min(min);
		this->set_sec(sec);
	}

};
int main() {
	DateTime A;
	A.show();
}
