#include<iostream>
using namespace std;
class Cat
{
    int age;
	double weight;
	string color;
public:
    void setcat(int a,double w,string c)
    {
    	age=a;
    	weight=w;
    	color=c;
	}
    double getWeight()
    {
	    return weight;  
	}   
    int getAge()
    {  
	    return age;  
	} 
    string getColor()
    {  
	    return color;  
	}
    void show()
    {
    	cout<<"Age:"<<age<<"    Weight:"<<weight<<"    Color:"<<color<<endl;
	} 	
};
int main()
{
	Cat p;
	p.setcat(10,20,"white");
	p.show();
	return 0;
} 
