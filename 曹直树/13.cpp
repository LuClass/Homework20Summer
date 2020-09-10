#include <iostream>
using namespace std;
class File{
	protected:
		string name;
		int size;
		string creatdate;
		string modifydate;
	public:
		File (char*name,int size,char *creatdate,char*modifydate):name(name),size(size),
		creatdate(creatdate),modifydate(modifydate){}
		~File(){
		}
}; 
class MediaFile:public File{
	string category;
	int time;
	public:
		MediaFile(string category,int time,char*name,int size,char *creatdate,char*modifydate):
		File(name,size,creatdate,modifydate),
		category(category),time(time){}
		~MediaFile(){
		}
		void print(){
			cout<<"文件类型"<<category<<",时长"<<time<<"h,文件名"<<name<<"，文件大小"<<
			size<<"M,文件的创建时间是"<<creatdate<<",文件的修改时间是"<<modifydate; 
		}
	};
int main(){
	MediaFile d1("video",1,"学习视频",8,"2001.07.28.17:50:01","2001.07.28.17:50:02");
	d1.print();
}
