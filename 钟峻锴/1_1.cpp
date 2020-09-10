 #include<time.h>
#include<iostream>
#include<iomanip>
#include<cstring>
#include<ctime>

using namespace std;

class Cat{
	int age;
	double weight;
	char color[18];
	
public:
	
	Cat (){
		age = 1;
	}
	
	Cat (char color[], double weight,int age = 1 )
	{
		strcpy (this->color, color);
		this->weight = weight;
		this->age = age;
	}
	
	void setcolor (){
		cin.getline(color, 18);
	}
	
	void setweight (){
		cin>>weight;
	}
	
	void setage (){
		cin>>age;
	}
	
	void setcolor (char color[]){
		strcpy(this->color, color);
	}
	
	void setweight (double weight){
		this->weight = weight;
	}
	
	void setage (int age){
		this->age = age;
	}
	
		char* getcolor (){
		return color;
	}
	
	double getweight (){
		return weight;
	}
	
	int getage (){
		return age;
	}
	
	void print (){
		cout << "color: " << this->getcolor() <<endl;
		cout << "weight: " << this->getweight() <<"kg\n";
		cout << "age: " << this->getage() << "\n";
	}
	
};

int main()
{
	Cat mi("gray", 1.11, 2);
	Cat mimi("orange", 0.68 );
	Cat miao;
	miao.setage(3);
	miao.setcolor("wight");
	miao.setweight(1.68);
	mi.print();
	mimi.print();
	miao.print();
	return 0;
		
}
