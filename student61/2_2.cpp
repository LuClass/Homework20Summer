#include<iostream>
using namespace std;
class Date{
public:
    int year,month,day;
	Date(int x = 0,int y = 0,int z = 0){
		year=x;
		month=y;
		day=z;
	}  
	void print(){
		cout<<year<<"."<<month<<"."<<day;
	}
};
class File{
public:
	string name;
	double filesize;
	Date createdate;
	Date changedate;
	File(char *fname,double a,int x,int y,int z,int d,int e,int f){
     name=fname;
	 filesize=a;
	 createdate.year=x;
	 createdate.month=y;
	 createdate.day=z;
	 changedate.year=d;	
	 changedate.month=e;	
	 changedate.day=f;	
	 				
	}
	
}; 
class MediaFile:public File{
public:	
    string sort;
	Date playdate;
	MediaFile(char *fname,double a,int x,int y,int z,int d,int e,int f,char *fsort,int b,int c,int g):
	File(fname,a,x,y,z,d,e,f){
	sort=fsort;
	playdate.year=b;	
	playdate.month=c;	
	playdate.day=g;
	}
		
};
int main(){
	MediaFile a("�ҵ�vlog",20.3,2020,10,20,2020,10,21,"��Ƶ",2020,10,21);
	cout<<a.name<<":"<<endl;
	cout<<"��С��"<<a.filesize<<"MB"<<endl;
	cout<<"���:"<<a.sort<<endl; 
	cout<<"�������ڣ�";a.createdate.print();cout<<endl;
	cout<<"�޸����ڣ�";a.changedate.print();cout<<endl;
	cout<<"����ʱ�䣺";a.playdate.print();cout<<endl;
	return 0;
	
}
