#include <iostream> 
#include <time.h>
using namespace std;
class Date{
	private:
	  int year,month,day;
	public:
	 Date(){					//构造函数2：当前日期
		time_t ltime = time(NULL); 	//取得当前时间
		tm * today = localtime(&ltime);//转换为本地时间
		year = today->tm_year + 1900;	//取得当前年份
		month = today->tm_mon + 1;	//取得当前月份,0-11
		day = today->tm_mday;		//取得当前日,1-31
	}


	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
		cout << "Constructor of Date"<<endl;
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
	int hour,min,sec;
	Date date;
public:
		DateTime(){
		time_t ltime = time(NULL);
		tm * today = localtime(&ltime);
		hour = today->tm_hour;
		min=today->tm_min;
		sec=today->tm_sec;
	}
DateTime(int year, int month, int day, int hour, int min, int sec):date(year,month,day) {
		this->hour = hour;
		this->min = min;
		this->sec = sec;
		cout << "Constructor of DateTime"<<endl;

	}
	void setHour(int h) {
		hour = h;}
	void  setMin(int m) {
		min = m;}
	void setSec(int s) {
		sec = s;}
	void setDate(int y, int m, int d) { date.setYear(y); date.setMonth(m); date.setDay(d); }
	int getHour() { return hour; }
	int getMin() { return min; }
	int getSec() { return sec; }
	void show() {
		cout << date.getYear() << "." << date.getMonth() << "." << date.getDay() << " " << getHour() << ":" << getMin() << ":" << getSec() << endl;
	}
};
int main() {
	DateTime t;
    t.show();
	DateTime t2(2000, 8, 14, 18, 12, 20);
	t2.show();
	return 0;
}
