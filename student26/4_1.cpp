#include<iostream>
#include<string.h>

#define type1   "MUSIC"
#define type2   "VIDEO"

using namespace std;

class File
{
private:
	string name;
	double size;
	int creat_y,creat_m,creat_d;
	int alter_y,alter_m,alter_d;
public:
	File(){name="EMPTY FILE",size=0,creat_y=0,creat_m=0,creat_d=0,alter_y=0,alter_m=0,alter_d=0;}
	File(string s,double x,int a,int b,int c,int d,int e,int f)
	{
		name=s,size=x,creat_y=a,creat_m=b,creat_d=c,alter_y=d,alter_m=e,alter_d=f;
	}
	~File(){cout<<"File \""<<name<<"\" -- delete"<<endl;}
	string get_name(){return name;}
	void show_file()
	{
		cout<<name<<" "<<size<<"(kb)"<<" "<<endl<<"creat date: "<<creat_y<<"."<<creat_m<<"."<<creat_d<<endl<<"last alter: "<<alter_y<<"."<<alter_m<<"."<<alter_d<<endl;
	}	
};

class MediaFile:public File
{
private:
	string type;
	int time;
public:
	MediaFile(){type="unknown",time=0;}
	MediaFile(string s,int n,string name,double x,int a,int b,int c,int d,int e,int f):File(name,x,a,b,c,d,e,f)
	{
		type=s,time=n;
	}
	~MediaFile(){cout<<"MediaFile \""<<get_name()<<"\" -- delete"<<endl;}
	void show_mediafile()
	{
		cout<<"Type: "<<type<<" "<<time<<"(s)"<<endl;
		show_file();
	}
};

int main(void)
{
	MediaFile a(type2,120,"很有精神.avi",2200,2020,9,5,2020,9,9);
	a.show_mediafile();
	return 0;
}
