#include <iostream>
#include <cstring>
using namespace std;
class File{
	protected:
		string name;
		int size;
		string creatdate;
		string lastdate;
	public:
		File (char*name,int size,char *creatdate,char*lastdate):name(name),size(size),
		creatdate(creatdate),lastdate(lastdate){}
		~File(){
		}
}; 
class MediaFile:public File{
	string category;
	int time;
	public:
		MediaFile(string category,int time,char*name,int size,char *creatdate,char*lastdate):
		File(name,size,creatdate,lastdate),
		category(category),time(time){}
		~MediaFile(){
		}
		void print(){
			cout<<"文件类型"<<category<<"时长"<<time<<"文件名"<<name<<"文件大小"<<
			size<<"文件的创建时间是"<<creatdate<<"文件的修改时间是"<<lastdate; 
		}
	};
int main(
	MediaFile d1("video",1,"学习视频",5,"123456","56789");
	d1.print();
}
