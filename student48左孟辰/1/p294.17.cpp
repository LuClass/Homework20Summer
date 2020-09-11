#include <iostream>
#include <string>
using namespace std;
class Person
{
		string name;
		char sex;
		Person *father;
		Person *mother;
	public:
		Person(string name,char sex,Person *father=NULL,Person *mother=NULL)
		:name(name),sex(sex),father(father),mother(mother){};
		void grandparents()
		{
			if(father&&father->father)
			cout<<"×æ¸¸:"<<father->father->name;
			if(father&&father->mother)
			cout<<"\n×æÄ¸:"<<father->mother->name;
			if(mother&&mother->father)
			cout<<"\nÍâ×æ¸¸:"<<mother->father->name;
			if(mother&&mother->mother)
			cout<<"\nÍâ×æÄ¸:"<<mother->mother->name<<'\n';
		}
		void brotherorsister(Person &a)
		{
			if(a.father==father&&a.mother==mother)
			{
				if(a.sex=='M')
				cout<<a.name<<"ÊÇÐÖµÜ\n";
				else
				cout<<a.name<<"ÊÇ½ãÃÃ\n";
			}
			else
				cout<<a.name<<"²»ÊÇÐÖµÜ½ãÃÃ\n";
		}
};

int main()
{
	Person p1("Ò¯Ò¯",'M',NULL,NULL),p2("ÄÌÄÌ",'F',NULL,NULL),
 			p3("Íâ¹«",'M',NULL,NULL),p4("ÍâÆÅ",'F',NULL,NULL),
 			p5("°Ö°Ö",'M',&p1,&p2),p6("ÂèÂè",'F',&p3,&p4),
 			p7("ÎÒ",'F',&p5,&p6),p8("¸ç¸ç",'M',&p5,&p6);
	p7.grandparents();
	p7.brotherorsister(p6);
	p7.brotherorsister(p8);
	return 0;
}
