#include<iostream>
#include<time.h>
using namespace std;
class Date{
	int year,month,day;
public:
	Date(int y,int m,int d):year(y),month(m),day(d){}
	void print(){
		cout<<year<<"."<<month<<"."<<day;
	}
};
class File{
	protected:
		string name;
		float size;
		Date createdate,modifydate;
	public:
		File(Date create,Date modify,string n="untitled",float s=0){
			name=n;
			size=s;
			createdate=create;
			modifydate=modify;
			}
		void print(){
			cout<<name<<'\t'<<size<<"Mb"<<endl;
			createdate.print();
			cout<<"\t";
			modifydate.print();
		}
};
class MediaFile:public File{
	private:
		string format;
		float playtime;
	public:
		MediaFile(Date cre={0,0,0},Date mod={0,0,0},string n="untitled",float s=0,string f="unknown",float p=0)
			:File(cre,mod,n,s){
				format=f;
				playtime=p;
			}
		void print(){
			cout<<format<<" "<<playtime<<"s"
		}
};
int main(){
	MidiaFile M(Date(2000,1,1),Date(2020,1,1),"music",10,"MP3",150);
	M.print();
}
