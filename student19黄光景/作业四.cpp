#include <iostream>
#include <string.h>
using namespace std;

class File{
	string fname;
	int size;
	string credate,chadate;
	public:
		string getname(){return fname;}
		int getsize(){return size;}
		string getcre(){return credate;}
		string getcha(){return chadate;}
		void setname(string s){fname=s;}
		void setsize(int s){size=s;}
		void setcre(string s){credate=s;}
		void setcha(string s){chadate=s;}
};

class MediaFile:public File{
	string type,time;
};

