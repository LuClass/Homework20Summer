#include <iostream>
using namespace std;
class Fraction {
	int numerator,denominator;
public:
	Fraction(){}
	Fraction(int a,int b){
		this->numerator=a;
		this->denominator=b;
	 	for(int i=2;i<=this->numerator;i++){
	 	while(this->numerator%i==0 && this->denominator%i==0){
	 		this->numerator=this->numerator/i;
	 		this->denominator=this->denominator/i;
			}
		}
	 	
	}
	
Fraction operator+(const Fraction &c){
	    Fraction t;
	    t= *this;
		t.numerator=t.numerator * c.denominator+c.numerator*t.denominator;
		t.denominator*=c.denominator ;
		t.simplify();
		
	}
	
Fraction operator-(const Fraction &c){
	    Fraction t;
	    t= *this;
		t.numerator=t.numerator * c.denominator-c.numerator*t.denominator;
		t.denominator*=c.denominator ;
		t.simplify();
	}

Fraction operator*(const Fraction &c){
	    Fraction t;
	    t= *this;
		t.numerator=t.numerator * c.numerator;
		t.denominator*=c.denominator ;
		t.simplify();
	}

Fraction operator/(const Fraction &c){
	Fraction t;
    t= *this;
	if(c.numerator>=0){
		t.numerator=t.numerator * c.denominator;
		t.denominator*=c.numerator ;
	}
	else{
		t.numerator=-t.numerator * c.denominator;
		t.denominator*=-c.numerator ;
	}
		t.simplify();
	}
	
void simplify(){
	for(int i=2;i<=numerator;i++){
	 	while(numerator%i==0 && denominator%i==0){
	 		numerator=numerator/i;
	 		denominator=denominator/i;
	 		
			}
		}
		cout<<numerator<<"/"<<denominator<<endl;	 
	}
	
	operator double(){
		return numerator*1.0/denominator;
	} 
Fraction & operator=(const Fraction &d){
	numerator=d.numerator;
	denominator=d.denominator;
	return *this;
}
};
int main(){
	int n,d;
	Fraction a(1,3),b(1,2);
	a.operator+(b);
	a.operator-(b);
	a.operator*(b);
	a.operator/(b);
}
