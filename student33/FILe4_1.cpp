using namespace std;
#include<iostream>
#include<time.h>
#include<string.h>
class date{
	private:
		int year,month,day;
    public:
	date()
	{
		time_t ltime=time(NULL);
		tm * today=localtime(&ltime);
		year=today->tm_year+1900;
		month=today->tm_mon+1;
		day=today->tm_mday;
		}
	date(int x,int y,int z)
	:year(x),month(y),day(z){}
	 void setdate(int x,int y,int z)
	 {
	 	year=x;
	 	month=y;
	 	day=z;
		 }
	void dayshow(){
		cout<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
	}	
};

class File{
	private:
	date builday,chanday;
	char *name;
	double size;
	
	
	public:
	File(char*a,double size,date d1,date d2)                   
	:size(size),name(nullptr),builday(d1),chanday(d2)
	{
		setname(a);
	}
	File(){
	}
	
	~File(){
		if(name!=nullptr)
		delete []name;
	}
	
	
	File(const File &a)
	:File(a.name,a.size,a.builday,a.chanday){}
	
	
	File &operator=(const File &a)
	{    size=a.size;
		setname(a.name);
		return *this;
	}
	
	void setname(const char *a)
	{    if(name!=nullptr)
	       delete []name;
	    if(a!=nullptr)
		{
		int lenth;
		lenth=strlen(a);
		 name = new char[lenth+1];
         strcpy(name,a);}
		 else
		 name=nullptr;		
	}
	 int getsize()       //获取数据 
	 {
	 	return size;
	 }
	void chandayshow()
	{
		chanday.dayshow();
	}
	void buildayshow()
	{
		builday.dayshow();
	}
	const char *getname(){
	     if(name==nullptr)
	     return "unnamed";
		 else
		 return name;
	 } 
	};

class MediaFile:public File{
	private:
	 char kind[5];
	 int timesec;
	 int timemin;
	 
	public: 
	 MediaFile(char*k,int s,int m,char*a,double size,date d1,date d2)
	 :File(a,size,d1,d2){
	 	timesec=s;
	 	timemin=m;
	 	strcpy(kind,k); 
	 }
	 int getsec()
	 {
	 	return timesec;
	 }
	 void show()
	 {
	 	cout<<"Filename:"<<getname()<<endl;
	 	cout<<"创建日期：";
	 	buildayshow();
	 	cout<<"修改日期：";
		chandayshow();
		 cout<<"size："<<getsize()<<"mb"<<endl;
		 cout<<"类型："<<kind<<endl;
		 cout<<"播放时长："<<timemin<<"分"<<timesec<<"秒"<<endl;
	 }	
};

int main()
{
	date d1(2000,6,14),d2(2000,2,29);
	MediaFile M("视频",2,6,"LOL个人秀",300,d1,d2);
	M.show();
	return 0;
 } 
