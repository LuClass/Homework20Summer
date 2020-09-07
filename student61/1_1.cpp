#include <iostream> 
#include <time.h> 
using namespace std;
class Cat{
	int age;
	float weight;
	string color;
public:
	void setCat(int x,float y,string z){
		age=x;
		weight=y;	
		color=z;
		}
	void print(){
		cout<<"age:"<<age<<"\n"<<"weight:"<<weight<<"\n"<<"color:"<<color<<endl;
	}	
	};
int main(){
	Cat cat1,cat2;
	cat1.setCat(2,9,"ºÚÉ«");
	cat2.setCat (3,8,"éÙÉ«");
	cout<<"cat1:"<<endl;
	cat1.print();
	cout<<"cat2:"<<endl;
	cat2.print();
	return 0;
}
