#include<iostream>
using namespace std;
enum MediaType {
	audio, video;
};
class Date {
private:
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	public Date(int year, int month, int day, int hour, int minute, int second) :
		year(year), month(month), day(day), hour(hour), minute(minute), second(second) {
	}
};
class File {
private:
	string filename;
	int filesize;
	Date Createdate;
	Date Lastmodifieddate;
public:
	File(string filename, int filesize, int year1, int month1, int day1, int hour1, int minute1, int second1,
		int year2, int month2, int day2, int hour2, int minute2, int second2) :filename(filename), filesize(filesize),
		Date(year1, month1, day1, hour1, minute1, second1), Date(year2, month2, day2, hour2, minute2, second2) {
	}
	void print() {
		cout << "filename is" << filename << ", " << "filesize is" << filesize << "kb, " << "Createdate is" << Createdate.year << "-" << Createdate.month << "-" << Createdate.day << " " <<
			Createdate.hour << ":" << Createdate.minute << " :" << Createdate.second << ", " << "Lastmodifieddate is" << Lastmodifieddate.year << "-" << Lastmodifieddate.month << "-" << Lastmodifieddate.day << " " <<
			Lastmodifieddate.hour << ":" << Lastmodifieddate.minute << " :" << Lastmodifieddate.second << endl;
	}



};
/*class MediaFile:public File{
	private:
		MediaType type;
		int playtime;
	public:
		MediaFile(string filename,int filesize,int year1,int month1,int day1,int hour1,int minute1,int second1,
	   int year2,int month2,int day2,int hour2,int minute2,int second2,MediaType type,int playtime):File(string filename,int filesize,int year1,int month1,int day1,int hour1,int minute1,int second1,
	   int year2,int month2,int day2,int hour2,int minute2,int second2){
		this->type=type;
		this->playtime=type;
	   }

};*/
int main() {
	File f1("·É"£¬88, 2000, 10, 01, 05, 20, 00, 2018, 10, 28, 05, 20, 00);
	f1.print();

	return 0;
}