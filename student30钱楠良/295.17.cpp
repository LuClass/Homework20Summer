#include<iostream>
#include<string.h>
using namespace std;

class Person{					
	public:
	    char sex;
		Person * father;
		Person * mother;
		char name[20];
		Person()
		{
			sex='N';
		    father=NULL;
		    mother=NULL;
		}
		Person(char * name,char sex,Person * father=NULL,Person * mother=NULL)
	    {
		    strcpy(this->name,name);
		    this->sex=sex;
		    this->father=father;
		    this->mother=mother;
	    }
		~Person(){};
		void setfather(Person * p)
		{
			father=p;
		}
		void setmother(Person * p)
		{
			mother=p;
		}
		void showfather()
    	{
		    if(father==NULL)
			    cout<<name<<"没有爸爸qaq"<<endl;
		    else
			    cout<<name<<"爸爸是"<<father->name<<endl;
    	}
    	void showmother()
    	{
		    if(mother==NULL)
			    cout<<name<<"没有妈妈qaq"<<endl;
		    else
			    cout<<name<<"妈妈是"<<mother->name<<endl;
    	}
};

int main()
{
	Person *p=new Person [10]{
	Person("爷爷",'M'),Person("奶奶",'F'),
	Person("外公",'M'),Person("外婆",'F'),
	Person("夏东海",'M'),Person("刘梅",'F'),Person("夏雪妈妈",'F'),
	Person("夏雨",'M'),Person("夏雪",'F'),Person("刘星",'M')};
	p[4].setfather(&p[0]);
	p[4].setmother(&p[1]);
	p[5].setfather(&p[2]);
	p[5].setmother(&p[3]);
	p[6].setfather(&p[2]);
	p[6].setmother(&p[3]);
	p[7].setfather(&p[4]);
	p[7].setmother(&p[5]);
	p[8].setfather(&p[4]);
	p[8].setmother(&p[5]);
	p[9].setfather(&p[4]);
	p[9].setmother(&p[5]);
	cout<<p[7].name<<"的兄弟姐妹是"<<endl;
	for(int i=0;i<10;i++)
	{
		if(p[i].father==NULL)
		    continue;
		    if(i==7)
		    
		if(strcmp(p[i].father->name,p[7].father->name)==0)
		    cout<<p[i].name<<endl;
	}
	for(int i=0;i<10;i++)
	{
		if(p[i].father!=NULL&&p[i].father->father!=NULL)
		{
		    cout<<p[i].name<<"的爷爷是"<<p[i].father->father->name<<endl;
		}
		if(p[i].father!=NULL&&p[i].father->mother!=NULL)
		{
		    cout<<p[i].name<<"的奶奶是"<<p[i].father->mother->name<<endl;
		} 
		if(p[i].mother!=NULL&&p[i].mother->father!=NULL)
		{
		    cout<<p[i].name<<"的外公是"<<p[i].mother->father->name<<endl;
		}
		if(p[i].mother!=NULL&&p[i].mother->mother!=NULL)
		{
		    cout<<p[i].name<<"的外婆是"<<p[i].mother->mother->name<<endl;
		}        
	}
	return 0; 
}
