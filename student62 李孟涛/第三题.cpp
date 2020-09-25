#include <iostream>
using namespace std;
class Person {
private:
	string name;
	char sex;
	string father;
	string mother;
public:
	void setPerson(string n,char s,string f,string m)
	{
		name = n;
		sex = s;
		father = f;
		mother = m;
	}
	string getname()
	{
		return name;
	}
	string getfathername()
	{
		return name;
	}string getmothername()
	{
		return name;
	}
};
int main()
{
	string n ;
	char s;
	string f;
	string m;
	Person person[50];
	int l;
	int i;
	int j;
	j = 0;
	cout << "请输入即将输入的人数";
		cin >> l;
	for (int i=0;i < l;i++)
		{
		cin >> n >> s >> f >> m;
			person[i].setPerson(n, s, f, m);
		}
	string ren;
	cout << "请输入查询的人";
		cin >> ren;
		i = 0;
		for (;i < l, person[i].getname() != ren; i++)
		for (j=0;j < l;i++)
		{
			cout << ren << "的兄弟姐妹";
			if (person[j].getfathername() == person[i].getfathername())
				cout << person[j].getname();
		}
		for (j = 0;j <l, person[j].getname() != person[i].getfathername(); j++)
			cout << ren << "的祖父" << person[j].getfathername();
		cout << ren << "的祖母" << person[j].getmothername();
		
		for (j = 0;j <l, person[j].getname() != person[i].getmothername(); j++)
			cout << ren << "的外祖父" << person[j].getfathername();
		cout << ren << "的外祖母" << person[j].getmothername();
}
