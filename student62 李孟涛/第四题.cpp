#include<iostream>
using namespace std;
class File {
private:
	string name;
	string size;
	string createDate;
	string modifyDate;
public:
	void setFile(string n, string s, string c, string m)
	{
		name = n;
		size = s;
		createDate = c;
		modifyDate = m;
	}
	string getname(){
		return name;
	}
	string getsize() {
		return name;
	}
	string getcreateDate() {
		return name;
	}
	string getmodifyDate() {
		return name;
	}
};
class MediaFile :public File {
private:
	string type;
	string playtime;
public:
	void setMediaFile(string t,string p)
	{
		type = t;
		playtime = p;
	}
	string gettype() {
		return type;
	}
	string getplaytime() {
		return type;
	}
};
int main(){
	string n;
	string s;
	string c;
	string m;
	string t;
	string p;
	MediaFile mediefile[100];
	int i;
	int j;
	cout << "�������ļ���";
	cin >> j;
	for (i = 0; i < j, cin >> n >> s >> c >> m >> t >> p; i++) {
		mediefile[i].setFile(n,s,c,m);
		mediefile[i].setMediaFile(t, p);
	}
	for (i = 0; i < j; i++) {
		cout << "�ļ�����" << mediefile[i].getname()<<endl; 
		cout << "�ļ���С��" << mediefile[i].getsize() << endl;
		cout << "�ļ���������" << mediefile[i].getcreateDate() << endl;
		cout << "�ļ��޸�����" << mediefile[i].getmodifyDate() << endl;
		cout << "�ļ�����" << mediefile[i].gettype() << endl;
		cout << "�ļ�����ʱ��" << mediefile[i].getplaytime() << endl;
	}
}
