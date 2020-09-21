using namespace std;

#include <iostream>

class Fraction{
	private:
	    int a;
     	int b;
	public:
		Fraction(){}		
		Fraction(int a,int b)
		{
			this->a=a;
			this->b=b;
			if(b<0)
			{
				b=-b;a=-a;
			}
			if(a>0)
			for(int i=(a<b?a:b);i>1;i--)
			{
				if(a%i==0&&b%i==0)
				{
					a/=i;
					b/=i;
					break;
				}
			}
			else 
			for(int i=(a<b?a:b);i>1;i--)
			{
				if (-a%i==0&&b%i==0)
				{
					a/=i;
					b/=i;
					break;
				}
			}
			cout<<a<<'/'<<b<<endl;
		}
		Fraction operator + (Fraction &m)
		{
			Fraction t;			
			t.b=b*m.b;
			t.a=a*m.b+b *m.a;
			return t;			
		}
		Fraction operator - (Fraction &m)
		{
			Fraction t;			
			t.b=b *m.b;
			t.a=a *m.b-b *m.a;
			return t;			
		}
		Fraction operator * (Fraction &m)
		{
			Fraction t;			
			t.b=b *m.b;
			t.a=a *m.a;
			return t;			
		}
		Fraction operator / (Fraction &m)
		{
			Fraction t;			
			t.b=b *m.a;
			t.a=a *m.b;
			return t;			
		}
		operator double()
		{
			double d;
			d=(double)a/b;
			return d;
		}
		void print()
		{
			if (b<0)
			{
				b=-b;a=-a;
			}
			if(a>0)
			for(int i=(a<b?a:b);i>1;i--)
			{
				if (a%i==0&&b%i==0)
				{
					a/=i;
					b/=i;
					break;
				}
			}
			else
			for(int i=(a<b?a:b);i>1;i--)
			{
				if (-a%i==0&&b%i==0)
				{
					a/=i;
					b/=i;
					break;
				}
			}
			cout<<a<<'/'<<b<<endl;
		}
};
int main()
{
	Fraction m(4,6),n(6,8),t;
	t=m+n; 
	t.print();
	t=m-n;
	t.print();
	t=m*n;
	t.print();
	t=m/n;
	t.print();
	cout<<double(m)<<endl;
	return 0;
}
