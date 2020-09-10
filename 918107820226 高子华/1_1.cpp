//p252 8
#include <bits/stdc++.h>
using namespace std;

class Cat {
public:
	enum class color_set { RED, BLUE, BLACK };
private:
	int age;
	double weight;
	Cat::color_set color;
public:
	
	void setAge(int age) {
		this->age = age;
	}
	void setWeight(double weight) {
		this->weight = weight;
	}
	void setColor(Cat::color_set color) {
		this->color = color;
	}
	int getAge() {
		return this->age;
	}
	double getWeight() {
		return this->weight;
	}
	color_set getColor() {
		return this->color;
	}
};

int main() {
	Cat c;
	c.setAge(3);
	c.setWeight(20.6);
	c.setColor(Cat::color_set::BLACK);
	cout << c.getAge() << " " << c.getWeight() << " "<< static_cast<int>(c.getColor());
	return 0;

}