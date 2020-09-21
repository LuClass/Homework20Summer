#include<iostream>
#include<math.h>
using namespace std;
class Fraction{
	int fenzi,fenmu;
public:
	Fraction(){};
	Fraction(int z,int m){
		if(m==0) cout<<"分母不能为0！";
		else{
			int min=abs(z);
			if(abs(z)>abs(m)) min=abs(m);
			for(int i=min;i>1;i--){
				if(z%i==0 && m%i==0){
					z/=i;
					m/=i;
					break;
				}
			}
			if(m<0){fenzi=-z;fenmu=-m;}
			else{fenzi=z;fenmu=m;}
		}
	};
	Fraction operator+(const Fraction &f){
		int m=fenmu*f.fenmu;
		int z=fenzi*f.fenmu + f.fenzi*fenmu;
		return Fraction(z,m);
	}
	Fraction operator-(const Fraction &f){
		int m=fenmu*f.fenmu;
		int z=fenzi*f.fenmu - f.fenzi*fenmu;
		return Fraction(z,m);
	}
	Fraction operator*(const Fraction &f){
		int m=fenmu*f.fenmu;
		int z=fenzi*f.fenzi;
		return Fraction(z,m);
	}
	Fraction operator/(const Fraction &f){
		int m=fenmu*f.fenzi;
		int z=fenzi*f.fenmu;
		return Fraction(z,m);
	}
	operator double(){
		return (double)fenzi/fenmu;
	}
	void print(){
		cout<<fenzi<<"/"<<fenmu<<endl;
	}
};

int main(){
	Fraction f1(6,-9),f2(12,10),f3;
	f1.print();
	f2.print();
	f3=f1+f2;
	f3.print();
	f3=f1-f2;
	f3.print();
	f3=f1*f2;
	f3.print();
	f3=f1/f2;
	f3.print();
	cout<<double(f1)<<" "<<double(f2);
	return 0;
}

