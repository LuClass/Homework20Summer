#include <iostream>
using namespace std;
#include <string.h>

class File{
	private:
		string name;
		double size;
		string createdate,changedate;
	public:
	    File(string n,double s,string cr,string ch){
	    	name=n;
	    	size=s;
	    	createdate=cr;
			changedate=ch;
		}
		void setName(string n)	{name = n;}
		void setSize(double s)  {size = s;}
		void setCreatedate(string cr) {createdate=cr;}
		void setChangedate(string ch) {changedate=ch;}
		string getName(){return name;}
		double getSize(){return size;}
		string getCreatedate(){return createdate; }
		string getChangedate(){return changedate;}
};

class MediaFile:public File{	
	    string sort;
	    string playtime;
	public:
		MediaFile(string sort,string p,string n,double s,string cr,string ch):File(n,s,cr,ch){
			this->sort=sort;
			playtime=p;
		}
		void setSort(string s) {sort = s;}
		void setPlaytime(string p) {playtime = p;}
		string getSort(){return sort;}
		string getPlaytime() {return playtime;}
		void show(){
			cout<<"name: "<<getName()<<endl;
			cout<<"size: "<<getSize()<<"G"<<endl;
			cout<<"createdate: "<<getCreatedate()<<endl;
			cout<<"changedate: "<<getChangedate()<<endl;
			cout<<"sort: "<<getSort()<<endl;
			cout<<"playtime: "<<getPlaytime()<<endl;
		}
};

int main(){
	MediaFile M("VIDEO", "2020.09.13 18:23:23", "QQÂ¼ÆÁ20200423153614", 0.775, "2020.4.30 14:49:28", "2020.4.30 14:48:02" );
	M.show();
}
