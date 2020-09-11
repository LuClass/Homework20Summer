using namespace std;
#include <iostream>
#include <string.h>
class File
{
 public:
	string name;
	float size;
	string date_created;
	string date_changed;
};
class MediaFile:public File
{
 public:
 	string Media;
 	string time;
 	void shuru()
 	{
 		cin>>name>>size>>date_created>>date_changed;
    	cin>>Media>>time;
	 }
    void print()
    {
    	cout<<name<<endl<<size<<endl<<date_created<<endl<<date_changed<<endl;
    	cout<<Media<<endl<<time<<endl;
	}
};
int main()
{
	MediaFile a;
	a.shuru();
	a.print();
	return 0;
}
