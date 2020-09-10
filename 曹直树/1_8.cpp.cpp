#include <iostream>
using namespace std;
class Cat{
	private:
		int age,weight;
		string color;
	public:
	
		void setColor(const char*p){
			color=p;
		}
		const char*getColor(){return color.c_str();	}
		void setAge(int a){
			age=a;
		}
		int getAge(){return age;}
		bool isAcat();
		void show(){
			if(isAcat())
			{
				cout<<"It's a "<<getColor()<<" cat";
				cout<<";It is "<<getAge()<<" years old"<<endl;
			}
			else
			{
				cout<<"NO,it's not a cute cat"; 
			}
		}
};
bool Cat::isAcat (){
	return getAge()<=20;
}
int main(){
	Cat c1,c2;
	c1.setColor("orange");
	c1.setAge(5);
	c1.show();
	c2.setColor("yellow and white");
	c2.setAge(6);
	c2.show();
}
