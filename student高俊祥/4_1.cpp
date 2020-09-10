#include<iostream>
#include<string>
#include<iomanip>
#include<time.h>
using namespace std;
class File {
	string name;
	int size;
	string create_date;
	string last_change_date;
public:
	File(string name, int size, string cdate, string lcdate) {
		this->name = name;
		this->size = size;
		create_date = cdate;
		last_change_date = lcdate;
	}
	void get_name() {
		cout << name << endl;
	}
	void get_size() {
		cout <<size << endl;
	}
	void get_create_date() {
		cout << create_date << endl;
	}
	void get_last_change_date() {
		cout << last_change_date << endl;
	}
};
class MediaFile:public File {
	string type;
	string play_time;
public:
	MediaFile(string name, int size, string cdate, string lcdate,string type,string play_time):File(name,size,cdate,lcdate){
		this->type = type;
		this->play_time = play_time;
	}
	void show() {
		this->get_name();
		this->get_size();
		this->get_create_date();
		this->get_last_change_date();
		cout << this->type << endl;
		cout << this->play_time;
	}
};
int main() {
	MediaFile tell_you_world("tell_you_world", 56455, "2009-05-12", "2015-05-12", "mp3", "2020-09-09");
	tell_you_world.show();
}