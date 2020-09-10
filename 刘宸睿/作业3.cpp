#include<iostream>
#include<string.h>
using namespace std;
class Person{
    string name;
    string sex;	
    Person *father;
    Person *mother;
    Person *BroSis[2];
public:
	Person(string name,string sex,Person *father,Person *mother,Person *a,Person *b){
		this->name=name;
		this->sex=sex;
		this->father=father;
		this->mother=mother;
		this->BroSis[0]=a;
		this->BroSis[1]=b;
	}
	void setName(string name){
		this->name=name;
	}
	string getName(){
		return name;
	}
	void setSex(string sex){
		this->sex=sex;
	}
	string getSex(){
		return sex;
	}
	string getFatherName(){
		return father->getName();
	}
	string getMotherName(){
		return mother->getName();
	}
	Person *getFather(){
		return father;
	}
	Person *getMother(){
		return mother;
	}
	string getBroSisName0(){
		return BroSis[0]->getName();
	}
	string getBroSisName1(){
		return BroSis[1]->getName();
	}
};



int main(){
	Person A("Tom","male",'\0','\0','\0','\0');
	Person B("Jenny","female",'\0','\0','\0','\0');
	Person C("Jimmy","female",&A,&B,'\0','\0');
	Person D("Jack","male",'\0','\0','\0','\0');
	Person E("Jerry","male",&D,&C,'\0','\0');
	cout<<E.getMother()->getFatherName()<<endl;
	cout<<E.getMother()->getMotherName()<<endl;
	return 0;
}
