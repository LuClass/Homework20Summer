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
		cout<<(sex=='f'?"她是":"他是")<<getname()<<endl; 
	}
};
bool brothersister(Person a,Person b){
     if(a.father==b.father&&a.mother==b.mother){
     	return true;
	 }
     else return false;

}
void showbrothersister(Person a,Person b){
if(brothersister(a,b)){cout<<a.getname()<<"的兄弟姐妹有："<<b.getname()<<endl; 
	
}}
	

int main(){
	Person a("张一",'m'),b("何一",'f'),c("刘一",'m'),d("孙一",'f');
	Person e("张二",'m',"张一","何一",&a,&b);
	Person f("刘何",'f',"刘一","孙一",&c,&d);
	Person g("张三",'m',"张二","刘何",&e,&f);
	Person h("张思",'m',"张二","刘何",&e,&f);
	showbrothersister(g,h);
	cout<<g.getname()<<"的祖父是："<<g.getGrandfather()<<endl; 
	cout<<g.getname()<<"的祖母是："<<g.getGrandmother()<<endl; 
	cout<<g.getname()<<"的外祖父是："<<g.getWGrandfather()<<endl; 
	cout<<g.getname()<<"的外祖母是："<<g.getWGrandmother()<<endl; 
	return 0;
	
}
