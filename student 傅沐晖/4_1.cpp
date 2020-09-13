#include <iostream>
#include <time.h>

using namespace std;


class Date {
	int year, month, day;
public:
	Date() {
		struct tm t;   //tm结构指针
		time_t now;  //声明time_t类型变量
		time(&now);      //获取系统日期和时间
		localtime_s(&t, &now);
		year = t.tm_year + 1900;
		month = t.tm_mon + 1;
		day = t.tm_mday;
	}
	Date(int year , int month , int day){
		this->year = year;
		this->month = month;
		this->day = day;
	}
	void getdate() {
		cout << year << '.' << month << '.' << day << endl;
	}
};



class File {	//磁盘文件
	string filename;
	double size;
	Date Cdate;
	Date Mdate;

public:
	File(string x,double s) :Cdate(2020, 9, 9), Mdate(),filename(x),size(s) {
	}
	void getFile() {
		cout << "文件名：" << filename << endl;
		cout << "大小：" << size << "m" << endl;
		cout << "创建日期："; Cdate.getdate(); 
		cout << "修改日期："; Mdate.getdate(); 
	}


};

class MediaFile :public File {	//多媒体文件
	string type;
	double playtime;

public:
	MediaFile(string type, double playtime, string x,double s) :File(x,s) {
		this->type = type;
		this->playtime = playtime;
	}
	void getMediaFile() {
		getFile();
		cout << "媒体类别：" << type << endl;
		cout << "播放时间：" << playtime << "s" << endl;
	}
};




int main()
{
	MediaFile mediafile1("音频", 163, "BADDEST",6.21 );
	mediafile1.getMediaFile();
    
}

