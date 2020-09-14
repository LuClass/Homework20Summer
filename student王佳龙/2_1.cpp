#include <iostream>
#include <string.h>
using namespace std;
class Person {
	string name;
	char sex;
	Person *mother,*father;
public:
	Person(string name ,char sex,Person* mother,Person* father){
		this->name=name;
		this->sex=sex;
		this->mother=mother;
		this->father=father;
	}
	string getname(){
		return name;	
	}
	char getsex(){
		return sex;
	}
	Person* getmother(){
		return this->mother;
	}
	Person* getfather(){
		return this->father;
	}
	string getgrandfathername(){
		return this->father->father->name;
	}
	string getgrandmothername(){
		return this->father->mother->name;
	}
	string getgrandfathername1(){
		return this->mother->father->name;
	}
	string getgrandmothername1(){
	    return this->mother->mother->name;
	}
};
int main (){
	Person p1("Luna",'f',NULL,NULL),p2("Wali",'m',NULL,NULL),p3("Laura",'f',NULL,NULL),p4("Rion",'m',NULL,NULL),p5("Lana",'f',&p3,&p4),p6("Lange",'m',&p1,&p2),p7("Tom",'m',&p5,&p6),p8("Lucy",'f',&p5,&p6),p9("Jack",'m',&p5,&p6);
    cout<<p9.getname()<<"的祖父是: ";
	cout<< p9.getgrandfathername()<<endl;
	cout<<p9.getname()<<"的祖母是: ";
	cout<< p9.getgrandmothername()<<endl;
	cout<<p9.getname()<<"的外祖父是: ";
	cout<< p9.getgrandfathername1()<<endl;
	cout<<p9.getname()<<"的外祖父是: ";
	cout<< p9.getgrandmothername1()<<endl;
	Person p[9]={p1,p2,p3,p4,p5,p6,p7,p8,p9};
	cout<<p9.getname()<<"的兄弟姐妹是：" ;
	for(int i=0;i<8;i++){ 
		if(p9.getfather()==p[i].getfather()&&p9.getmother()==p[i].getmother()){
			cout<<p[i].getname()<<" ";
		} 
}
cout<<endl;
}
