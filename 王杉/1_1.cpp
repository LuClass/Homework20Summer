#include <iostream>
#include <string.h>
using namespace std;
class cat{
	char name[20];
	int age;
	double weight;
	char color[20];
public:
	void setname(const char xname[])
	{
		strcpy(name,xname);
	}
	void setage(int age)
	{
		this->age=age;
	}
	void setweight(float weight)
	{
		this->weight=weight;
	}
	void setcolor(const char xcolor[])
	{
		strcpy(color,xcolor);
	}
	string getname()
	{
		return name;
	}
	int getage()
	{
		return age;
	}
	double getweight()
	{
		return weight;
	}
	char* getcolor()
	{
		return color;
	}
	void print()
	{
		cout<<"name: "<<getname()<<endl;
		cout<<"age: "<<getage()<<"years"<<endl;
		cout<<"color: "<<getcolor()<<endl;
		cout<<"weight: "<<getweight()<<"kg"<<endl;
	}
};
int main()
{
	cat miao;
	miao.setname("mimi");
	miao.setage(6);
	miao.setcolor("black");
	miao.setweight(4.5);
	miao.print();
 } 














