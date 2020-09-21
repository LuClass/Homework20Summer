#include <iostream>
using namespace std;
class Fraction{
	int x,y;//x/y
public:
	Fraction(int a,int b){
		if(b<0){a=-a;b=-b;}
		int min;
		if(a<b){min=a;}
		if(a>=b){min=b;}
		if(min>0)
		for(int i=min;i>1;i--){
			if(a%i==0&&b%i==0){
			a=a/i;
			b=b/i;
			break;
		    }
		}
		if(min<0)
		{min=-min;
		for(int i=min;i>1;i--){
			if(a%i==0&&b%i==0){
			a=a/i;
			b=b/i;
			break;
		    }
		    a=-a;
		}
	}
		x=a;y=b;
	}
	void print(){
		if(this->y==0)
		cout<<"error";
		else{if(y==1)
		cout<<x;
		else{	if(x==0)
		cout<<"0";
		else
		cout<<this->x<<"/"<<this->y;
		}
		}
		}		
	Fraction operator +( Fraction &f){//  +重载 
		this->x=this->x*f.y+this->y*f.x;
		this->y=this->y*f.y;
		Fraction f0(this->x,this->y);
		return f0;
	}
	Fraction operator -( Fraction &f){//  -重载 
		this->x=this->x*f.y-this->y*f.x;
		this->y=this->y*f.y;
		Fraction f0(this->x,this->y);
		return f0;
	}
		Fraction operator *( Fraction &f){//  *重载 
		this->x=this->x*f.x;
		this->y=this->y*f.y;
		Fraction f0(this->x,this->y);
		return f0;
	}
	Fraction operator /( Fraction &f){//  /重载 
		this->x=this->x*f.y;
		this->y=this->y*f.x;
		Fraction f0(this->x,this->y);
		return f0;
	}
	operator double(){
		return (x*1.0/y*1.0);
	}
};
int main (){
	Fraction f1(2,5),f2(2,5),f3(1,5),f4(4,5),f5(2,5);
	f1.print();cout<<endl;
    f1=f1+f2;
    f1.print();cout<<endl;
    f2=f2-f3;
    f1.print();cout<<endl;
    f3=f3*f4;
    f1.print();cout<<endl;
    f4=f4/f5;
    f4.print();cout<<endl;
	cout<<double(f1);
}
