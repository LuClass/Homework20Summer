#include<iostream>
using namespace std;
class Cat {
private:
	int age=0;
	int weight=0;
	string color="null";
public:
	int getAge() {
		return age;
	}
	int getWeight() {
		return weight;
	}
	string getColor() {
		return color;
	}
	void setAge(int age) {
		this->age = age;
	}
	void setWeight(int weight) {
		this->weight = weight;
	}
	void setColor(string color) {
		this->color = color;
	}
};
int main() {
	Cat cat;
	cat.setAge(5);
	cat.setWeight(15);
	cat.setColor("yellow");
	cout << "this is a " << cat.getColor() << " cat. It weithts " << cat.getWeight() << " kg. And it is " << cat.getAge() << "years old." << endl;
	return 0;
}