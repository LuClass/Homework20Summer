#include<iostream>
using namespace std;
class Fraction {
private:
	int denominator;
	int numerator;
public:
	Fraction(int n, int d) {
		int i;
		int x = n < d ? n : d;
		for (i = x; i >= 1; i--) {
			if (n % i == 0 && d % i == 0)break;
		}
		d = d / i;
		n = n / i;
		denominator = d;
		numerator = n;
	}
		Fraction operator+(const Fraction& b);
		Fraction operator-(const Fraction& b);
		Fraction operator*(const Fraction& b);
		Fraction operator/(const Fraction& b);
	Fraction(double n, double d) {
		denominator = d;
		numerator = n;
	}
	operator double() {
		double jg = 0;
		double d = double(denominator);
		double n = double(numerator);
		jg = n / d;
		return jg;
	}
};
Fraction Fraction::operator+(const Fraction& b)
{
	int gcd = denominator > b.denominator ? b.denominator : denominator;
	while (denominator % gcd != 0 || b.denominator % gcd != 0)
		gcd--;
	int lcm = denominator * b.denominator / gcd;
	int t1 = lcm / denominator, t2 = lcm / b.denominator;
	int z1 = numerator * t1, z2 = b.numerator * t2;
	int z3 = z1 + z2;
	return Fraction(z3, lcm);
}

Fraction Fraction::operator-(const Fraction& b)
{
	int gcd = denominator > b.denominator ? b.denominator : denominator;
	while (denominator % gcd != 0 || b.denominator % gcd != 0)
		gcd--;
	int lcm = denominator * b.denominator / gcd;
	int t1 = lcm / denominator, t2 = lcm / b.denominator;
	int z1 = numerator * t1, z2 = b.numerator * t2;
	int z3 = z1 - z2;
	return Fraction(z3, lcm);
}

Fraction Fraction::operator*(const Fraction& b)
{
	return Fraction(numerator * b.numerator, denominator * b.denominator);
}

Fraction Fraction::operator/(const Fraction& b)
{
	int n2 = b.denominator, d2 = b.numerator;
	return Fraction(numerator * n2, denominator * d2);
}

Fraction::operator double()
{
	double res = 0.0;
	double fz = double(numerator);
	double fm = double(denominator);
	res = fz / fm;
	return res;
}

int main() {
	int numerator1;
	int numerator2;
	int denominator1;
	int denominator2;
	cout << "请输入第一个分数的分子分母,分母不为负" << endl;
	cin >> numerator1 >> denominator1;
	if (denominator1 <= 0) {
		cout << "输入错误" << endl;
	}
	cout << "请输入第二个分数的分子分母，分母不为负" << endl;
	cin >> numerator2 >> denominator2;
	if (denominator2 <= 0) {
		cout << "输入错误" << endl;
	}
	double res = 0.0;
	Fraction frac1(numerator1, denominator1);
	Fraction frac2(numerator2, denominator2);
	string  fuhao;
	cout << "请选择运算符；-,+,/,*" << endl;
	cin >> fuhao;
	if (fuhao == "+") {
		res = frac1 + frac2;
		cout << res;
	}
	if (fuhao == "-") {
		res = frac1 - frac2;
		cout << res;
	}
	if (fuhao == "/") {
		res = frac1 / frac2;
		cout << res;
	}
	if (fuhao == "*") {
		res = frac1 * frac2;
		cout << res;
	}
}
