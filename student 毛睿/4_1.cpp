#include <iostream>
#include <sstream>
using namespace std;

class Date {
private: 
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	string getDate() {
		stringstream st;
		st << year;
		st << month;
		st << day;
		string str = st.str();
		return str;
		
	}
	void setDate(int y,int m, int d) {
		year = y;
		month = m;
		day = d;
	}
};
class File {
private :
	string name;
	int size;
	Date cTime;
	Date mTime;
	bool onlyRead;
	string path;
public:
	File(string n, int s, int y, int m, int d, int ym, int mm, int dm, bool r ,string p):cTime(y,m,d),mTime(ym,mm,dm) {
		name = n;
		size = s;
		onlyRead = r;
		path = p;
	}
	string getName() {
		return name;
	}
	int getSize() {
		return size;
	}
	string getCTime() {
		return cTime.getDate();
	}
	string getMTime() {
		return mTime.getDate();
	}
	bool getRead() {
		return onlyRead;
	}
	string getPath() {
		return path;
	}
	
	void setName(string n) {
		name = n;
	}
	void setSize(int s) {
		size = s;
	}
	void setCTime(Date date) {
		cTime = date;
	}
	void setMTime(Date date) {
		mTime = date;
	}
	void setR(bool b) {
		onlyRead = b;
	}
	void setPath(string p) {
		path = p;
	}
};

class MediaFile : File {
private:
	string type;
	double pTime;//播放时长
	int frameSpeed;//帧速率
public:
	MediaFile(string t, double pt, int fs, string n, int s, int y, int m, int d, int ym, int mm, int dm, bool r, string p) :File(n, s, y, m, d, ym, mm, dm, r, p) {
		type = t;
		pTime = pt;
		frameSpeed = fs;
	}
	string getType() {
		return type;
	}
	double getpTime(){
		return pTime;
	}
	int getFS() {
		return frameSpeed;
	}

	void setType(string t) {
		type = t;
	}
	void setPTime(double p) {
		pTime = p;
	}
	void setFS(int s) {
		frameSpeed = s;
	}
};