#include <iostream>
using namespace std;

class Cat{
	int age;
	double weight;
	char color[10];
public:
	void setCat();
	void printCat(){
		cout<<"年龄："<<age<<"(岁)"<<endl;
		cout<<"体重："<<weight<<"(kg)"<<endl;
		cout<<"颜色："<<color<<endl;
	}
};

void Cat::setCat(){
	cin>>age;
	cin>>weight;
	cin>>color;
}

int main (){
	Cat cat1;
	cat1.setCat();
	cat1.printCat();
	return 0;
}
