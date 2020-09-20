#include <iostream>
using namespace std;
int fun(int x,int y)   //x分母  y分子 
{    
	int r;
	if (x<0)
		x=-x;
	if (y<0)
		y=-y;
	if (y>x)
	{
		r=x;
		x=y;
		y=r;
	}
	while (y>0)
	{
		r=x%y;
		x=y;
		y=r;
	}
	return x;
}
class Fraction{
private:
	int zi;
	int mu;
public:
	Fraction(int x,int y){   //x是分子 y是分母 
		int a=fun(x,y);
		zi=x/a;
		mu=y/a;
		if (mu<0)
		{
			zi=-zi;
			mu=-mu;
		}
	}
	int getFenzi(){
		return zi;
	}
	int getFenmu(){
		return mu;
	}	
	Fraction operator +(const Fraction &a){
		int temp1,temp2;
		temp2=mu*a.mu;
		temp1=zi*a.mu+a.zi*mu;
		return Fraction (temp1,temp2);
	}
	Fraction operator -(const Fraction &a){
		int temp1,temp2;
		temp2=mu*a.mu;
		temp1=zi*a.mu-a.zi*mu;
		return Fraction (temp1,temp2);
	}
	Fraction operator *(const Fraction &a){
		int temp1,temp2;
		temp2=mu*a.mu;
		temp1=zi*a.zi;
		return Fraction (temp1,temp2);
	}
	Fraction operator /(const Fraction &a){
		int temp1,temp2;
		temp2=mu*a.zi;
		temp1=zi*a.mu;
		return Fraction (temp1,temp2);
	}
	operator double (){
		return ((zi*1.0)/(mu*1.0));
	}
	void print(){
		if (zi==0&&mu!=0)
			cout<<0<<endl;
		else if (mu==0)
			cout<<"error"<<endl;
		else if(zi%mu==0&&zi!=0&mu!=0)
			cout<<zi/mu<<endl;
		else
			cout<<zi<<"/"<<mu<<endl;
	}
};
int main()
{
	Fraction a1(4,6),a2(5,7);
	a1.print();
	a2.print();
	Fraction a3=a1.operator +(a2);
	a3.print();
	a3=a1.operator -(a2);
	a3.print();
	a3=a1.operator *(a2);
	a3.print();
	a3=a1.operator /(a2);
	a3.print();
	cout<<double(a3)<<endl;
}
