#include<iostream>
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
	Fraction operator+(Fraction& f);
	Fraction operator-( Fraction& f);
	Fraction operator*( Fraction& f);
	Fraction operator/( Fraction& f);
	operator double() {
		return (double)mole / deno;
	}
};
Fraction::Fraction(int m, int d) {
	int min = m < d ? m : d;//min是m和d中的最小值 
	for (int i = 1; i <= min; i++) {
		if ((m % i == 0 )&& (d % i == 0)) {
			this->setMole(m / i);
			this->setDeno(d / i);
		}
	}

}
Fraction Fraction::operator+(Fraction & f) {
	int addmole = this->getMole() * f.getDeno() + this->getDeno() * f.getMole();
	int adddeno = this->getDeno() * f.getDeno();
	setMole(addmole);
	setDeno(adddeno);
	return *this;
}
Fraction Fraction::operator-( Fraction& f) {
	int submole = this->getMole() * f.getDeno() - this->getDeno() * f.getMole();
	int subdeno = this->getDeno() * f.getDeno();
	setMole(submole);
	setDeno(subdeno);
	return *this;
}
Fraction Fraction::operator*( Fraction& f) {
	int mulmole = this->getMole() * f.getMole();
	int muldeno = this->getDeno() * f.getDeno();
	setMole(mulmole);
	setDeno(muldeno);
	return *this;
}
Fraction Fraction::operator/( Fraction& f) {
	int divmole = this->getMole() * f.getDeno();
	int divdeno = this->getDeno() * f.getMole();
	setMole(divmole);
	setDeno(divdeno);
	return *this;
}
int main() {
	Fraction f1(1, 2);
	 f1.show();
	Fraction f2(4, 6);
	f2.show();
	Fraction f3=f1 + f2;
		f3.show();
		f1.setMole(1);
		f1.setDeno(2);
	Fraction f4 = f1 - f2;
		f4.show();
		f1.setMole(1);
		f1.setDeno(2);
	Fraction f5 = f1 * f2;
	     f5.show();
		 f1.setMole(1);
		 f1.setDeno(2);
	Fraction f6 = f1 / f2;
		f6.show();
		f1.setMole(1);
		f1.setDeno(2);
		double d = (double)f1;
		cout << d << endl;
}
