#include<iostream>
using namespace std;
class Fraction{
	int son;
	int mom;
public:
	Fraction(){} 
	Fraction(int s,int m):son(s),mom(m){
		int i;
		for(i=s<m?s:m;i>=2;i--){
			if(s%i==0&&m%i==0)
			break;
		}
		son=son/i;
		mom=mom/i;
	}
	Fraction operator +(const Fraction &a){
		int m1,m2,i;
		for(i=mom<a.mom?a.mom:mom;;i++){
			if(i%mom==0&&i%a.mom==0){
				m1=i/mom;
				m2=i/a.mom;
				break;
			}
		}
		int s=son*m1+a.son*m2;
		return Fraction(s,i);
	}
	Fraction operator -(const Fraction &a){
		int m1,m2,i;
		for(i=mom<a.mom?a.mom:mom;;i++){
			if(i%mom==0&&i%a.mom==0){
				m1=i/mom;
				m2=i/a.mom;
				break;
			}
		}
		int s=son*m1-a.son*m2;
		return Fraction(s,i); 
	}
	Fraction operator *(const Fraction &a){
		return Fraction(son*a.son,mom*a.mom);
	} 
	Fraction operator /(const Fraction &a){
		return Fraction(son*a.mom,mom*a.son);
	}
	operator double(){
		double d=son*1.0/mom;
		return d;
	}
	void get(){
		if(mom!=1)
		cout<<son<<"/"<<mom<<endl;
		else
		cout<<son<<endl;
	}
}; 
int main(){
	Fraction a(3,4);
	Fraction b(3,5);
	Fraction c;
	c=a+b;
	c.get();
	c=b-a;
	c.get();
	c=b/a;
	c.get();
	c=a*b;
	c.get(); 
	double f=b;
	cout<<f;
}
