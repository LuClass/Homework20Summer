#include <iostream>
#include <string.h>
using namespace std;
class Cat{
	private:
		int age; 
		float weight;
		char color[10];
	public:
		void SetCat(float x,float y,char *z){
		age=x;weight=y;
		strcpy(color,z);
		}
		void print_Cat(){
			cout<<"The cat's age is "<<age<<" years old,its weight is "<<weight<<"kg ,its color is "<<color<<"."<<endl;
		}
}; 
int main (){
	Cat c1,c2,c3;
	c1.SetCat(3,9.4,"white");
	c2.SetCat(4,9.7,"black");
	c3.SetCat(5,8.9,"orange");
	c1.print_Cat();
	c2.print_Cat();
	c3.print_Cat();
	return 0;
}
