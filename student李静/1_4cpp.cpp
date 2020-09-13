#include <iostream>
using namespace std;
class File {
	string name;
	int size;
	string creationdate;
	string modificationdate;
public:
	File(string s, int t, string cd, string md)
	{
		name = s;
		size = t;
		creationdate = cd;
		modificationdate = md;
	}
	void show() {
		cout << name << " " << size << " " << creationdate << " " << modificationdate << " ";
	}
};
class MediaFile :public File {
	string mediatype;
	string playtime;
public:
	MediaFile(string s, int t, string cd, string md, string mt, string pt) :File(s, t, cd, md)
{
	mediatype = mt;
	playtime = pt;
}
   void show1() {
	   show();
	   cout << mediatype << " " << playtime << endl;
	   }
};
int main()
{
	MediaFile mediafile("123", 12, "2020.1", "2020.2", "media", "2020.9.11");
	mediafile.show1();
	return 0;
}