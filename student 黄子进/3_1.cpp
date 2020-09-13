#include<iostream>
using namespace std;
class Person{
	private:
	Person *father,*mother;
	string name;
	bool isman;
	public:	
	Person(){}
	Person(string name,bool isman,Person *father = NULL,Person *mother = NULL)
			:father(father),mother(mother),name(name),isman(isman){}
	Person &operator=(const Person &p)
	{
		this->father = p.father;
		this->mother = p.mother;
		this->name = p.name;
		this->isman = p.isman;
	}
//	~Person(){
//		if(father != NULL)
//		delete father;
//		if(mother != NULL)
//		delete mother;
//	}
	bool operator==(const Person &p)
	{
		if(this->name != p.name)
		return false;
		if(this->isman != p.isman)
		return false;
		return true;
	}
	Person* getfather(){
		return this->father;
	}
	Person* getmother(){
		return this->mother;
	}
	void print()
	{
		cout<<name;
		if(isman)
		cout<<" 男 ";
		else
		cout<<" 女 ";
		 
	}
	void printname()
	{
		cout<<name;
	}
	void printnima()
	{
		this->mother->printname();
	}
	void printniba()
	{
		this->father->printname();
	}
	Person* getFather(){return this->father;}
	Person* getMother(){return this->mother;}
};
bool is_nimei(Person ni,Person nimei)
{
	return *(ni.getFather()) == *(nimei.getFather());
}
int main()
{
	Person me;
	Person he("黄一龙",false,&me);
	Person she("黄一旦",true,&he,&me);
	Person dog("肖战",true,&she,&he);
	Person N("蔡徐坤",false,&dog,&she);
	Person xi("李易峰",false,&N,&N);
	Person you("黄一博",true,&N,&xi);
	Person PP[10] = {he,she,dog,N,xi};
	
	for(int i = 0;i < 5;i++)
	{
		PP[i].print();
		cout<<endl;
	}
	cout<<"其中，你是"<<endl;
	you.print();
	cout<<"\n你的兄弟姐妹是:\n"; 
	for(int i = 0;i < 5;i++)
	{
		if(is_nimei(you,PP[i]))
		PP[i].print();
	}
	cout<<"\n你的祖父是：";
	Person *temp;
	temp = you.getfather();
	temp->printniba();
	cout<<"\n你的祖母是：";
	temp->printnima();
	cout<<"\n你的外祖父是：";
	temp = you.getmother();
	temp->printniba();
	cout<<"\n你的外祖母是：";
	temp->printnima();
	return 0;
}

