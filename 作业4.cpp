#include<iostream>
#include<string.h>
using namespace std;
class File{
	string FileName;
    string scale;
	string StartDate;
	string UpdateDate;
public:

	File(string a="File1",string b="1024 byte",string c="2020-12-09",string d="2020-12-10"){
		FileName=a;
		scale=b;
		StartDate=c;
		UpdateDate=d;
	}
	void setFileName(string a){
		FileName=a;
	}
    string getFileName(){
    	return FileName;
	}
	void setScale(string a){
		scale=a;
	}
	string getScale(){
    	return scale;
	}
	void setStartDate(string a){
		StartDate=a;
	}	
	string getStartDate(){
    	return StartDate;
	}
	void setUpdateDate(string a){
		UpdateDate=a;
	}	
	string getUpdateDate(){
    	return UpdateDate;
	}
	
};
class MediaFile:public File{
	string attribute;
    string PlayTime;
public:
	void setAttribute(string a){
		this->attribute=a;
	}
	string getAttribute(){
		return attribute;
	}
	void setPlayTime(string a){
		this->PlayTime=a;
	}
	string getPlayTime(){
		return PlayTime;
	}
};


int main(){
	MediaFile A;
	A.setAttribute("Audio");
	A.setPlayTime("60 min");
	cout<<A.getAttribute()<<" "<<A.getFileName()<<endl;
	cout<<A.getPlayTime()<<" "<<A.getScale()<<endl;
	cout<<A.getStartDate()<<" "<<A.getUpdateDate()<<endl;
	return 0;
}
