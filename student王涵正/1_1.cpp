#include<iostream>
#include<string.h>
using namespace std;
class Cat{
private:
int age;float weight;char color[10];
char name[20];bool sex;	
public:
    void set(int a,float w,bool s);	
	void setname(char a[20]);
	void setcolor(char b[10]);
	void print(){
	cout<<"名字："<<name<<endl;	
	cout<<"年龄："<<age<<endl;
	cout<<"体重："<<weight<<endl;
	cout<<"毛色："<<color<<endl;
	if(sex==1) cout<<"性别：雄"<<endl;
	else cout<<"性别：雌"<<endl;	
	}
	
	
};
void Cat::set(int a,float w,bool s){
age=a;	
weight=w;
sex=s;	
}
void Cat::setcolor(char b[10]){
strcpy(color,b);	
}
void Cat::setname(char a[20]){
strcpy(name,a);	
}

int main(){
Cat cat1,cat2;char b[10];char a[20];
cat1.set(5,18.3,1);
strcpy(b,"blue");strcpy(a,"TOM");
cat1.setcolor(b);
cat1.setname(a);
cat2.set(7,12.4,0);
strcpy(b,"yellow");strcpy(a,"wangshan");	
cat2.setcolor(b);	
cat2.setname(a);	
cout<<"cat1:";
cat1.print();	
cout<<"cat2:";
cat2.print();
}
