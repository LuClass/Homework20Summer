#include <iostream>
using namespace std;
class Person{
	public:	
	    string name;
	    char sex;
		Person *father;
		Person *mother;
	Person(){
		father=NULL;
		mother=NULL;
	}
	Person(string s,char t,Person *f=NULL,Person *m=NULL)
	{
		name=s;
		sex=t;
		father=f;
		mother=m;
	}
	void setFather(Person *p){
		father=p;
	}
	void setMother(Person *q){
		mother=q;
	}
	void show(){
		if(father==NULL)
		cout<<name<<"'s father is unknown"<<endl;
		else
		cout<<father->name<<" is "<<name<<"'s father"<<endl;
		if(mother==NULL)
		cout<<name<<"'s mother is unknown"<<endl;
		else
		cout<<mother->name<<" is "<<name<<"'s mother"<<endl;
		if(father==NULL||father->father==NULL)
		cout<<name<<"'s grandfather is unknown"<<endl;
		else
		cout<<father->father->name<<" is "<<name<<"'s grandfather"<<endl;
		if(father==NULL||father->mother==NULL)
		cout<<name<<"'s grandmother is unknown"<<endl;
		else
		cout<<father->mother->name<<" is "<<name<<"'s grandmother"<<endl;
		if(mother==NULL||mother->father==NULL)
		cout<<name<<"'s grandfather1 is unknown"<<endl;
		else
		cout<<mother->father->name<<" is "<<name<<"'s grandfather1"<<endl;
		if(mother==NULL||mother->mother==NULL)
		cout<<name<<"'s grandmother1 is unknown"<<endl;
		else
		cout<<mother->mother->name<<" is "<<name<<"'s grandmother1"<<endl;
	}
};
int main ()
{
	Person *p=new Person[5]{Person("kk",'m'),Person("kka",'m'),Person("pp",'f'),Person("kkab",'f'),Person("oo",'n')};
	p[0].setFather(p+1);
	p[1].setMother(p+3);
	p[2].setFather(p+1);
	for(int i=0;i<5;i++)
	p[i].show();
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(p[i].father->name==p[j].father->name&&p[i].sex==p[j].sex&&j!=i)
			cout<<p[i].name<<" is "<<p[j].name<<"'s brother"<<endl;
			if(p[i].father->name==p[j].father->name&&p[i].sex!=p[j].sex&&j!=i)
			cout<<p[i].name<<" is "<<p[j].name<<"'s sister"<<endl;
		}
	}
	return 0;
}
