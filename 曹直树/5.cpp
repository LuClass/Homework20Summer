#include <iostream>
using namespace std;
#include <math.h>
class Fraction{
	int a,b;
	public:
		
	Fraction(int x,int y){
		if(y>0)
		{
		int min=0;
		x<=y? min=abs(x):min=y;
		for(int i=min;i>0;i--){
			if(x%i==0&&y%i==0)
			{
				x/=i;
				y/=i;
				break;
			}
		}	
		a=x;
		b=y;
		} 
	}
	Fraction(){}
	~Fraction(){}
		
	
	//void simply(int x,int y){}
		
	
	
	Fraction operator+(const Fraction &c){
		return Fraction(a*(c.b)+(c.a)*b,b*(c.b));
	}	
	Fraction operator-(const Fraction &c){
		return Fraction(a*(c.b)-(c.a)*b,b*(c.b));
	}
	Fraction operator*(const Fraction &c){
	return Fraction(a*(c.a),b*(c.b));
	}
	Fraction operator/(const Fraction &c){
		if(c.a)
	return Fraction(a*(c.b),b*(c.a));
	}
	
	operator double(){
		return double(a)/b;
	}
	
	void show(){
		if (a==0)
		cout<<a<<endl;
		else
		cout<<a<<"/"<<b<<endl;
	}
}; 
int main(){
	Fraction c1(0,1),c2,c3(1,0),c4,c5(4,6),c6(5,4),c7,c8;
	c2=c5+c6;c2.show();
	c4=c5-c6;c4.show();
	c7=(c5)*(c6);c7.show();
	c8=(c5)/(c6);c8.show();
	c1.show();
	cout<<double(c5)<<endl;
	cout<<double(c6)<<endl;
	Fraction c9(-8,12);
	c9.show();
	return 0;
}
