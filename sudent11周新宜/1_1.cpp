using namespace std;
#include <iostream>
#include <string.h>
class Cat
{
private:
	char name[20];
	int age;
	float weight;
	char color[20];
public:
	void set(char n[20],int a,float w,char c[20]);
	void print()
	{
		cout<<"name:"<<name<<endl;
		cout<<"age:"<<age<<endl;
		cout<<"weight:"<<weight<<" kg"<<endl;
		cout<<"color:"<<color<<endl;
	}
};
void Cat::set(char n[20],int a,float w,char c[20])
{
	strcpy(name,n);
	age=a;
	weight=w;
	strcpy(color,c);
}
int main()
{
	Cat cat1,cat2;
	cat1.set("mimi",3,5,"black");
	cat2.set("miaomiao",4,6,"white");
	cout<<"cat1:"<<endl;
	cat1.print();
	cout<<"cat2:"<<endl;
	cat2.print();
	return 0;
}
