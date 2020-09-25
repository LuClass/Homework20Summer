#include<iostream>
using namespace std;
class Fraction{
public:
     int a,b;
    Fraction(){}
	Fraction(int x,int y):a(x),b(y){
		if(y<=0){cout<<"分母需大于0"; }
		else for(int i=x;i>=1;i--){
		if(x%i==0&&y%i==0) {
		x/=i;
		y/=i;
		}}}
		Fraction operator+(const Fraction &c )const{
		return Fraction(a*c.b+b*c.a,b*c.b);	}
		Fraction operator-(const Fraction &c )const{
		return Fraction(a*c.b-b*c.a,b*c.b);	}
		Fraction operator*(const Fraction &c )const{
		return Fraction(a*c.a,b*c.b);	}
		Fraction operator/(const Fraction &c )const{
		return Fraction(a*c.b,b*c.a);	}
		operator double(){
			double m,n;
			m=a;
			n=b;
			return (m/n);
		}
		void show()const{cout<<a<<"/"<<b<<endl;}};
		void simplify(Fraction &c){
		if(c.a>0){
		for(int i=c.a;i>=1;i--){
		if(c.a%i==0&&c.b%i==0) {
		c.a/=i;
		c.b/=i;
		}}}
		else {int d=-c.a;
		for(int i=d;i>=1;i--){
		if(d%i==0&&c.b%i==0) {
		d/=i;
		c.b/=i;
		}}c.a=-d;
		}} 
int main(){
	Fraction c1(4,8),c2(9,3),c3,c4,c5,c6;
	c3=c1+c2;simplify(c3);c3.show();
	c4=c1-c2;simplify(c4);c4.show();
	c5=c1*c2;simplify(c5);c5.show();
	c6=c1/c2;simplify(c6);c6.show();
	double x=c3;
	cout<<x<<endl;
	return 0;
	
	
}
