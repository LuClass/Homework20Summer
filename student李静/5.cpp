#include<iostream>
using namespace std;
class Fraction {
private:
	int numerator, denominator;
public:
	Fraction() = default;
	Fraction(int numerator, int denominator)
	{
		if (denominator == 0)
		{
			this->numerator = 0;
			this->denominator = 1;
			return;
		}
		if (denominator < 0)
		{
			numerator = -numerator;
			denominator = -denominator;
		}
		this->numerator = numerator;
		this->denominator = denominator;
		this->simplify();
	}
	Fraction &operator=(Fraction const &f)
	{
		this->numerator = f.numerator;
		this->denominator = f.denominator;
		return *this;
	}
	Fraction operator+(Fraction const &f)
	{
		Fraction ans = *this;
		ans.numerator *= f.denominator;
		ans.numerator += f.numerator * this->denominator;
		ans.denominator *= f.denominator;
		ans.simplify();
		return ans;
	}
	Fraction operator-(Fraction const &f)
	{
		Fraction ans = *this;
		ans.numerator *= f.denominator;
		ans.numerator -= f.numerator * this->denominator;
		ans.denominator *= f.denominator;
		ans.simplify();
		return ans;
	}
	Fraction operator*(Fraction const &f)
	{
		Fraction ans = *this;
		ans.numerator *= f.numerator;
		ans.denominator *= f.denominator;
		ans.simplify();
		return ans;
	}
	Fraction operator/(Fraction const &f)
	{
		if (f.numerator == 0)
			return *this;
		Fraction ans = *this;
		ans.numerator *= f.denominator;
		ans.denominator *= f.numerator;
		ans.simplify();
		return ans;
	}
	operator double()
	{
		return (this->numerator * 1.0) / (this->denominator * 1.0);
	}
	void simplify()
	{
		for (int i = 2; i <= this->denominator; i++)
		{
			while ((this->numerator % i == 0) && (this->denominator % i == 0))
			{
				this->numerator /= i;
				this->denominator /= i;
			}
		}
	}
	void show()
	{
		cout << this->numerator << '/' << this->denominator;
	}
};
int main()
{
	Fraction f;
	Fraction f1 = { 1,4 };
	Fraction f2 = { 1,3 };
	f = f1 + f2;
	f.show();
	cout << endl;
	f = f1 - f2;
	f.show();
	cout << endl;
	f = f1 * f2;
	f.show();
	cout << endl;
	f = f1 / f2;
	cout << endl;
	double d = double(f2);

	cout << d;

}