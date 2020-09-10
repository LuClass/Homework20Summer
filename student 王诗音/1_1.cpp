#include<iostream>
#include<string.h>
using namespace std;
class Cat{
	int age;
	double weight;
	string color;
	public:
		void setAge(int a){age=a;}
		void setWeight(double w){weight=w;}
		void setColor(const char *p){color=p;}
		int getAge(){return age;}
		double getWeight(){return weight;}
		const char * getColor(){return color.c_str();}
};
int main(){
	Cat a,b;
	a.setAge(2);
	a.setColor("white");
	a.setWeight(5.6);
	cout<<"age:"<<a.getAge()<<"  weight:"<<a.getWeight()<<"  color:"<<a.getColor()<<endl;
	b=a;
	cout<<"age:"<<b.getAge()<<"  weight:"<<b.getWeight()<<"  color:"<<b.getColor()<<endl;
	b.setAge(3);
	b.setColor("black");
	b.setWeight(4.2);
	cout<<"age:"<<b.getAge()<<"  weight:"<<b.getWeight()<<"  color:"<<b.getColor()<<endl;
	return 0;
}
