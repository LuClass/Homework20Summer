#include <iostream> 
#include <time.h>
#include <string>
using namespace std;
class File{
	string name;
	double size;
	int year, month, day, last_year, last_month, last_day;
public:
	File();
	File(string name,double size);
	void updatetime();
	string getname(){ 
		return name; 
	}
	void setname(string name){ 
		this->name = name; 
		updatetime();
    }
	double getsize(){ 
		return size;
	}
	void setsize(double size){ 
		this->size = size;
		updatetime(); 
	}
	void show();
};
File::File(){
	name = "新建文件";
	size = 0;
	time_t  l = time(NULL);
	tm *today = localtime(&l);
	year = today->tm_year + 1900;
	month = today->tm_mon + 1;
	day = today->tm_mday;
	last_year = year;
	last_month = month;
	last_day = day;
}
File::File(string name,double size){
	this->name = name;
	this->size = size;
	time_t  l = time(NULL);
	tm *today = localtime(&l);
	year = today->tm_year + 1900;
	month = today->tm_mon + 1;
	day = today->tm_mday;
	last_year = year;
	last_month = month;
	last_day = day;
}
void File::updatetime(){
	time_t  l = time(NULL);
	tm *today = localtime(&l);
	last_year = today->tm_year + 1900;
	last_month = today->tm_mon + 1;
	last_day = today->tm_mday;
}
void File::show(){
	cout << name << "||大小为：" << size << "kb" << "||创建时间为:" << year << "年" << month << "月" << day << "日" << endl;
	cout << "最新修改时间为：" << last_year << "年" << last_month << "月" << last_day << "日"<<endl;
}
class MediaFile : public File{
	string type;
	int time;
public:
	MediaFile(){ type = "未知类型"; time = 0; };
	MediaFile(string type, string name, double size, int time) :File(name, size){ this->type = type; this->time = time; };
	void show_Media(){
		cout << "类型为" << type << "||时长：" << time << "分钟"<<endl;
		show();
	}

};
int main(){
	MediaFile a("flv", "type-moon十周年", 1,390);
	File b;
	a.show_Media();
	b.show(); 
	return 0;
}
