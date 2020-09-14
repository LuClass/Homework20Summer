#include <iostream>
using namespace std;
class person{
private:
	string name;
	char sex;   //f指女性，m指男性 
	person *mom;
	person *dad;
public:
	string getName(){
		return name;
	}
	person * getMom(){
		return mom;
	}
	string Momname(){
		return mom->name;
	}
	person * getDad(){
		return dad;
	}
	string Dadname(){
		return dad->name;
	}
	string getGrandf(){
		return dad->dad->name;
	}
	string getGrandm(){
		return dad->mom->name;
	}
	string getGrandmom(){
		return mom->mom->name;
	}
	string getGranddad(){
		return mom->dad->name;
	}
	person(const char* name,const char sex,person *mom,person *dad)
		:name(name),sex(sex),mom(mom),dad(dad){}
}; 
bool isBS(person a,person b){
	if ((a.getDad()==b.getDad())&&(a.getMom()==b.getMom()))
		return true;
	return false;
}
int main(){
	person a4("张三外婆",'f',NULL,NULL);
	person a5("张三外公",'m',NULL,NULL);
	person a6("张三奶奶",'f',NULL,NULL);
	person a7("张三爷爷",'m',NULL,NULL);
	person a2("张三妈妈",'f',&a4,&a5);
	person a3("张三爸爸",'m',&a6,&a7);
	person a1("张三",'m',&a2,&a3);
	person a8("李四",'m',NULL,NULL);
	person a9("张三哥哥",'m',&a2,&a3);
	cout<<"张三的外婆是："<<a1.getGrandmom()<<endl;
	cout<<"张三的外公是："<<a1.getGranddad()<<endl;
	cout<<"张三的奶奶是："<<a1.getGrandm()<<endl;
	cout<<"张三的爷爷是："<<a1.getGrandf()<<endl;
	cout<<"张三的妈妈是："<<a1.Momname()<<endl;
	cout<<"张三的爸爸是："<<a1.Dadname()<<endl;
	if (isBS(a1,a8)==1){
		cout<<a8.getName()<<"是"<<a1.getName()<<"的兄弟姐妹"<<endl;}
	else{
		cout<<a8.getName()<<"不是"<<a1.getName()<<"的兄弟姐妹"<<endl;}
	if (isBS(a1,a9)==1){
		cout<<a9.getName()<<"是"<<a1.getName()<<"的兄弟姐妹"<<endl;}
	else{
		cout<<a9.getName()<<"不是"<<a1.getName()<<"的兄弟姐妹"<<endl;}
}
