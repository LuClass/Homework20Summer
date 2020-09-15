#include <iostream>
#include<time.h>
using namespace std;

class Date {
	int year;
	int month;
	int day;
public:
	Date(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}
};
class Person {
private:
	string name;
	char sex;
	string  idno;
	Date birthday;
	Person* father;
	Person* mother;
public:
	Person(string n, char s, string id, int y, int m, int d, Person* fa, Person* mo) :birthday(y,m,d){
		name = n;
		sex = s;
		idno = id;
		father = fa;
		mother = mo;
	}
};
