#include<iostream>
using namespace std;

class Fraction
{
	int fenzi,fenmu;
public:
	Fraction(int zi = 0, int mu = 1)
	{
		if(mu<=0)
		{
			mu = 1;
			cout<<"分母只能大于0"<<endl;
		}
		int t = mu;
		int x = zi;
		int y = mu;
		while(x%y!=0)
		{
			t = x%y;
			x = y;
			y = t;
		}
		fenzi = zi/t;
		fenmu = mu/t;	
	}	
	
	Fraction operator + (const Fraction &c)const        //加
	{ 
		return Fraction(fenzi * c.fenmu + fenmu * c.fenzi, fenmu * c.fenmu);
	}
	
	Fraction operator - (const Fraction &c)const          //减 
	{
		return Fraction(fenzi * c.fenmu - fenmu * c.fenzi, fenmu * c.fenmu);
	}
	
	Fraction operator * (const Fraction &c)const         //乘 
	{
		return Fraction(fenzi * c.fenzi, fenmu * c.fenmu);
	}
	
	Fraction operator / (const Fraction &c)const    //除 
	{
		return Fraction(fenzi * c.fenmu, fenmu * c.fenzi);
	}
	
	operator double()
	{
		return double(fenzi)/fenmu;
	}
	
	void show()
	{
		cout<<fenzi<<"/"<<fenmu<<endl;
	}
};

int main()
{
	Fraction p1(1, 3);
	Fraction p2(1, 6);
	Fraction p3 = p1 + p2;
	Fraction p4 = p1 - p2;
	Fraction p5 = p1 * p2;
	Fraction p6 = p1 / p2;
	p3.show();
	cout<<p3<<endl;
	p4.show();
	cout<<p4<<endl;
	p5.show();
	cout<<p5<<endl;
	p6.show();
	cout<<p6<<endl;
} 
