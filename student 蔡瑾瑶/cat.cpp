using namespace std;
#include<iostream>
#include<string.h>
class Cat
{
	char name[20];
	int age;
	float weight;
	char color[20];
public:
	void setcat(char n[20],int a,float w,char c[20]){
		strcpy(name,n);age=a;weight=w;strcpy(color,c);
	}
	void printcat(){
		cout<<"name:"<<name<<endl;
		cout<<"age:"<<age<<endl;
		cout<<"weight:"<<weight<<"kg"<<endl;
		cout<<"color:"<<color<<endl;
	}
};
int main()
{
	Cat cat1,cat2;
	cat1.setcat("xiao ju",5,15,"black");
	cat2.setcat("da bai",4,12,"white");
	cout<<"cat1:"<<endl;
	cat1.printcat();
	cout<<"cat2:"<<endl;
	cat2.printcat();
	return 0;
}
