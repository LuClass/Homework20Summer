#include <iostream>
#include <String>
using namespace std;
class Cat{
	private:
		int age,weight;
		string color;
    public:
    	void setAge(int age){
    		this->age=age;
		}
			void setWeight(int weight){
    		this->weight=weight;
		}
			void setColor(string color){
    		this->color=color;
		}
		int getAge(){
			return age;
		}
		int getWeight(){
			return weight;
		}
		string  getColor(){
			return color;
		}
			
}; 
int main(){
	Cat c;
	c.setAge(2);
	c.setWeight(8);
	c.setColor("white");
	cout<<"猫的年龄是"<<c.getAge()<<",  "<<"猫的体重是"<<c.getWeight()<<",  "<<"猫的颜色是"<<c.getColor()<<",  "<<endl;
	return 0; 
}
