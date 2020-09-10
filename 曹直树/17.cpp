#include <iostream>
using namespace std;
class Parent{
	private:string n;
	public:
		string offsprings;
		string parents;
		Parent (char*name,char *zinv,char*fumu):n(name),offsprings(zinv),parents(fumu){}
		~Parent()
		{
		}
	 string getname(){
			return n;
		}
};
class Person{
	private:
		string name;
		char sex;
	public:
		Parent p;
		string siblings;
		string grandparents;
		Person(char *name,char sex,Parent p):
		sex(sex),name(name),p(p){}
		~Person(){
		}
		const string&getName(){
			return name;
		}
		void getSex(){
			if (sex=='f')
			cout<<"女";
			else if(sex=='m')
			cout<<"男";
		}
		void getSiblings(){
		siblings=	p.offsprings;
		}
		void getGrandparents(){
			grandparents=p.parents;
		}
		void show(){
			cout<<"名字是"<<name;
			cout<<",性别是";
			getSex();
			cout<<",父母有"<<p.getname()<<"，兄弟姐妹有"
			<<siblings <<",祖父母和外祖父母有"<<grandparents;
		}
};
int main()
{
	Parent a("A&B","C&D","E&F");
	Person b("O",'f',a);
	b.getSiblings();
	b.getGrandparents();
	b.show();
}
