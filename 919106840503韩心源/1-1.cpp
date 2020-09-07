//P252.8
#include <iostream>
#include <string>
using namespace std;
class Cat{
	int age,weight;
	string color;
public:
	void setCat(int a,int w,string c){
		age=a;
		weight=w;
		color=c;
	}
	void print(){
		cout<<"age is "<<age<<endl;
		cout<<"weight is "<<weight<<endl;
		cout<<"color is "<<color<<endl;
	}
};
int main(){
	Cat s;
	s.setCat(3,20,"white");
	s.print(); 
	return 0;
} 
