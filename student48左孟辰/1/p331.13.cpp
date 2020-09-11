#include<iostream>
#include<string> 

using namespace std;

class File
{
		string name,size,creattime,changedtime;
	public:
		File(string name,string size,string creattime,string changedtime)
		:name(name),size(size),creattime(creattime),changedtime(changedtime){}
		void show1()
		{
			cout<<"name:"<<name;
			cout<<"\nsize:"<<size;
			cout<<"\ncreattime:"<<creattime;
			cout<<"\nchangedtime:"<<changedtime<<'\n';
		}
};
class MediaFile:public File
{
		string property,playtime;
	public:
		MediaFile(string name,string size,string creattime,string changedtime,string property,string playtime)
		:File(name,size,creattime,changedtime),property(property),playtime(playtime){}
		void show2()
		{
			File::show1();
			cout<<"property:"<<property;
			cout<<"\nplaytime:"<<playtime<<'\n';
		}
};

int main(void)
{
	
	return 0;
}
