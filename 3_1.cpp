#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {
	string name;
	bool male;
	Person* father;
	Person* mother;  //指针成员指向对象的父母对象 

public:

	Person(){}

	Person(string name, bool male, Person* f1, Person* m1) {
		this->name = name;
		this->male = male;
		this->father = f1;
		this->mother = m1;

	}

	void Setname(string name) {
		this->name = name;
	}

	string Getname() {
		return name;
	}

	string Getfathername() {  //得到该人双亲姓名
		return father->name;
	}

	string Getmothername() {  //得到该人双亲姓名
		return mother->name;
	}

	void Getgrandparents() { //在该人双亲的双亲都存在时，判定为找到该人的祖父母，否则判定失败
		if (father->father == NULL || mother->father == NULL || father->mother == NULL || mother->mother == NULL) {
			cout << "找不到该人的祖父母。" << endl;
		}
		else
			cout << this->Getname() << "的祖父母为：" << father->Getfathername() << '、' << father->Getmothername() << "和" << mother->Getfathername() << '、' << mother->Getmothername() << endl;

	}


};


Person p[9999]; //定义一个对象数组用来存放Person的不同对象（即不同的人

int c=0;

void Setp(Person p1) {
	p[c] = p1;
	c++;
}

void GetBAS(Person p1) {
	cout << p1.Getname() << "的兄弟姐妹有：";
	int i=0;
	for ( i = 0; i < 9999; i++) {
		if (p[i].Getname()== "")	//当第i个对象元素中无姓名，即该对象（人）不存在时，代表已经历遍了所有人，退出循环
			break;
		else if(p[i].Getfathername() == p1.Getfathername() && p[i].Getmothername() == p1.Getmothername()) //若有人与输入的人同父或同母，判断他们为兄弟姐妹
		{
			cout << p[i].Getname() << ' ';
		}
		else    //否则他/她不是该人的兄弟姐妹，继续检查下一个人
			continue;
	}






}








int main()
{
	Person p_01;
	p_01.Setname("夏东海");
	Person p_02;
	p_02.Setname("刘梅");

	Person p_1("刘星" , 1, &p_01, &p_02);
	Setp(p_1);

	Person p_2("夏雨", 1, &p_01, &p_02);
	Setp(p_2);

	Person p_3("夏雪", 0, &p_01, &p_02);
	Setp(p_3);

	p_1.Getgrandparents();

	GetBAS(p_1);

}
