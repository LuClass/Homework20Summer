#include<iostream>
#include<string>
using namespace std;
class Cat{
	private:
		int age;
		double weight;
		string color;
	public:
		void setAge(int age);
		int getAge();
		void setWeight(double weight);
		double getWeight();
		void setColor(const char* color);
		const char* getColor();
		void print();
		Cat(int age,double weight,const char* color){
			this->age=age;
			this->weight=weight;
			this->color=color;
		}
		~Cat(){};
};
void Cat::setAge(int age){
	this->age=age;
}
void Cat::setWeight(double weight){
	this->weight=weight;
}
void Cat::setColor(const char* color){
	this->color=color;
}
int Cat::getAge(){
	return age;
}
void Cat::print(){
	cout <<this->getAge()<< "Ëê"<<endl;
	cout <<this->getWeight() << "kg" << endl;
	cout <<this->getColor()  <<endl;	
}
double Cat::getWeight(){
	return weight;
}
const char* Cat::getColor(){
	return color.c_str();
}

int main(){
	Cat a(4,20,"black");
	a.print();
	a.setAge(6);
	a.setColor("white");
	a.setWeight(5);
	a.print();
}
