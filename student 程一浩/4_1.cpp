//书上331页 第十三题
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
	File(const char *name,double size);
	void updatetime();
	string getname(){ return name; };
	void setname(const char *name){ this->name = name; updatetime(); };
	double getsize(){ return size; };
	void setsize(double size){ this->size = size; updatetime(); };
	void show();
};
File::File(){
	name = "未知";
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
File::File(const char* name,double size){
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
	cout << name << "        大小为：" << size << "G" << "       创建时间为:" << year << "年" << month << "月" << day << "日" << endl;
	cout << "最新修改时间为：" << last_year << "年" << last_month << "月" << last_day << "日"<<endl;
}
class MediaFile : public File{
	string zhonglei;
	int time;
public:
	MediaFile(){ zhonglei = "未知类型"; time = 0; };
	MediaFile(const char * zhonglei, const char * name, double size, int time) :File(name, size){ this->zhonglei = zhonglei; this->time = time; };
	void show_ME(){
		cout << "类型为" << zhonglei << "         播放时间为：" << time << "分钟"<<endl;
		show();
	}

};
int main(){
	MediaFile a(".avi", "中国抗击疫情保卫战", 3.2, 260);
	a.show_ME();
	return 0;
}
