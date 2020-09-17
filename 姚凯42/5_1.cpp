#include<iostream>
#include<math.h>
using namespace std; 
class Fraction{
	int fenzi;
	int fenmu;
	public:
		Fraction(int a=0,int b=0)
		{
			if(b>0)
			{
				fenzi=a;
				fenmu=b;
				for(int i=2;i<=abs(a);i++)
				{
					if(a%i==0&&b%i==0)
					{
						fenzi=a/i;
						fenmu=b/i;
					}
				}
			}
		}
		void show()
		{
			cout<<fenzi<<"/"<<fenmu<<endl;
		}
		Fraction operator+(Fraction &c)
		{
			Fraction d;
			d.fenzi=fenzi*c.fenmu+c.fenzi*fenmu;
			d.fenmu=fenmu*c.fenmu;
			return Fraction(d.fenzi,d.fenmu);
		}
		Fraction operator-(Fraction &c)
		{
			Fraction d;
			d.fenzi=fenzi*c.fenmu-c.fenzi*fenmu;
			d.fenmu=fenmu*c.fenmu;
			return Fraction(d.fenzi,d.fenmu);
		}
		Fraction operator*(Fraction &c)
		{
			Fraction d;
			d.fenzi=fenzi*c.fenzi;
			d.fenmu=fenmu*c.fenmu;
			return Fraction(d.fenzi,d.fenmu);
		}
		Fraction operator/(Fraction &c)
		{
			Fraction d;
			d.fenzi=fenzi*c.fenmu;
			d.fenmu=fenmu*c.fenzi;
			return Fraction(d.fenzi,d.fenmu);
		}
		operator double()
		{
			return (fenzi*1.0/fenmu*1.0);
		}
};
int main ()
{
	Fraction a(3,6),b(5,9),c1,c2,c3,c4;
	double f=a;
	cout<<f<<endl;
    a.show();
	b.show();
	c1=a+b;
	c1.show();
	c2=a-b;
	c2.show();
	c3=a*b;
	c3.show();
	c4=a/b;
	c4.show();
	return 0;
}
