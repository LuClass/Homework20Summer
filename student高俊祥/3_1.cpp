#include<iostream>
#include<string>
#include<iomanip>
#include<time.h>
using namespace std;
class Person {
	string name;
	string sex;
	Person* father;
	Person* mother;
public:
	Person(string a, string b) {
		name = a;
		sex = b;
		father = NULL;
		mother = NULL;
	}
	Person(string a, string b, Person* f, Person* m) {
		name = a;
		sex = b;
		father = new Person(*f);
		mother = new Person(*m);
	}
	void find_brother_sister(Person person[]) {
		int i = 0;
		while (person[i].name!="") {
			if (&(person[i].mother) == &(this->mother)) {
				cout << person[i].name << endl;
			}
			i++;
		}
	}
	void find_grandmom_m(){
		cout << "Íâ×æÄ¸:" <<(*(*this->mother).mother).name << endl;
	}
	void find_grandpa_m() {
		cout << "Íâ×æ¸¸:" << (*(*this->mother).mother).name << endl;
	}
	void find_grandmom_f() {
		cout << "×æÄ¸:" << (*(*this->father).father).name << endl;
	}
	void find_grandpa_f() {
		cout << "×æ¸¸:" << (*(*this->father).father).name << endl;
	}
	~Person() {
		if(father!=NULL)
			delete father;
		if(mother!=NULL)
			delete mother;
	}
};
int main() {
	Person a("a","male");
	Person b("b","female");
	Person c("c", "male", &a, &b);
	Person fam[3] = {
		Person("d", "male", &a, &b),Person("e", "male", &a, &b),Person("e", "male", &a, &b)
	};
	Person h("h", "male", &fam[0], &fam[1]);
	c.find_brother_sister(fam);
	c.find_grandmom_f();
}