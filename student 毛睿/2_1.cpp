#include <iostream>
#include<time.h>
using namespace std;
class Date {
private:
	int year;
	int month;
	int day;
public:
	Date() {
		time_t ltime = time(NULL);
		struct tm ptm;
		localtime_s(&ptm, &ltime);
		cout << "Defalut Constructor of Date\n";
		year = ptm.tm_year + 1900;
		month = ptm.tm_mon + 1;
		day = ptm.tm_mday;
	}
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
		cout << "Constructor of Date\n";

	}
	void setYear(int y) { year = y; }
	void setMonth(int m) { month = m; }
	void setDay(int d) { day = d; }
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
	
};
class DateTime {
private:
	int hour;
	int min;
	int sec;
	Date date;

public:
	DateTime(){
		time_t ltime = time(NULL);
		struct tm ptm;
		localtime_s(&ptm, &ltime);
		hour = ptm.tm_hour;
		min = ptm.tm_min;
		sec = ptm.tm_sec;
		cout << "Defalut Constructor of DateTime\n";
	}
	DateTime(int year, int month, int day, int hour, int min, int sec):date(year,month,day) {
		this->hour = hour;
		this->min = min;
		this->sec = sec;
		cout << "Constructor of DateTime\n";

	}
	void setHour(int h) {
		hour = h;
	}
	void  setMin(int m) {
		min = m;
	}
	void setSec(int s) {
		sec = s;
	}
	void setDate(int y, int m, int d) { date.setYear(y); date.setMonth(m); date.setDay(d); }
	int getHour() { return hour; }
	int getMin() { return min; }
	int getSec() { return sec; }
	void show() {
		cout << date.getYear() << "." << date.getMonth() << "." << date.getDay() << " " << getHour() << ":" << getMin() << ":" << getSec() << endl;
	}
};
int main() {
	DateTime dt;
    dt.show();
	DateTime dt2(1999, 11, 3, 14, 35, 27);
	dt2.show();
}