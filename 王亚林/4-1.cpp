#include <iostream>
#include <string.h>
using namespace std; 
class Date{
	int year,month,day;
	public:
		Date(int y,int m,int d){
			year=y;
			month=m;
			day=d;
		cout<<year<<"."<<month<<"."<<day<<endl;
		}
};
class File{
	private:
		string name;
		double size;
		Date d; //创建日期 
		Date D;//修改日期 
	public:
	File(string a,double b,int d1,int d2,int d3,int D1,int D2,int D3):d(d1,d2,d3),D(D1,D2,D3){
		name=a;
		size=b;
		cout<<"文件："<<name<<" "<<"大小："<<size<<"GB"<<endl; 
	    
	}
};
class MediaFile:public File{
	string sort;
	int time;
	public:
		MediaFile(string a,double b,int d1,int d2,int d3,int D1,int D2,int D3,string c,
		int t):File(a,b,d1,d2,d3,D1,D2,D3){
			sort=c;
			time=t;
			cout<<"媒体类别："<<sort<<endl;
			cout<<"播放时长:" <<time<<"分钟"<<endl;
		}
}; 
int main() {
	MediaFile m("流浪地球",1.5,2019,1,1,2020,4,13,"视频",125);
	return 0;
}
