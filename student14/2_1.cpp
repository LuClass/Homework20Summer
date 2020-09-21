#include<iostream>
#include<cstring>
using namespace std;
class Person{
	private:
		string name;
		char sex;
		Person * father, *mother;
	public:
		Person(){
		}
		Person(string name,char sex,Person *father,Person *mother)
				:name(name),sex(sex),father(father),mother(mother){} 
		Person(string name,char sex)
				:name(name),sex(sex),father(NULL),mother(NULL){} 

		~Person(){
		}
		string getName(){
			return name;
		}
		char getSex(){
			return sex;
		}
		void setName(string name){
			this->name = name;
		}
		void setSex(char sex){
			this->sex = sex;
		}
		Person* getFather(){
			return father;
		}
		Person* getMother(){
			return mother;
		}
		Person* getGrandFather(){
			Person *grandfather = this->father->father;
			return grandfather;
		}
		Person* getGrandMother(){
			Person *grandmother = this->father->mother;
			return grandmother;
		}
		Person* getGrandFatherw(){
			Person *grandfatherw = this->mother->father;
			return grandfatherw;
		}
		Person* getGrandMotherw(){
			Person *grandmotherw = this->mother->mother;
			return grandmotherw;
		}
		bool isBrother(Person* p){
			if(this->father == p->father &&  p->getSex() == 'male') return true;
			else return false;
		}                                                
		bool isSister(Person* p){
			if(this->father == p->father && p->getSex() == 'female') return true;
			else return false;
		} 
};                                             
