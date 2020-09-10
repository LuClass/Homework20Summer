#include <iostream>//p293  14

#include <time.h>

using namespace std;

class Date {

	int year, month, day;

public:

	Date(int y, int m, int d)

		: year(y), month(m), day(d) {

	}

	Date() {

		time_t l = time(NULL);

		tm * today = localtime(&l);

		year = today->tm_year + 1900;

		month = today->tm_mon + 1;

		day = today->tm_mday;

	}

	int getyear() { return year; }

	int getmonth() { return month; }

	int getday() { return day; }

	void setyear(int a) { year = a; }

	void setmonth(int a) { month = a; }

	void setday(int a) { day = a; }



	void show() {

		cout << "year= " << year << "; month= " << month << "; day= " << day << endl;

	}
};

class DateTime {

	int hour, min, sec;

	Date date;

public:

	DateTime() {

		time_t l = time(NULL);

		tm * today = localtime(&l);

		hour = today->tm_hour;

		min = today->tm_min;

		sec = today->tm_sec;

	}

	DateTime(int year, int month, int day, int hour, int min, int sec) :date(year, month, day) {

		this->hour = hour;

		this->min = min;

		this->sec = sec;

	}

	int gethour() { return hour; }

	int getmin() { return min; }

	int getsec() { return sec; }

	void getdate() { return date.show(); }

	void sethour(int a) { hour = a; }

	void setmin(int a) { min = a; }

	void setsec(int a) { sec = a; }

	void setdate(int a, int b, int c) {

		date.setyear(a);

		date.setmonth(b);

		date.setday(c);

	}

	void show() {

		cout << "现在是" << date.getyear() << "年" << date.getmonth() << "月" << date.getday() << "日" << hour << "时" << min << "分" << sec << "秒" << endl;

	}

};
int main() {

	DateTime d1(2003, 9, 31, 23, 48, 59), d2;

	d1.show();

	d2.show();

	d1.setdate(1999, 9, 30);

	d1.sethour(7); d1.setmin(34); d1.setsec(25);

	d1.show();

}