using namespace std;
#include <iostream>

class Fraction{
	int num,den;

public: 
    Fraction() = default;
	Fraction(int x,int y){
		if(y<0){
			x*=-1;
			y*=-1;
		}
		if(y==0){
			x=0;
			y=1;
		}
		this->num=x;
		this->den=y;
		this->simplify();

	}
	Fraction operator+(const Fraction &x){
		Fraction t;
		t.num=num*x.den+x.num*den;
		t.den=den*x.den;
		return Fraction(t.num,t.den);
	}
	Fraction operator-(const Fraction &x){
		Fraction t;
		t.num=num*x.den-x.num*den;
		t.den=den*x.den;
		return Fraction(t.num,t.den);
	}
	Fraction operator*(const Fraction &x){
		Fraction t;
		t.num=num*x.num;
		t.den=den*x.den;
		return Fraction(t.num,t.den);
	}
	Fraction operator/(const Fraction &x){
		Fraction t;
		t.num=num*x.den;
		t.den=den*x.num;
		return Fraction(t.num,t.den);
	}
	operator double()	
	{	
		return (this->num * 1.0) / (this->den * 1.0);	
	}
	void show(){
		cout<<num<<"/"<<den<<'\t';
	}
	void simplify()	
	{	
		for(int i = 2;i<= this->den;i++)	
		{	
			while((this->num% i == 0) && (this->den% i == 0))	
			{	
				this->num/= i;	
				this->den/= i;	
			}	
		}	
	}
};
int main(){
	Fraction a(3,6),b(5,7),c;
	cout<<"已知有分数："<<"a=";
	a.show();
	cout<<"b=";
	b.show();
	cout<<endl;
	cout<<"分数a+b=";
	c=a+b;
	c.show(); 
	cout<<endl<<"分数a-b=";
	c=a-b;
	c.show();
	cout<<endl<<"分数a*b=";
	c=a*b;
	c.show();
	cout<<endl<<"分数a/b=";
	c=a/b;
	c.show();
	cout<<endl<<"将a,b转化为小数有："<<"a="<<double(a)<<'\t'<<"b="<<double(b);
	return 0;
}
