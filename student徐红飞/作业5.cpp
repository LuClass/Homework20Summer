#include<iostream>
#include<algorithm>
using namespace std;
class Fraction {
private:
	int mole;//分子
	int deno;//分母 
public:
	void setMole(int m) {
		mole = m;
	}
	void setDeno(int d) {
		deno = d;
	}
	int getMole() {
		return mole;
	}
	int getDeno() {
		return deno;
	}
	void show() {
		cout << mole << '/' << deno<<endl;
	}
	Fraction(int m, int d);
	Fraction operator+(const Fraction& f)const;
	Fraction operator-(const Fraction& f)const;
	Fraction operator*(const Fraction& f)const;
	Fraction operator/(const Fraction& f)const;
	operator double() {
		return (double)mole / deno;
	}
};
Fraction::Fraction(int m, int d) {
	    if(m*d>0){
		int min = m < d ? m : d;//min是m和d中的最小值 
		for (int i = 1; i <= min; i++) {
			if ((m % i == 0) && (d % i == 0)) {
				this->setMole(m / i);
				this->setDeno(d / i);
			}
		}
	 }
		else {
			m = abs(m);
			int min = m < d ? m : d;//min是m和d中的最小值 
			for (int i = 1; i <= min; i++) {
				if ((m % i == 0) && (d % i == 0)) {
					this->setMole(-m / i);
					this->setDeno(d / i);
				}
			}

			}
		}
	
Fraction Fraction::operator+(const Fraction & f)const {
	int addmole = mole * f.deno + deno * f.mole;
	int adddeno = deno * f.deno;
	
	return Fraction(addmole,adddeno);
}
Fraction Fraction::operator-(const Fraction& f)const {
	int submole = mole * f.deno - deno * f.mole;
	int subdeno = deno * f.deno;

	return Fraction(submole, subdeno);
}
Fraction Fraction::operator*(const Fraction& f)const {
	int mulmole = mole * f.mole;
	int muldeno = deno * f.deno;

	return Fraction(mulmole, muldeno);
}
Fraction Fraction::operator/(const Fraction& f) const {
	int divmole = mole * f.deno;
	int divdeno = deno * f.mole;

	return Fraction(divmole, divdeno);
}
int main() {
	Fraction f1(1,3);
	 f1.show();
	Fraction f2(4, 6);
	f2.show();
	Fraction f3= f1 + f2;
		f3.show();
		
	Fraction f4 = f1 - f2;
		f4.show();
		
	Fraction f5 = f1 * f2;
	     f5.show();
		
	Fraction f6 = f1 / f2;
		f6.show();
			
		double d = (double)f1;
		cout << d << endl;
}
