#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Person
{
public:
	Person();
	~Person();
	void findAncestor(Person * father, Person * mother) {
		cout << "外祖父为：" << mother->father->name << " 外祖母为" << mother->mother->name << endl;
		cout << "祖父为：" << father->father->name << " 祖母为" << father->mother->name << endl;
	}
	void findBS(Person p) {
		int l = p.father->children.size();
		vector<Person> bs = p.father->children;
		cout << "此人的兄弟姐妹有：" << endl;
		for (int i = 0; i < l; i++) {
			cout <<children[i].name<<" " ;
		}
	}
private:
	string name;
	int age;
	int sex;//0-male/1-female
	Person * father;
	Person * mother;
	vector<Person>  children;
};

Person::Person()
{
}

Person::~Person()
{
}




