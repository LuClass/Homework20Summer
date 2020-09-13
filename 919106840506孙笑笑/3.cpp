#include <iostream>
#include <cstring>
using namespace std;
class Person{
string name,sex;
Person *mom;
Person *dad;
public:
Person(string n,string s,Person* m,Person* d)
{
	name = n;
	sex = s;
	mom = m;
	dad = d;

}
string getName(){return name;}
string getSex(){return sex;	}
Person * getmom(){return mom;}
Person * getdad(){return dad;}

}; 
int main()
{
Person p0("¼Ö´úÉÆ","ÄÐ",NULL,NULL),p1("¼ÖÕþ","ÄÐ",NULL,&p0),
p2("¼ÖÉâ","ÄÐ",NULL,&p0),p3("¼Ö±¦Óñ","ÄÐ",NULL,&p1);
Person p[4]={p0,p1,p2,p3}; 
for(int i=0;i<4;i++)
             {	
				 if(p[i].getdad()!=NULL)
				 {cout<<p[i].getName()<<"µÄ°Ö°ÖÊÇ"<<p[i].getdad()->getName()<<endl; 
				 }
				 } 
				 for(int i=0;i<3;i++)	  
			{if(p[i].getdad()==p[i+1].getdad())
	     cout<<p[i].getName()<<"ºÍ"<<p[i+1].getName()<<"ÊÇÐÖµÜ½ãÃÃ"<<endl;          	 
              }	  
for(int i=0;i<4;i++)	  
				  {
				  if(p[i].getdad()==NULL)
				 {continue;
				  } 
				  else{
				  if(p[i].getdad()->getdad()==NULL)
				  {continue;
				  }
				  else{cout<<p[i].getName()<<"µÄÒ¯Ò¯ÊÇ"<<p[i].getdad()->getdad()->getName(); 
				  }
				  
				  }
				  
				  }
            
			
return 0;
}
