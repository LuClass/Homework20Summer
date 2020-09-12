#include <iostream>
using namespace std;
class File{
string FileName;
double size;
string creat;
string alter;
public:
void setFN(string FN){FileName=FN;
}
 void setsize(double s){size=s;
}  	
 void setcreat(string c){	creat=c;
}  	
 void setalter(string a){alter=a;
}  
string getFN(){return FileName;
}	
double getsize(){return size;
}
string getcreat(){return creat;
}	
string getalter(){return alter;
}	
};
class MediaFile:public File{
	string format;
	string play;
public:
MediaFile(string f,string p)		
	{
		format=f;
		play=p;
		
	}
string getf(){return format;
}	
string getPlay(){return play;
}	
	
void show(){
	cout<<"文件名："<<getFN()<<endl;
	 cout<<"大小："<<getsize()<<endl;
	cout<<"创建时间："<<getcreat()<<endl;
	cout<<"修改时间："<<getalter()<<endl;
	cout<<"文件类型："<<getf()<<endl;
	cout<<"播放时间："<<getPlay(); 
}		
};
int main(){
	MediaFile m("mp4","3:20");
	m.setFN("迎新晚会");
	m.setsize(1.2);
	m.setcreat("2020.6.20");
	m.setalter("2020.7.20");
	m.show();
}










