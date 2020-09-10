#include<iostream>
#include<string.h>
using namespace std;
class File{
		public:
		string name;
		double size;
		int creat_y,creat_m,creat_d;
		int alter_y,alter_m,alter_d;
	
	File(){ name="NULL",size=0,creat_y=1970,creat_m=1,creat_d=1,alter_y=1970,alter_m=1,alter_d=1;
	}
		File(string name,double size,int creat_y,int creat_m,int creat_d,int alter_y,int alter_m,int alter_d ){ 
		this->name=name;
		this->size=size;
		this->creat_y=creat_y;
		this->creat_m=creat_m;
		this->creat_d=creat_d;
		this->alter_y=alter_y;
		this->alter_m=alter_m;
		this->alter_d=alter_d;
}
};
class MediaFile:public File{
	private:
		bool type;
		int playtime;
	public:
		MediaFile():File()
		{type=0;
		 playtime=0;
		}
		MediaFile(bool type,int playtime,string name,double size,int creat_y,int creat_m,int creat_d,int alter_y,int alter_m,int alter_d):File(name,size,creat_y,creat_m,creat_d,alter_y,alter_m,alter_d)
		 {this->type=type;
		 this->playtime=playtime;
		this->name=name;
		this->size=size;
		this->creat_y=creat_y;
		this->creat_m=creat_m;
		this->creat_d=creat_d;
		this->alter_y=alter_y;
		this->alter_m=alter_m;
		this->alter_d=alter_d;
		 }
	void show()
	{cout<<"Type:";
	if(this->type==0)
	cout<<"music"<<endl;
	else cout<<"video"<<endl;
	cout<<"name:"<<this->name<<endl;
	cout<<"size:"<<this->size<<"kbs"<<endl;
	cout<<"create date:"<<this->creat_y<<"."<<this->creat_m<<"."<<this->creat_d<<endl;
	cout<<"alter date:"<<this->alter_y<<"."<<this->alter_m<<"."<<this->alter_d<<endl;
	cout<<"playtime:"<<this->playtime<<endl;
	
	
	}
};
using namespace std;
int main()
{MediaFile a(1,164,"¼ÒÓÐ¶ùÅ®",114514,2001,12,16,2019,10,05);
a.show();
return 0;
}
