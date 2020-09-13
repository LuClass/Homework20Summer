#include<iostream>
#include<string.h>
using namespace std;
class Person{
	private:
		string name;
		bool sex;
		Person *father, *mother;
	public:
		Person(){
		}
		Person(string name,bool sex,Person *father,Person *mother)
				:name(name),sex(sex),father(father),mother(mother){} 
	

		~Person(){
		}
		string getName(){
			return name;
		}
		bool getSex(){
			if (sex==1)return "male";
			else return "female"; 
		}
		void setName(string name){
			this->name = name;
		}
		void setSex(bool sex){
			this->sex = sex;
		}
		string getFather(){
			return father->name;
		}
		string getMother(){
			return mother->name;
		}
		
string sisorbro(Person* p){int x=0;
if(this->father == p->father&&this->mother != p->mother &&  p->getSex() == 1) x=1;//Í¬¸¸ÒìÄ¸ĞÖµÜ 
else if(this->father == p->father&&this->mother != p->mother &&  p->getSex() == 0) x=2;//Í¬¸¸ÒìÄ¸½ãÃÃ 
else if(this->father != p->father&&this->mother == p->mother &&  p->getSex() == 1) x=3;//Í¬muÒìfuxiongdi 			
else if(this->father != p->father&&this->mother == p->mother &&  p->getSex() == 0) x=4;//Í¬muÒìfu½ãÃÃ 		
else if(this->father == p->father&&this->mother == p->mother &&  p->getSex() ==1) x=5;//Í¬¸¸tongÄ¸xiongdi 			
else if(this->father == p->father&&this->mother == p->mother &&  p->getSex() == 0) x=6;//Í¬¸¸tongÄ¸½ãÃÃ 		
else if(this->father != p->father&&this->mother != p->mother ) x=7;//doubushi
if(x==1) return "Í¬¸¸ÒìÄ¸ĞÖµÜ";
if(x==2) return "Í¬¸¸ÒìÄ¸½ãÃÃ";
if(x==3) return "Í¬Ä¸Òì¸¸ĞÖµÜ";
if(x==4) return "Í¬Ä¸Òì¸¸½ãÃÃ";
if(x==5) return "Í¬¸¸Í¬Ä¸ĞÖµÜ";
if(x==6) return "Í¬¸¸Í¬Ä¸½ãÃÃ";
if(x==7) return "ÎŞÑªÔµ¹ØÏµ";
		}                                                 
		
};                                            
int main(){
Person person1;Person person2;Person person5;
person1.setName("whz");
person2.setName("wjl");
person5.setName("xxx");
Person person3("wx",1,&person1,&person2);
Person person4("ws",1,&person1,&person5);
cout<<person3.sisorbro(&person4)<<endl;


}
