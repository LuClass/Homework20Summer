#include<iostream>
#include<string.h>
using namespace std;
class person{
	string name;
	string gender;
	person* mother;
	person* father;
public:
	person(string n,string g,person* m=0,person* f=0){
		name=n;gender=g;mother=m;father=f;
	}
	void printname(){
		cout<<name;
	}
	void print(){
		cout<<"ÐÕÃû£º"<<name<<'\t';
		cout<<"ÐÔ±ð£º"<<gender<<'\t';
		if(mother!=0)
		cout<<"Ä¸Ç×£º"<<mother->name<<'\t';
		if(father!=0)
		cout<<"¸¸Ç×£º"<<father->name;
		cout<<endl;
	}
	person* getmother(){
		return mother;
	}
	person* getfather(){
		return father;
	}
	string getname(){
		return name;
	}
	~person(){
		if(mother!=0)
 		delete mother;
 		if(father!=0)
 		delete father;
	}
};
int main(){
	person grama1("ÍâÆÅ","Å®"),grapa1("Íâ¹«","ÄÐ");
	person grama2("ÄÌÄÌ","Å®"),grapa2("Ò¯Ò¯","ÄÐ");
	person mom("ÂéÂé","Å®",&grama1,&grapa1),dad("ôÎôÎ","ÄÐ",&grama2,&grapa2);
	person sis("ÃÃÃÃ","Å®",&mom,&dad),bro("¸ç¸ç","ÄÐ",&mom,&dad);
	person p[8]={grama1,grapa1,grama2,grapa2,mom,dad,sis,bro};
	cout<<"¼ÒÍ¥³ÉÔ±£»"<<endl;
	for(int i=0;i<8;i++)
	p[i].print();
	cout<<"ÃÃÃÃµÄÐÖµÜ½ãÃÃÓÐ£º";
	for(int i=0;i<8;i++){
		if(sis.getmother()==p[i].getmother()&&sis.getfather()==p[i].getfather()&&sis.getname()!=p[i].getname()){
			p[i].printname();
			cout<<'\t';
		}
	}
	cout<<endl;
	person *p1,*p2;
	p1=sis.getmother();
	p2=p1->getmother();
	cout<<"ÃÃÃÃµÄÍâ×æÄ¸ÊÇ£º";
	p2->printname();
	return 0;
}
