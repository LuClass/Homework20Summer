#include<iostream>
using namespace std;
class fraction{
	int numerator;
	int denominator;
	public:
	void setDe(int a){
		denominator=a;
	}

	void setNe(int a){
		numerator=a;
	}
	int gcd(int a, int b){
    for(;;){
        if(b==0)
            return a;
        int c=a%b;
        a=b;
        b=c;
    }
}
    int lcm(int a, int b){
    return a/gcd(a,b)*b;
}
    fraction(int a,int b){
    	int m=gcd(a,b);
    	a=a/m;
    	b=b/m;
    	numerator=a;
    	denominator=b;
	}
	fraction operator+(const fraction& c){
		int m=lcm(denominator,c.denominator);
		int a=m/denominator;
		int b=m/c.denominator;
		a=numerator*a;
		b=c.numerator*b;
		fraction t(a+b,m);
		return t;
	}
	fraction operator-(const fraction& c){
		int m=lcm(denominator,c.denominator);
		int a=m/denominator;
		int b=m/c.denominator;
		a=numerator*a;
		b=c.numerator*b;
		fraction t(a-b,m);
		return t;
	}
	fraction operator*(const fraction& c){
		int a=numerator*c.numerator;
		int b=denominator*c.denominator;
		fraction t(a,b);
		return t;
	}
	fraction operator/(const fraction& c){
		int a=numerator*c.denominator;
		int b=denominator*c.numerator;
		fraction t(a,b);
		return t;
	}
	operator double(){
		return double(numerator)/denominator; 
	}
	void print(){
		cout<<numerator<<"/"<<denominator<<endl;
	}
};



int main(){
	fraction a(1,2);
	fraction b(3,9);
    (a.operator+(b)).print();
    (a.operator-(b)).print();
    (a.operator*(b)).print();
    (a.operator/(b)).print();
    
    cout<<double(a.operator+(b))<<endl;
    cout<<double(a.operator-(b))<<endl;
    cout<<double(a.operator*(b))<<endl;
    cout<<double(a.operator/(b))<<endl;
	return 0;
}
