#include<iostream>
using namespace std;
class Person{
	string name,fathername,mothername;
	char sex;
	
public:
    Person *father;
	Person *mother;
	Person *a,*b;
	Person(char * pname,char sex,char * fname,char * mname,Person *a,Person *b):sex(sex),name(pname),fathername(fname),mothername(mname){
		if(fathername==a->name) {father=a;}
		if(mothername==b->name) {mother=b;}
		}
	Person(char * pname,char sex):sex(sex),name(pname){}
	
	
	const string & getGrandfather(){
		return father->fathername;
	}
	const string & getGrandmother(){
		return father->mothername;
	}
	const string & getWGrandfather(){
		return mother->fathername;
	}
	const string & getWGrandmother(){
		return mother->mothername;
	}
	char getSex(){return sex;}
	const string & getname(){
	return name;
	}
	void show(){
		cout<<(sex=='f'?"����":"����")<<getname()<<endl; 
	}
};
bool brothersister(Person a,Person b){
     if(a.father==b.father&&a.mother==b.mother){
     	return true;
	 }
     else return false;

}
void showbrothersister(Person a,Person b){
if(brothersister(a,b)){cout<<a.getname()<<"���ֵܽ����У�"<<b.getname()<<endl; 
	
}}
	

int main(){
	Person a("��һ",'m'),b("��һ",'f'),c("��һ",'m'),d("��һ",'f');
	Person e("�Ŷ�",'m',"��һ","��һ",&a,&b);
	Person f("����",'f',"��һ","��һ",&c,&d);
	Person g("����",'m',"�Ŷ�","����",&e,&f);
	Person h("��˼",'m',"�Ŷ�","����",&e,&f);
	showbrothersister(g,h);
	cout<<g.getname()<<"���游�ǣ�"<<g.getGrandfather()<<endl; 
	cout<<g.getname()<<"����ĸ�ǣ�"<<g.getGrandmother()<<endl; 
	cout<<g.getname()<<"�����游�ǣ�"<<g.getWGrandfather()<<endl; 
	cout<<g.getname()<<"������ĸ�ǣ�"<<g.getWGrandmother()<<endl; 
	return 0;
	
}
