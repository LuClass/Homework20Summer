#include <bits/stdc++.h>
using namespace std;

class Person{					
	public:
	    char sex;
		Person * dad;
		Person * mom;
		char name[20];
		Person()
		{
			sex='N';
		    dad=NULL;
		    mom=NULL;
		}
		Person(char * name,char sex,Person * dad=NULL,Person * mom=NULL)
	    {
		    strcpy(this->name,name);
		    this->sex=sex;
		    this->dad=dad;
		    this->mom=mom;
	    }
		~Person(){};
		void set_dad(Person * p)
		{
			dad=p;
		}
		void set_mom(Person * p)
		{
			mom=p;
		}
		void show_dad()
    	{
		    if(dad==NULL)
			    cout<<name<<"'s dad is unkonwn"<<endl;
		    else
			    cout<<name<<"'s dad is: "<<dad->name<<endl;
    	}
    	void show_mom()
    	{
		    if(mom==NULL)
			    cout<<name<<"'s mom is unkonwn"<<endl;
		    else
			    cout<<name<<"'s mom is: "<<mom->name<<endl;
    	}
};

int main()
{
	Person *p=new Person [10]{
	Person("张一",'M'),Person("李一",'F'),
	Person("王一",'M'),Person("刘一",'F'),
	Person("张二",'M'),Person("王二",'F'),Person("王三",'F'),
	Person("张二一",'M'),Person("张二二",'F'),Person("张二三",'M')};
	p[4].set_dad(&p[0]);
	p[4].set_mom(&p[1]);
	p[5].set_dad(&p[2]);
	p[5].set_mom(&p[3]);
	p[6].set_dad(&p[2]);
	p[6].set_mom(&p[3]);
	p[7].set_dad(&p[4]);
	p[7].set_mom(&p[5]);
	p[8].set_dad(&p[4]);
	p[8].set_mom(&p[5]);
	p[9].set_dad(&p[4]);
	p[9].set_mom(&p[5]);
	cout<<p[7].name<<"'s brother(s) and(or) sister(s) are(is):"<<endl;
	for(int i=0;i<10;i++)
	{
		if(p[i].dad==NULL)
		    continue;
		if(strcmp(p[i].dad->name,p[7].dad->name)==0)
		    cout<<p[i].name<<endl;
	}
	for(int i=0;i<10;i++)
	{
		if(p[i].dad!=NULL&&p[i].dad->dad!=NULL)
		{
		    cout<<p[i].name<<"'s grandpa is"<<p[i].dad->dad->name<<endl;
		}
		if(p[i].dad!=NULL&&p[i].dad->mom!=NULL)
		{
		    cout<<p[i].name<<"'s grandma is"<<p[i].dad->mom->name<<endl;
		} 
		if(p[i].mom!=NULL&&p[i].mom->dad!=NULL)
		{
		    cout<<p[i].name<<"'s maternal grandpa is"<<p[i].mom->dad->name<<endl;
		}
		if(p[i].mom!=NULL&&p[i].mom->mom!=NULL)
		{
		    cout<<p[i].name<<"'s maternal grandma is"<<p[i].mom->mom->name<<endl;
		}        
	}
	return 0; 
}
