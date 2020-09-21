using namespace std;
#include <iostream>
class Fraction
{private:
	int x;
	int y;
 public:
 	Fraction() { x=1,y=1; }
	Fraction(int x, int y);
	void print();
	Fraction operator+(const Fraction& b);
	Fraction operator-(const Fraction& b);
	Fraction operator*(const Fraction& b);
	Fraction operator/(const Fraction& b);
	operator double();
};
Fraction::Fraction(int x,int y)
{
	int min=x<y?x:y;
	while(x%min!=0||y%min!=0)
	{
		min--;
	}
	x/=min;
	y/=min;
	this->x=x;
	this->y=y;
}

void Fraction::print()
{
	if(x==0)
	{
		cout<<0<<endl;
	}
	else if(x==y)
	{
		cout<<1<<endl;
	}
	else
	{
		cout<<x<<"/"<<y<<endl;
	}
}

Fraction Fraction::operator+(const Fraction & b)
{
    x=x*b.y+y*b.x;
    y=y*b.y;
    return Fraction(x,y);
}

Fraction Fraction::operator-(const Fraction & b)
{
	x=x*b.y-y*b.x;
	y=y*b.y;
	return Fraction(x,y);
}

Fraction Fraction::operator*(const Fraction & b)
{
	return Fraction(x*b.x,y*b.y);
}

Fraction Fraction::operator/(const Fraction & b)
{
	return Fraction(x*b.y,y*b.x);
}

Fraction::operator double()
{
	double res = 0.0;
	double fz=double(x);
	double fm=double(y);
	res=fz/fm;
	return res;
}
int main()
{
	double d;
	Fraction a(1,2),b(1,3),c;
	c=a+b,c.print();
	c=a-b,c.print();
	c=a*b,c.print();
	c=a/b,c.print();
	d=c;
	cout<<d<<endl;
	return 0;
}
