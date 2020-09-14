#include<iostream>
#include<string.h>
#include<time.h>
using namespace std;
class Date{
private:	
	int year,month,day;
public:
	Date(int y,int m,int d)
	{   year=y;
		month=m;
		day=d;
	}
	Date(){ 
		time_t ltime=time(NULL);
		tm * today=localtime(&ltime);
		year=today->tm_year+1900;
		month=today->tm_mon+1;
		day=today->tm_mday;
		}
	void printDate(){
    	cout<<year<<"年"<<month<<"月"<<day<<"日";
	}
};
class File{
private:	
	string name,size;
	Date creatdate,modifydate;
public:
	File(string n,string s,Date cd,Date md){	
		name=n;
		size=s;
		creatdate=cd;
		modifydate=md;
	}
	void printFile(){
		cout<<"文件名："<<name<<"  "<<"大小：" <<size<<endl; 
		cout<<"创建日期：";
		creatdate.printDate();
		cout<<endl;
		cout<<"修改日期：" ;
		modifydate.printDate();
		cout<<endl;
	}
};
class MediaFile:public File{
private:
	string mediaclass,playtime;
public:
	MediaFile(string n,string s,Date cd,Date md,string mc,string pt):File(n,s,cd,md){
		mediaclass=mc;
		playtime=pt;
	}
	void printMedia(){
		printFile();
		cout<<"媒体类别："<<mediaclass<<"  "<<"播放时间："<<playtime<<endl;
	}
};
int main(){
	Date d1(2001,8,8),d2(2020,9,10);
	MediaFile m("Harry Potter and the Sorcerer's Stone","2.27GB",d1,d2,"视频","159分钟");
	m.printMedia(); 
	return 0;
}
