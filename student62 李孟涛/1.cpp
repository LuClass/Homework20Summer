#include<iostream>
#include<string>
using namespace std;
class Cat
{
private:
	int age;
	float weight;
	string color;
public:
    void setCat(int a,float w,string c);
    void print()
    {
    	cout<<age<<"."<<weight<<"."<<color<<endl;
	}
};
void Cat::setCat(int a,float w,string c)
{
	age=a;
	weight=w;
	color=c;
}
int main()
{
	Cat cat1,cat2;
	cat1.setCat(2,2.2,"black");
	cat2.setCat(3,5.5,"white");
	cout<<"cat1 ";
	cat1.print();
	cout<<"cat2 ";
	cat2.print();
	return 0;
}
