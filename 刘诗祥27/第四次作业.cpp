using namespace std;
#include <iostream>
class Date{
	int year;
	int month;
	int day;
public:
	void setdate(int a,int b,int c)
	{
		year=a;
		month=b;
		day=c;
	}
}; 
class File{
	char *name;
	int size;
	Date setdate;
	Date changedate;
public:
	void setdata(char *q,int size1,Date a,Date,b)
	{
		name=q;
		size=size1;
		setdate=a;
		changedate=b;
	}
	File(){
		/*name=nullptr;
		size=369;
		setdate.setdate();
		changedate.*/ 
	}
	
	~File(){
	}
};

class MediaFile:public File{
	char kind;
	Date opendate;
public:
	MediaFile()
	{
		//³õÊ¼»¯ 
		
		/*kind='a';
		opendate.year=2020;
		opendate.month=9;
		opendate.day=9;
		cout<<" "<<size<<" "<<setdate.year<<"."<<setdate.month<<setdate.day<<endl;
		cout<<kind<<" "<<opendate.year<<"."<<opendate.month<<"."<<opendate.day<<endl; */
	}
	~MediaFile(){
	}
};
/*main(){
	MediaFile a;
}*/
