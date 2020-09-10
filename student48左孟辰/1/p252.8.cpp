#include<iostream>
#include<string.h>
using namespace std;

class cat{
private:
	int age;
	float weight;
	char color[30];
public:
	cat(){
		char ch1;
		cin>>age>>weight;
		cin.getline(color,30);
	};
	void read(){
		cout<<"年龄:"<<age<<" 重量:"<<weight<<" 颜色:"<<color<<'\n';
	};
};

int main(void)
{
	cat cat1;
	cat1.read();
	return 0;
}
