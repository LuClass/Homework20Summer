//课本P347.5.（1）（2）（4）

#include<iostream>
#include<cstring>
using namespace std;

class Fraction
{
	int fenzi, fenmu;
public:
	Fraction() { fenzi = 1, fenmu = 1; }
	Fraction(int fenzi, int fenmu);
	void print();
	Fraction operator+(const Fraction& b);
	Fraction operator-(const Fraction& b);
	Fraction operator*(const Fraction& b);
	Fraction operator/(const Fraction& b);
	operator double();
};

Fraction::Fraction(int fenzi, int fenmu)
{
	int gcd = fenzi > fenmu ? fenmu : fenzi;
	while (fenzi % gcd != 0 || fenmu % gcd != 0)
		gcd--;
	fenzi /= gcd;
	fenmu /= gcd;
	this->fenzi = fenzi;
	this->fenmu = fenmu;
}

void Fraction::print()
{
	if (fenzi == 0)
		cout << 0 << endl;
	if (fenzi == fenmu)
		cout << 1 << endl;
	int maxs = fenzi > fenmu ? fenzi : fenmu;
	if (maxs > 0 && maxs <= 9)
	{
		cout << "        " << fenzi << endl;
		cout << "结果为：-" << endl;
		cout << "        " << fenmu << endl;
	}
	if (maxs >= 10 && maxs <= 99)
	{
		cout << "        " << fenzi << endl;
		cout << "结果为：--" << endl;
		cout << "        " << fenmu << endl;
	}
	if (maxs >= 100 && maxs <= 999)
	{
		cout << "        " << fenzi << endl;
		cout << "结果为：---" << endl;
		cout << "        " << fenmu << endl;
	}
	if (maxs >= 1000 && maxs <= 9999)
	{
		cout << "        " << fenzi << endl;
		cout << "结果为：----" << endl;
		cout << "        " << fenmu << endl;
	}
	if (maxs >= 10000 && maxs <= 99999)
	{
		cout << "        " << fenzi << endl;
		cout << "结果为：-----" << endl;
		cout << "        " << fenmu << endl;
	}
	if (maxs >= 100000 && maxs <= 999999)
	{
		cout << "        " << fenzi << endl;
		cout << "结果为：------" << endl;
		cout << "        " << fenmu << endl;
	}
}

Fraction Fraction::operator+(const Fraction& b)
{
	int gcd = fenmu > b.fenmu ? b.fenmu : fenmu;
	while (fenmu % gcd != 0 || b.fenmu % gcd != 0)
		gcd--;
	int lcm = fenmu * b.fenmu / gcd;
	int t1 = lcm / fenmu, t2 = lcm / b.fenmu;
	int z1 = fenzi * t1, z2 = b.fenzi * t2;
	int z3 = z1 + z2;
	return Fraction(z3, lcm);
}

Fraction Fraction::operator-(const Fraction& b)
{
	int gcd = fenmu > b.fenmu ? b.fenmu : fenmu;
	while (fenmu % gcd != 0 || b.fenmu % gcd != 0)
		gcd--;
	int lcm = fenmu * b.fenmu / gcd;
	int t1 = lcm / fenmu, t2 = lcm / b.fenmu;
	int z1 = fenzi * t1, z2 = b.fenzi * t2;
	int z3 = z1 - z2;
	return Fraction(z3, lcm);
}

Fraction Fraction::operator*(const Fraction& b)
{
	return Fraction(fenzi * b.fenzi, fenmu * b.fenmu);
}

Fraction Fraction::operator/(const Fraction& b)
{
	int fenzi2 = b.fenmu, fenmu2 = b.fenzi;
	return Fraction(fenzi * fenzi2, fenmu * fenmu2);
}

Fraction::operator double()
{
	double res = 0.0;
	double fz = double(fenzi);
	double fm = double(fenmu);
	res = fz / fm;
	return res;
}

int main()
{
	int fenmu1, fenzi1,fenmu2, fenzi2;
	while (cout << "请输入第一个分数的分子和分母，输入0以退出" << endl, cin >> fenzi1 && fenzi1 != 0)
	{
		cin >> fenmu1, cout << "请输入第二个分数的分子和分母" << endl, cin >> fenzi2 >> fenmu2;
		if (fenmu1 <= 0 || fenmu2 <= 0)
		{
			cout << "要求分母大于0" << endl;
			continue;
		}
		double res = 0.0;
		Fraction frac1(fenzi1, fenmu1);
		Fraction frac2(fenzi2, fenmu2);
		Fraction res_frac;
		string mode;
		while (cout << "从 + - * / 中选择一种计算方式，输入back以退回上一界面" << endl, cin >> mode && mode != "back")
		{
			if (mode == "+")
			{
				res_frac = frac1 + frac2;
				int choice;
				cout << "以分数形式查看结果请按1，以小数形式查看结果请按2" << endl;
				cin >> choice;
				if (choice==1)
					res_frac.print();
				else if (choice == 2)
				{
					res = res_frac;
					cout << "结果为：" << res << endl;
				}
				else
					cout << "Error" << endl;
			}
			if (mode == "-")
			{
				res_frac = frac1 - frac2;
				int choice;
				cout << "以分数形式查看结果请按1，以小数形式查看结果请按2" << endl;
				cin >> choice;
				if (choice == 1)
					res_frac.print();
				else if (choice == 2)
				{
					res = res_frac;
					cout << "结果为：" << res << endl;
				}
				else
					cout << "Error" << endl;
			}
			if (mode == "*")
			{
				res_frac = frac1 * frac2;
				int choice;
				cout << "以分数形式查看结果请按1，以小数形式查看结果请按2" << endl;
				cin >> choice;
				if (choice == 1)
					res_frac.print();
				else if (choice == 2)
				{
					res = res_frac;
					cout << "结果为：" << res << endl;
				}
				else
					cout << "Error" << endl;
			}
			if (mode == "/")
			{
				res_frac = frac1 / frac2;
				int choice;
				cout << "以分数形式查看结果请按1，以小数形式查看结果请按2" << endl;
				cin >> choice;
				if (choice == 1)
					res_frac.print();
				else if (choice == 2)
				{
					res = res_frac;
					cout << "结果为：" << res << endl;
				}
				else
					cout << "Error" << endl;
			}
		}
	}
	return 0;
}