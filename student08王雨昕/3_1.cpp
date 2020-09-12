using namespace std;
#include <iostream>
#include <string.h>
class Person
{
	char sex;
	string name;
    Person *mother,*father;
public:
	Person(string name,char sex,Person* father,Person* mother)
	{
		this->name=name;
		this->sex=sex;
		this->father=father;
		this->mother=mother;
	}
	~Person(){}
	string getName(){return name;}
	char getSex(){return sex;}
	Person *getFather(){return father;}
	Person *getMother(){return mother;}
	 
};
int main()
{
	Person p1("赵一",'M',NULL,NULL),p2("钱一",'F',NULL,NULL),
	p3("孙一",'M',NULL,NULL),p4("李一",'F',NULL,NULL),
	p5("赵二",'M',&p1,&p2),p6("孙二",'F',&p3,&p4),
	p7("赵三",'M',&p5,&p6),p8("孙三",'F',&p5,&p6),
	p9("小华",'F',&p5,&p6);

    cout<<p9.getName()<<"的祖父是 "<<p9.getFather()->getFather()->getName()<<endl;
	cout<<p9.getName()<<"的祖母是 "<<p9.getFather()->getMother()->getName()<<endl;
	cout<<p9.getName()<<"的外祖父是 "<<p9.getMother()->getFather()->getName()<<endl;
	cout<<p9.getName()<<"的外祖母是 "<<p9.getMother()->getMother()->getName()<<endl;
	Person p[8]={p1,p2,p3,p4,p5,p6,p7,p8};
	cout<<p9.getName()<<"的兄弟姐妹是 ";
	for(int i=0;i<8;i++)
	{
		if(p[i].getFather()==p9.getFather()||p[i].getMother()==p9.getMother())
		cout<<p[i].getName()<<' ';
	}
	cout<<endl;
	return 0;
}
