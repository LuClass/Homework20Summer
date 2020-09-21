#include<iostream> 
using namespace std;

class Fraction{
	int numerator;
	int denominator;
public:
	Fraction(int n=0,int d=0){
		if(d<=0&&n!=0)
		cout<<"·ÖÄ¸ÊäÈë´íÎó"<<endl;
		bool minus;
		if(n<0){
			minus=1;
			n=-n;
		}
		if(n>1&&d>1)
		for(;n%2==0&&d%2==0;n/=2,d/=2);
		int m=n<d?n:d;
		for(int i=3;i<=m;i+=2){
			for(;n%i==0&&d%i==0;n/=i,d/=i);
		}
		numerator=minus?-n:n;
		denominator=d;
	}
	void print(){
		if(numerator==0)
			cout<<"0";
		else
			if(denominator==1)
				cout<<numerator;
			else
				cout<<numerator<<"/"<<denominator;
	}
	Fraction operator+(Fraction &f){
		int n,d;
		d=denominator*f.denominator;
		n=numerator*f.denominator+f.numerator*denominator;
		Fraction o(n,d);
		return o;
	}
	Fraction operator-(Fraction &f){
		int n,d;
		d=denominator*f.denominator;
		n=numerator*f.denominator-f.numerator*denominator;
		Fraction o(n,d);
		return o;
	}
	Fraction operator*(Fraction &f){
		int n,d;
		d=denominator*f.denominator;
		n=numerator*f.numerator;
		Fraction o(n,d);
		return o;
	}
	Fraction operator/(Fraction &f){
		int n,d;
		d=denominator*f.numerator;
		n=numerator*f.denominator;
		if(d<0){
			d=-d;n=-n;
		}
		Fraction o(n,d);
		return o;
	}
	operator double(){
		return double(numerator)/denominator;
	}
};

int main(){
	Fraction f1(3,18);
	Fraction f2(-8,12);
	Fraction f3;
	f3=f1+f2;
	f1.print();cout<<" + ";f2.print();cout<<" = ";f3.print();cout<<endl;
	f3=f1-f2;
	f1.print();cout<<" - ";f2.print();cout<<" = ";f3.print();cout<<endl;
	f3=f1*f2;
	f1.print();cout<<" * ";f2.print();cout<<" = ";f3.print();cout<<endl;
	f3=f1/f2; 
	f1.print();cout<<" / ";f2.print();cout<<" = ";f3.print();cout<<endl;
	f1.print();cout<<" = "<<double(f1);
	return 0;
}
