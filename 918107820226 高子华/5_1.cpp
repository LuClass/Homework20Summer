#include <bits/stdc++.h>
#include <ctime>
#pragma warning(disable:4996)
using namespace std;

//p347 a,b,d
class Fraction {
	int numerator_, denominator_;
public:
	Fraction(int numerator, int denominator):numerator_(numerator),denominator_(denominator<=0?throw std::logic_error("can't less than zero"): denominator){
		int g = gcd(numerator, denominator);
		numerator_ /= g;
		denominator_ /= g;
	}

	Fraction operator+(Fraction& b) {
		int lc = lcm(this->denominator_,b.denominator_);
		Fraction tmp((lc / this->denominator_) * this->numerator_+ (lc / b.denominator_) * b.numerator_,lc);
		return tmp;
	}

	Fraction operator-(Fraction& b) {
		int lc = lcm(this->denominator_, b.denominator_);
		Fraction tmp((lc / this->denominator_) * this->numerator_ - (lc / b.denominator_) * b.numerator_, lc);
		return tmp;
	}

	Fraction operator*(Fraction& b) {
		Fraction tmp(this->numerator_ * b.numerator_, this->denominator_ * b.denominator_);
		return tmp;
	}

	Fraction operator/(Fraction& b) {
		Fraction tmp(this->numerator_ * b.denominator_, this->denominator_ * b.numerator_);
		return tmp;
	}

	operator double () {
		return (double)numerator_ / denominator_;
	}

	int gcd(int a,int b) {
		while (b != 0) {
			int tmp = a;
			a = b;
			b = tmp % b;
		}
		return a;
	}

	int lcm(int a, int b) {
		return (a * b) / gcd(a, b);
	}
};
int main() {
	Fraction a(1, 2);
	Fraction b(1, 3);
	//Fraction c(1, 0);		//throw std::logic_error("can't less than zero"

	Fraction d = a + b;
	Fraction e = a - b;
	Fraction f = a * b;
	Fraction g = a / b;

	cout << (double)d << " " << (double)e << " " << (double)f << " " << (double)g << endl;
	return 0;
}