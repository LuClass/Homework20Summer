#include<iostream>
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
		Person* getGrandFatherInLaw(){
			Person *grandfatherinlaw = this->mother->father;
			return grandfatherinlaw;
		}
		Person* getGrandMotherInLaw(){
			Person *grandmotherinlaw = this->mother->mother;
			return grandmotherinlaw;
		}
		bool isBrother(Person* p){
			if(this->father == p->father &&  p->getSex() == 'f') return true;
			else return false;
		}                                                 //若返回true 则表示是兄弟 
		bool isSister(Person* p){
			if(this->father == p->father && p->getSex() == 'm') return true;
			else return false;
		} 
};                                              //若返回false，则表示是姐妹 
int main(){
	return 0; 

}
