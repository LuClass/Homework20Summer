#include<iostream>
#include<string.h> 
using namespace std;
class Cat
{
    int age;
	int weight;
	string color;
public:
    void setcat(int a,int w,string c)
    {
    	age=a;
    	weight=w;
    	color=c;
	}
    int getWeight()
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
    	cout<<"age:"<<age<<"    weight:"<<weight<<"    color:"<<color<<endl;
	} 	
};
int main()
{
	Cat s;
	s.setcat(5,15,"yellow");
	s.show();
	return 0;
} 
