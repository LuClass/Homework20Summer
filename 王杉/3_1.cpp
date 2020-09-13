#include <iostream>
using namespace std;
class Person{
	string name;
	string sex;
	Person * father;
	Person * mother;
public:
	Person(){
		}
	Person(string name,string sex,Person *father,Person * mother)
				:name(name),sex(sex),father(father),mother(mother){} 
    string getName()
	{return name;}
	string getSex()
	{return sex;}
	Person * getFatherAdd()
	{return father;}
	Person * getMotherAdd()
	{return mother;}
	string getFather()
	{return father->name;}
	string getMother()
	{return mother->name;}
	void setName(string name)
	{this->name=name;}
	void setSex (string sex)
	{this->sex=sex;}
	~Person(){
	}	
};
void judge(Person a,Person b)
{
	if(a.getFatherAdd()==b.getFatherAdd()&&a.getMotherAdd()==b.getMotherAdd())
	{cout<<a.getName()<<" 和 "<<b.getName()<<" 是兄弟姐妹 。"<<endl;}
	else  
	{cout<<a.getName()<<" 和 "<<b.getName()<<" 不是兄弟姐妹 。"<<endl;}
 } 
void grand(Person a)
{
	cout<<a.getName()<<" 的祖父是 "<<a.getFatherAdd()->getFather()<<endl;
	cout<<a.getName()<<" 的祖母是 "<<a.getFatherAdd()->getMother()<<endl;
	cout<<a.getName()<<" 的外祖父是 "<<a.getMotherAdd()->getFather()<<endl;
	cout<<a.getName()<<" 的外祖母是 "<<a.getMotherAdd()->getMother()<<endl;
 } 
int main()
{
	//Person p1,p2,p3,p4,p5,p6,p7,p8,p9;	
	Person p4("张大爷","男",NULL,NULL);
	Person p5("张大妈","女",NULL,NULL);
	Person p2("张三爸爸","男",&p4,&p5);
	Person p6("李大爷","男",NULL,NULL);
	Person p7("李大妈","女",NULL,NULL);
	Person p3("张三妈妈","女",&p6,&p7);
	Person p1("张三","男",&p2,&p3);	
	Person p8("张四","男",&p2,&p3);
	Person p9("王兰花","女",NULL,NULL); 
	grand(p1);
	judge(p1,p8);
	judge(p1,p9);
	return 0; 
	 
}
