#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Cat {
private:
	int age;
	int weight;
	string color;
public:
	void setAge(int age) {
		this->age = age;
	}
	void setWeight(int weight) {
		this->weight = weight;
	}
	void setColor(string color) {
		this->color = color;
	}
	int getAge() {
		return this->age;
	}
	int getWeight() {
		return this->weight;
	}
	const string getColor() {
		return this->color;
	}
};
int main() {
	Cat c1;
	c1.setAge(1);
	c1.setWeight(20);
	c1.setColor("black");
	string color = c1.getColor();
	cout << color << "  " << c1.getAge() << "   " << c1.getWeight() << endl;
}