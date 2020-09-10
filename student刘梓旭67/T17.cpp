#include<iostream>
#include<string.h>
using namespace std;
class Person{
	string name;
	char sex;
	Person *father,*mother;
	public:
	Person (string name,char sex,Person *father,Person *mother)
	 {this->name=name;
	 this->sex=sex;
	 this->father=father;
	 this->mother=mother;
	 }
      Person *getfather(){return this->father;}
	   Person *getmother(){return this->mother;}
	   string getname(){return name;}
	   string printfather()
	   {return father->name;
		} 
		string printmother()
	   {return mother->name;
		} 
};
bool isyourxdjm(Person a,Person b)
	  {if((a.getfather()==NULL&&a.getmother()==NULL)||(b.getfather()==NULL&&b.getmother()==NULL))
	  return 0;
	  if(a.getfather()==b.getfather())
	   return 1;
	   else if(a.getmother()==b.getmother())
	   return 1;
	   return 0;
	  }
int main()
{Person p9("英俊爹",'m',NULL,NULL);
Person p2("胡英俊",'m',&p9,&p9);
Person p3("张小丽",'f',&p9,&p9);
Person p1 ("图图",'m',&p2,&p3);
Person p4("01",'m',&p2,&p3);
Person p5("02",'f',&p2,NULL);
Person p6("03",'m',NULL,&p3);
Person p7("04",'f',&p1,&p4);
Person p8("05",'f',NULL,NULL);

Person p[9]={p1,p2,p3,p4,p5,p6,p7,p8,p9};
for(int i=0;i<9;i++)
 {int flag=0;
 cout<<p[i].getname()<<"的兄弟姐妹有"; 
 for(int j=i+1;j<8;j++)
   {if(isyourxdjm(p[i],p[j])) 
     {cout<<p[j].getname()<<" ";
      flag=1;
	 }
   }
    if(!flag)
    cout<<"个锤子";
   cout<<endl;
 }
 
 cout<<p1.getname()<<"的祖父是"<<p1.getfather()->printfather()<<endl;
  cout<<p1.getname()<<"的祖母是"<<p1.getfather()->printmother()<<endl;
   cout<<p1.getname()<<"的外祖父是"<<p1.getmother()->printfather()<<endl;
    cout<<p1.getname()<<"的外祖母是"<<p1.getmother()->printmother()<<endl;
 
return 0;
}
