#include <iostream>
using namespace std;
class File{
private:
	string d1;   //创建日期 
	string d2;   //修改日期
	string name;
	int size;
public:
	File (string d1,string d2,string name,int size){
		this->d1=d1;
		this->d2=d2;
		this->name=name;
		this->size=size;
	}
	string getct(){
		return d1;
	}
	string getxt(){
		return d2;
	}
	string getName(){
		return name;
	}
	int getSize(){
		return size;
	}
};
class MediaFile
	:public File
{
private:
	string type;
	int time;  //second
public:
	MediaFile(string name,string d1,string d2,int size,string type,int time)
		:File(d1,d2,name,size){
			this->type=type;
			this->time=time;
		}
	string getType(){
		return type;
	}
	int getTime(){
		return time;
	}
	void print(){
		cout<<"文件名："<<getName()<<endl;
		cout<<"文件大小："<<getSize()<<endl;
		cout<<"文件类型："<<getType()<<endl;
		cout<<"创建时间："<<getct()<<endl;
		cout<<"修建时间："<<getxt()<<endl;
		cout<<"播放时间："<<getTime()<<endl;
	}
};
int main(){
	MediaFile m("电影","创建时间","修改时间",50,"文件类型",100);
	m.print();
}
