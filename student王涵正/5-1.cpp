#include<iostream>
using namespace std;

int gys(int a,int b){
int p,r,temp;	
	p=a*b;
	if(a<b)
	{
		temp=a;
		a=b;
		b=temp;    
	}
	while(b!=0)
	{
		r=a%b;
		a=b;        
		b=r;
	}
return a;		
}
int gbs(int a,int b){
int p,r,temp;	
	p=a*b;
	if(a<b)
	{
		temp=a;
		a=b;
		b=temp;    
	}
	while(b!=0)
	{
		r=a%b;
		a=b;        
		b=r;
	}
return p/a;		
}
class Fraction{
private:
int fenzi,fenmu;
bool ok;	
public:
Fraction(){
	
}
	
	
	
Fraction(int z,int m){
if(m>0){
int gys1,gbs1;gys1=gys(z,m);
z=z/gys1;m=m/gys1;
fenzi=z;fenmu=m;		
ok=1;
}
else {ok=0;
}
}	
int getfenzi(){
	if(ok==1)
	return fenzi;
	else
	cout<<"分母小于0，对象创建无效"<<endl;
}	
int getfenmu(){
if(ok==1)
	return fenmu;
	else
	cout<<"分母小于0，对象创建无效"<<endl;
}	
bool getok(){
	cout<<ok<<endl;
}
void setok(bool a){
	ok=a;
}
void setfenzi(int a){
	fenzi=a;
}
void setfenmu(int a){
	fenmu=a;
}
void show(){
	if(ok==1)
	cout<<fenzi<<"/"<<fenmu<<endl;
	else
	cout<<"分母小于0，对象创建无效"<<endl;	
}	
Fraction operator + (const Fraction&b)const{
Fraction f;
int gbs1;gbs1=gbs(this->fenmu,b.fenmu);
int x,y;x=gbs1/this->fenmu;y=gbs1/b.fenmu;
int fenzi2,fenmu2;
fenmu2=gbs1;fenzi2=x*this->fenzi+y*b.fenzi;
int gys1;
gys1=gys(fenmu2,fenzi2);
f.setfenmu(fenmu2/gys1);
f.setfenzi(fenzi2/gys1);
if(f.fenmu>0)
f.ok=1;
return f;
}
Fraction operator - (const Fraction&b)const{
Fraction f;
int gbs1;gbs1=gbs(this->fenmu,b.fenmu);
int x,y;x=gbs1/this->fenmu;y=gbs1/b.fenmu;
int fenzi2,fenmu2;
fenmu2=gbs1;fenzi2=x*this->fenzi-y*b.fenzi;
int gys1;
gys1=gys(fenmu2,fenzi2);
f.setfenmu(fenmu2/gys1);
f.setfenzi(fenzi2/gys1);
if(f.fenmu>0)
f.ok=1;
return f;
}
Fraction operator * (const Fraction&b)const{
Fraction f;int gys1;
int fenzi2,fenmu2;
fenmu2=this->fenmu*b.fenmu;
fenzi2=this->fenzi*b.fenzi;
gys1=gys(fenmu2,fenzi2);
f.setfenmu(fenmu2/gys1);
f.setfenzi(fenzi2/gys1);
if(f.fenmu>0)
f.ok=1;
return f;
}
Fraction operator / (const Fraction&b)const{
Fraction f;int gys1;int fenzi1,fenmu1;
int fenzi2,fenmu2;
fenzi1=b.fenmu;fenmu1=b.fenzi;
fenmu2=this->fenmu*fenmu1;
fenzi2=this->fenzi*fenzi1;
gys1=gys(fenmu2,fenzi2);
f.setfenmu(fenmu2/gys1);
f.setfenzi(fenzi2/gys1);
if(f.fenmu>0)
f.ok=1;
return f;
}

operator double(){
return ((fenzi*1.00)/(fenmu*1.00));	
}

	
	
	
	
	
};




int main(){
Fraction f1(2,4);Fraction f3(1,3);	
f1.show();f3.show();	
Fraction f2(1,-2);
f2.show();	
Fraction f4(2,12);
f4.show();	
f4=f1+f3;
f4.show();
Fraction f5(1,7);
f5.show();
f5=f3-f5;
f5.show();
Fraction f6(1,5);
f6.show();
f6=f6*f1;
f6.show();	
Fraction f7(1,9);
f7.show();
f7=f7/f1;
f7.show();
double f=f3;
cout<<f<<endl;

}



