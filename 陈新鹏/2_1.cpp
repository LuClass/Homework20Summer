#include<iostream>
using namespace std;

class Person
{
	string name,sex;
	Person * father,* mother;
public:
	Person(string n, string s, Person *father=NULL, Person *mother=NULL)
	{
		name=n;
		sex=s;
		this->father=father;
		this->mother=mother;
	}
	Person *getFather(){return this->father;}
	Person *getMother(){return this->mother;}
	string getName(){return name;}
	~Person(){}
};

void isXDJM(Person p1, Person p2)
{
	if(p2.getFather()!=NULL&&p2.getMother()!=NULL)
	{
		if((p1.getFather()==p2.getFather()||(p1.getMother()==p2.getMother())))
	    cout<<p2.getName()<<" 是 "<<p1.getName()<<" 的兄弟姐妹"<<endl; 
	}
}

void isGrandfm(Person *a, Person *b)
{
	if(a->getFather()->getFather()==b)
	   	cout<<b->getName()<<" 是 "<<a->getName()<<" 的祖父"<<endl;
	else  if(a->getFather()->getMother()==b)
	   	cout<<b->getName()<<" 是 "<<a->getName()<<" 的祖母"<<endl;
	else if(a->getMother()->getFather()==b)
		cout<<b->getName()<<" 是 "<<a->getName()<<" 的外祖父"<<endl;
	else if(a->getMother()->getMother()==b)
	 	cout<<b->getName()<<" 是 "<<a->getName()<<" 的外祖母"<<endl;
}

int main()
{
	Person p[8]={Person("王爸_父", "m"), 
	            Person("王爸_母", "f"),
				Person("王爸", "m", &p[0], &p[1]),
				Person("王妈_父", "m"),
				Person("王妈_母", "f"),
				Person("王妈", "f", &p[3], &p[4]),
				Person("小小王", "f", &p[2], &p[5]),
				Person("张三", "m")
				};
	Person t("小王", "m", &p[2], &p[5]);
	int i;
	for(i=0;i<9;i++)
	{
		isXDJM(t, p[i]);
		isGrandfm(&t, p+i);
	}
	return 0;
} 
