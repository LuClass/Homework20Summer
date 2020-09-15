#include<iostream>
#include<iomanip>
using namespace std;

class Fraction
{
private:
	int a,b;
public:
	Fraction(){a=0,b=0;}
	Fraction(int a,int b)
	{
		if(b<0)
			this->a=0,this->b=-1;
		else if(a==0)
			this->a=0,this->b=0;
		else
		{
			int a1=(a>-a?a:-a);
			for(int i=(a1<b?a1:b);i>1;i--)
			{
				if(a1%i==0&&b%i==0)
				{
					a/=i,b/=i;
					break;
				}
			}
			this->a=a,this->b=b;
		}		
	}
	~Fraction(){}
	void show()
	{
		cout<<setw(4)<<a<<"/"<<setw(4)<<b<<endl;
	}
	Fraction operator + (Fraction &f)
	{
		Fraction m=*this,n=f;
		if(m.b==-1||n.b==-1)
		{
			cout<<"error"<<endl;
			return Fraction(0,-1);
		}
		if(m.a==0)
			return n;
		if(n.a==0)
			return m;	
		int x=(m.b>n.b?m.b:n.b);
		for(int i=x;;i++)
		{
			if(i%m.b==0&&i%n.b==0)
			{
				m.a=i/m.b*m.a,m.b=i,n.a=i/n.b*n.a,n.b=i;
				break;
			}
		}
		Fraction tmp(m.a+n.a,m.b);
		if(tmp.a==0)
			return Fraction(0,0);
		return tmp;
	}
	Fraction operator - (Fraction &f)
	{
		Fraction m=*this,n=f;
		n.a=-n.a;
		if(m.b==-1||n.b==-1)
		{
			cout<<"error"<<endl;
			return Fraction(0,-1);
		}
		if(m.a==0)
			return n;
		if(n.a==0)
			return m;	
		int x=(m.b>n.b?m.b:n.b);
		for(int i=x;;i++)
		{
			if(i%m.b==0&&i%n.b==0)
			{
				m.a=i/m.b*m.a,m.b=i,n.a=i/n.b*n.a,n.b=i;
				break;
			}
		}
		Fraction tmp(m.a+n.a,m.b);
		if(tmp.a==0)
			return Fraction(0,0);
		return tmp;
	}
	Fraction operator * (Fraction &f)
	{
		Fraction m=*this,n=f;
		if(m.b==-1||n.b==-1)
		{
			cout<<"error"<<endl;
			return Fraction(0,-1);
		}
		if(m.a==0||n.a==0)
			return Fraction(0,0);
		return Fraction(m.a*n.a,m.b*n.b);
	}
	Fraction operator / (Fraction &f)
	{
		Fraction m=*this,n=f;		
		if(m.b==-1||n.b==-1||n.a==0)
		{
			cout<<"error"<<endl;
			return Fraction(0,-1);
		}
		if(n.a<0)
			n.a=-n.a,n.b=-n.b;
		if(m.a==0)
			return Fraction(0,0);
		return Fraction(m.a*n.b,m.b*n.a);
	}
	operator double ()
	{
		if(a==0&&b==-1)
		{
			cout<<"error"<<endl;
			return 0;
		}
		double d=(double)a/b;
		return d;
	}	
};

int main(void)
{
	Fraction f1(3,4),f2(-3,1),f3(1,-1),f4(0,2),f5(3,6),f6(-3,6);
	Fraction f7=f1+f2;
	f7.show();
	f7=f1-f2;
	f7.show();
	f7=f1*f2;
	f7.show();
	f7=f1/f2;
	f7.show();
	double d=f7;
	cout<<d<<endl;
	return 0;
}
