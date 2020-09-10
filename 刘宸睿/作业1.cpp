#include<iostream>
#include<string.h>
using namespace std;
class Cat{
	int age;
	string weight;
	string color;
	public:
	Cat(int age,string weight,string color){
		this->age=age;
		this->weight=weight;
		this->color=color;
	}
	int getAge(){
		return this->age;
	}
	string getWeight(){
		return this->weight;
	}
	string getColor(){
		return this->color;
	}
};
    int main(){
    	Cat a(2,"10KG","white");
    	cout<<a.getAge()<<endl;
    	cout<<a.getWeight()<<endl;
    	cout<<a.getColor()<<endl;
    	return 0;
	} 
