//P347.5.(1)(2)(4)

#include <iostream>
#include <math.h>
using namespace std;

class Fraction{
	int num,den;
public:
	Fraction(int a,int b);
	void print();
	Fraction operator+(const Fraction &c);
	Fraction operator-(const Fraction &c);
	Fraction operator*(const Fraction &c);
	Fraction operator/(const Fraction &c);
	operator double();
};
Fraction::Fraction(int a=0,int b=0){
		if(b>0){
			for(int i=2;i<=abs(a);i++){
				if(a%i==0&&b%i==0){
					a/=i;
					b/=i;
				}
			}
			num=a;
			den=b;
		}
	}
	void Fraction::print(){
		if(num==0) cout<<"0"<<endl;
		else if(num==den) cout<<"1"<<endl;
		else
		cout<<num<<"/"<<den<<endl;
	}
	Fraction Fraction::operator+(const Fraction &c){
		Fraction d;
		d.num=num*c.den+den*c.num;
		d.den=den*c.den; 
		return Fraction(d.num,d.den);
	}
	Fraction Fraction::operator-(const Fraction &c){
		Fraction d;
		d.num=num*c.den-den*c.num;
		d.den=den*c.den;
		return Fraction(d.num,d.den);
	}
	Fraction Fraction::operator*(const Fraction &c){
		Fraction d;
		d.num=num*c.num;
		d.den=den*c.den;
		return Fraction(d.num,d.den);
	}
	Fraction Fraction::operator/(const Fraction &c){
		Fraction d;
		d.num=num*c.den;
		d.den=den*c.num; 
		return Fraction(d.num,d.den);
	}
	Fraction::operator double(){
		double num1=double(num);
		double den1=double(den);
		double x=num1/den1;
		return x;
	}
int main(){
	Fraction a(6,18),b(5,7);
	a.print();
	b.print();
	Fraction n1,n2,n3,n4;
	n1=a+b;
	n1.print();
	n2=a-b;
	n2.print();
	n3=a*b;
	n3.print();
	n4=a/b;
	n4.print();
	double n5=a;
	cout<<n5<<endl;
	return 0;
} 
