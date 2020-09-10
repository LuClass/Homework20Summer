#include<iostream>
#include<string.h>
using namespace std;
class Cat{
	private:
		int age;int weight;char color[10];
	public:
		void setcat(int a,int w,char c[10]);
		void print(){
			cout<<age<<"."<<weight<<"."<<color<<endl;
		}
};

void Cat::setcat(int a,int w,char c[10]){
	age=a;
	weight=w;
	strcpy(color,c);
} 

int main(void){
	Cat cat1,cat2;
	cat1.setcat(3,35,"green");
	cat2.setcat(4,40,"yellow");
	cout<<"cat1: ";cat1.print();
	cout<<"cat1: ";cat2.print();
	return 0;
}



