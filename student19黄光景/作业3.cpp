#include<iostream>
#include<string.h>
using namespace std;
class Person{
	string name;
	char sex;
	int age;
	string fa,ma;
	
   public:
   	Person(string n,char s,int a,string f,string m)
   	  :name(n),sex(s),age(a),fa(f),ma(m){
		 }
	
	 string getname(){return name;}
	 char getsex(){ return sex;}
	 int getage(){ return age;}
	string getfa(){return fa;}
	string getma(){return ma;}

	bool isf(Person p1,Person p2){
		if(p1.fa==p2.name) return 1;
		return 0;
	} 
	bool ism(Person p1,Person p2){
	     if(p1.ma==p2.name)
	     return 1;
	     return 0;
	}
	bool xdjm(Person p1,Person p2){
	     if(p1.fa==p2.fa)
	     return 1;
	     return 0;
	}

};

int main()
{	
    int pe=0;string nam;
    Person a[10];

/*	Person a[0]("AA","m",80,"fa","ma");
	Person a[1]("BB","f",80,"f","m");
	Person a[2]("CC","m",80,"Fa","Ma");
	Person a[3]("DD","f",80,"F","M");
	Person a[4]("AB","m",60,"AA","BB");
	Person a[5]("Ab","m",60,"AA","BB");
	Person a[6]("CD","f",60,"CC","DD");
	Person a[7]("ac","m",30,"AB","CD");
	Person a[8]("bd","f",20,"AB","CD");
	Person a[9]("ad","m",25,"AB","CD");
*/
	cout<<"input name:"<<endl;
	cin>>nam;
    for(int i=0;i<10;i++)
    if(a[i].getname()==nam) pe=i;
    char se;
    if(a[pe].getsex()=='m') se="他";else se="她";
	for(int i=0;i<10;i++)
	{
		if(isf(a[pe],a[i])) 
		{
		   cout<<se<<"的父亲是"<<a[i].getname()<<endl;
		   for(int k=0;k<10;k++)
		   {
		   if(isf(a[i],a[k])) 
		       cout<<se<<"的祖父是"<<a[k].getname();
		    if(ism(a[i],a[k])) 
		       cout<<se<<"的祖母是"<<a[k].getname();
		}}
		if(ism(a[pe],a[i])) 
		{
			cout<<se<<"的母亲是"<<a[i].getname()<<endl;
			 for(int k=0;k<10;k++)
		   {
		   if(isf(a[i],a[k])) 
		       cout<<se<<"的外祖父是"<<a[k].getname();
		    if(ism(a[i],a[k])) 
		       cout<<se<<"的外祖母是"<<a[k].getname();
		}}
		if(xdjm(a[pe],a[i])) 
		  {
		    if(a[i].getsex()=="f") cout<<se<<"的姐妹是"<<a[i].getname()<<endl;
		     else  cout<<se<<"的兄弟是"<<a[i].getname()<<endl;
	      }
	    
	}
	return 0;
}

