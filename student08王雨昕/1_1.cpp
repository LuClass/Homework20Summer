using namespace std;
#include <iostream>
#include <string>
class Cat{
private:
	int age,weight;
	string color;
public:
	void setage(int a);
	void setweight(int w);
	void setcolor(const char *p){
		color=p;}
		const char *getcolor(){return color.c_str();}
		
	void print(){
		cout<<"Age:"<<age<<" Weight:"<<weight<<"kg color:"<<color<<endl;
	}
};
void Cat::setage(int a){
	age=a;
}
void Cat::setweight(int w){
	weight=w;
}

int main(void){
	Cat cat1,cat2;
	cat1.setage(3);
	cat1.setweight(6);
	cat1.setcolor("white");
	cat2.setage(2);
	cat2.setweight(8);
	cat2.setcolor("orange");
	cout<<"cat1:";
	cat1.print();
	cout<<"cat2:";
	cat2.print();
	return 0;
}
