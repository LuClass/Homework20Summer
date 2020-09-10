#include<iostream>
#include<string.h>
using namespace std;

class Person
{public:
	char sex;
	int child_num;
	Person* father,*mother;
	char name[10];
	Person()
	{
		sex='N';
		father=NULL;
		mother=NULL;
	}
	Person(char* name,char sex,Person* father=NULL,Person* mother=NULL)
	{
		strcpy(this->name,name);
		this->sex=sex;
		this->father=father;
		this->mother=mother;
	}
	~Person(){}
	void show_fa()
	{
		if(father==NULL)
			cout<<name<<"'s father is unkonwn"<<endl;
		else
			cout<<name<<"'s father is: "<<father->name<<endl;
	}
	void show_mo()
	{
		if(mother==NULL)
			cout<<name<<"'s mother is unkonwn"<<endl;
		else
			cout<<name<<"'s mother is: "<<mother->name<<endl;
	}
	void set_fa(Person* p)
	{

		father=p;
	}
	void set_mo(Person* p)
	{

		mother=p;
	}
	void find_zf()
	{
		if(father==NULL||father->father==NULL)
		{
			cout<<name<<"'s zf is unknown"<<endl;
			return;
		}			
		else
			cout<<name<<"'s zf is: "<<father->father->name<<endl;
	}
	void find_zm()
	{
		if(father==NULL||father->mother==NULL)
		{
			cout<<name<<"'s zm is unknown"<<endl;
			return;
		}
		else
			cout<<name<<"'s zm is: "<<father->mother->name<<endl;
	}
	void find_wzf()
	{
		if(mother==NULL||mother->father==NULL)
		{
			cout<<name<<"'s wzf is unknown"<<endl;
			return;
		}
		else
			cout<<name<<"'s wzf is: "<<mother->father->name<<endl;
	}
	void find_wzm()
	{
		if(mother==NULL||mother->mother==NULL)
		{
			cout<<name<<"'s wzm is unknown"<<endl;
			return;
		}
		else
			cout<<name<<"'s wzm is: "<<mother->mother->name<<endl;
	}
};
int main(void)
{
	Person *p=new Person [9]{
	Person("张五",'M'),Person("王五",'F'),
	Person("李四",'M'),Person("王八",'F'),
	Person("张四",'M'),Person("李六",'F'),
	Person("张三",'M'),Person("张二",'F'),Person("张一",'M')};
	p[6].set_fa(&p[4]);
	p[6].set_mo(&p[5]);
	p[7].set_fa(&p[4]);
	p[7].set_mo(&p[5]); 
	p[8].set_fa(&p[4]);
	p[8].set_mo(&p[5]);
	p[4].set_fa(&p[0]);
	p[4].set_mo(&p[1]); 
	p[5].set_fa(&p[2]);
	p[5].set_mo(&p[3]);
	for(int i=0;i<9;i++)
	{
		p[i].show_fa();
    }   
    for(int i=0;i<9;i++)
	{
		p[i].show_mo();
    }
	cout<<p[6].name<<"'s brothers or sisters are(is):"<<endl;
		for(int i=0;i<9;i++)
		{
			if(p[i].father==NULL)
				continue;
			if(strcmp(p[6].father->name,p[i].father->name)==0)
				cout<<p[i].name<<endl;
		}
	p[6].find_zf();
	p[6].find_zm();
	p[6].find_wzf();
	p[6].find_wzm();
	p[4].find_zf();  
	return 0;
}
