#include <bits/stdc++.h>
using namespace std;

class Date{
	private:
		int year, month, day;
	public:
	    Date()
	    {
	    	year=0;
			month=0;
			day=0;
		}
		void setDate(int y, int m, int d)
		{
			year=y;
			month=m;
			day=d;
		} 
		int getYear()
		{
			return year;
		}
		int getMonth()
		{
			return month;
		}
		int getDay()
		{
			return day;
		}
		void showDate()
		{
			cout<<year<<"."<<month<<"."<<day<<endl;
		}
};

class File{
	private:
		string name;
		double size;
		Date setd1;
		Date resetd2;
	public:
		File()
		{
			name="EMPTY FILE",size=0;
		}
		File(string s,double a,int b,int c,int d,int e,int f,int g)
		{
			name=s,size=a;
			setd1.setDate(b,c,d);
			resetd2.setDate(e,f,g);
		}
		string getName(){return name;}
		void showFile()
		{
			cout<<"Name: "<<name<<endl<<"Size: "<<size<<"(Mb)"<<endl;
			cout<<"Setdate: ";setd1.showDate();
			cout<<"Resetdate: ";resetd2.showDate();
		}
};

class MediaFile: public File{
	private:
	    string type;
	    int time;
	public:
		MediaFile()
		{
		    type="unknown",time=0;
		}
		MediaFile(string s,int n,string name,double x,int a,int b,int c,int d,int e,int f):File(name,x,a,b,c,d,e,f)
	    {
		    type=s,time=n;
	    }
	    void showMediaFile()
	{
		cout<<"Type: "<<type<<endl<<"Time: "<<time<<"(s)"<<endl;
		showFile();
	}
};

int main()
{
	MediaFile a("mp3",180,"fade",3.2,2016,9,9,2020,9,9);
	a.showMediaFile();
	return 0;
}
