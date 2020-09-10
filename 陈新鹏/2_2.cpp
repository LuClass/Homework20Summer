#include<iostream>
using namespace std;

class File
{
	string name;
	double size;
	int year,month,day;
	int cyear,cmonth,cday;
public:
	File(string n="EMPTY", double s=0, int y=0, int m=0, int d=0, int cy=0, int cm=0, int cd=0)
	{
		name=n;size=s;
		year=y;month=m;day=d;
		cyear=cy;cmonth=cm;cday=cd;	
	}	
	void show()
	{
		cout<<name<<"   "<<size<<" kb   创建日期："<<year<<"."<<month<<"."<<day<<"   修改日期："<<cyear<<"."<<cmonth<<"."<<cday<<endl;
	}
}; 

class MediaFile:public File
{
	string type;
	int playtime;
public:
	MediaFile(string n, double s, int y, int m, int d, int cy, int cm, int cd, string t="EMPTY", int p=0):File(n,s,y,m,d,cy,cm,cd)
	{
		type=t;
		playtime=p;
	}
	void Mshow()
	{
		cout<<"文件类别:"<<type<<"  播放时间："<<playtime<<" s"<<endl;
		show(); 
	}
};

int main()
{
	MediaFile p("hello", 1000, 2020, 9, 9, 2020, 9, 10, "video", 100);
	p.Mshow();
}
