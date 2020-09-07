#include <iostream>
#include <string.h>
using namespace std; 
class Cat{
private:
	int age;
	float weight;
	char *color;
public:
	void setCat(int a,float w,char *c);
	void print(){
	cout<<"age:"<<age<<endl;
	cout<<"weight:"<<weight<<endl;
	cout<<"color:"<<color<<endl;
}
};
void Cat::setCat(int a,float w,char *c){
	age=a;
	weight=w;
	color=new char[strlen(c)+1];
	strcpy(color,c);
}

int main() {
	Cat cat1,cat2;
	cat1.setCat(2,5.6,"wtite");
	cat2.setCat(5,2.2,"black");
	cout<<"the introduce to cat1:"<<endl;
	cat1.print();
	cout<<"the introduce to cat2:"<<endl;
	cat2.print();
	return 0;
}
