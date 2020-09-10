//p295 17
#include <bits/stdc++.h>
#include <ctime>
#pragma warning(disable:4996)
using namespace std;

class Person {
	string name, gender;
	Person *mom,*dad;
public:
	Person(string name_,string gender_):name(name_),gender(gender_),mom(nullptr),dad(nullptr){}
	Person(string name_,string gender_,Person *mom_,Person *dad_):name(name_),gender(gender_),mom(mom_),dad(dad_){}
	string getName() {
		return this->name;
	}
	string getGender() {
		return this->gender;
	}
	Person* getMom() {
		return this->mom;
	}
	Person* getDad() {
		return this->dad;
	}
	void setName(string name) {
		this->name = name;
	}
	void setGender(string gender_) {
		this->gender = gender;
	}
	void setMom(Person* mom) {
		this->mom = mom;
	}
	void setDad(Person* dad) {
		this->dad = dad;
	}


};

int main() {
	vector<Person> p;
	Person Sir_Randolph_Carter("Sir_Randolph_Carter", "male");
	p.push_back(Sir_Randolph_Carter);
	Person Randolph_Carter("Carter", "male");
	Randolph_Carter.setDad(&Sir_Randolph_Carter);
	p.push_back(Randolph_Carter);
	Person Ritsuka("ぐだ子", "female");
	Ritsuka.setDad(&Sir_Randolph_Carter);
	p.push_back(Ritsuka);
	Person Abigail("Abigail", "Foreigner",&Ritsuka,&Randolph_Carter);
	p.push_back(Abigail);
	Person Williams("Williams", "Foreigner", &Ritsuka, &Randolph_Carter);
	p.push_back(Williams);

	//显然，父节点表示法的弊端
	for (int i = 0; i < p.size(); ++i) {
		for (int j = 0; j < p.size(); ++j) {
			if (i!=j&&p[i].getDad() == p[j].getDad() && p[i].getMom() == p[j].getMom()) {
				cout << p[i].getName() << "'s cousin is " << p[j].getName() << endl;
			}
		}
	}

	return 0;
}