#include<iostream>
#include<string.h>
using namespace std;
class Cat{
	private:int age;
	int weight;
	string color;
	public:Cat(int age,int weight,string color):age(age),weight(weight),color(color){}
		void setAge(int age){this->age = age;}
		void setWeight(int weight){this->weight = weight;}
		void setColor(string color){this->color = color;}
		int getAge(){return this->age;}
		int getWeight(){return this->weight;}
		string getColor(){return this->color;}
		void print(){cout<<age<<' '<<weight<<' '<<color<<endl;}
};
int main()
{
	Cat cat(2,12,"blue");
	cat.print();
	cat.setAge(3);
	cat.print();
	cat.setColor("red");
	cat.print();
}
