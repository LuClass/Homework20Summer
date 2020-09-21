using namespace std;
#include <iostream>
#include <cstdlib>
class Fraction{
	private:
	    int a;
     	int b;
	public:
		Fraction(){	}		
		Fraction(int a,int b){
			this->a=a;
			this->b=b;
			int c=1; 
			if (a*b<0){
				c*=-1;
			}
			a=abs(a);
			b=abs(b); 
		for(int i=b;i>=1;i--){
			if(a%i==0&&b%i==0){
				a/=i;
				b/=i;
				break;
			}
		}
		a*=c;
		//	cout<<a<<' '<<b<<endl;
		}
		Fraction operator + (Fraction &m){
			Fraction t;			
			t.b=b *m.b;
			t.a=a *m.b+b *m.a;
			return t;			
		}
		Fraction operator - (Fraction &m){
			Fraction t;			
			t.b=b *m.b;
			t.a=a *m.b-b *m.a;
			return t;			
		}
		Fraction operator * (Fraction &m){
			Fraction t;			
			t.b=b *m.b;
			t.a=a *m.a;
			return t;			
		}
		Fraction operator / (Fraction &m){
			Fraction t;			
			t.b=b *m.a;
			t.a=a *m.b;
			return t;			
		}
		operator double(){
			a=a*1.0;
			b=b*1.0;
			return *this;
		}
		void print(){
			
			cout<<a<<' '<<b<<endl;
		}
};

