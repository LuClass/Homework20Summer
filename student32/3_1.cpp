#include <bits/stdc++.h>
using namespace std;

class Fraction{
	private:
		int a,b;
	public:
		Fraction(){
			a=0, b=0;
		}
		Fraction(int x, int y)
		{
			if(y<=0)
			    this->a=0,this->b=-1;
			else if(x==0)
			    this->a=0,this->b=1;
			else
			{
				int count=0;
				if(x<0)
				{
				    x=-x;
				    count=1;
				}				
				for(int i=x<y?x:y; i>0; i--)
				{
					if(x%i==0 && y%i==0)
					{
						x=x/i,y=y/i;
						break;
					}    					    
				}
				if(count==1)
				    x=-x;    
				this->a=x,this->b=y;
			}
		}
		void show()
		{
			if(b==-1)
			    cout<<"invalid"<<endl;
			else if(a==0 && b==1)
			    cout<<0<<endl;
			else     
			    cout<<a<<"/"<<b<<endl;
		}
		Fraction operator + (Fraction &f)
		{
			if(b==-1||f.b==-1)
			    return Fraction(0,-1);   				
			else if(a==0 && b==1)
			    return Fraction(f.a,f.b);
			else if(f.a==0 && f.b==1) 
				return Fraction(a,b);
			else if(a==0 && b==1 && f.a==0 && f.b==1) 
			    return Fraction(0,1); 			    
			else
			{
				Fraction c;
				c.b=b*f.b;
				c.a=a*f.b+b*f.a;				
				return Fraction(c.a,c.b); 
			}			
		}
		Fraction operator - (Fraction &f)
		{
			if(b==-1||f.b==-1)
			    return Fraction(0,-1);   				
			else if(a==0 && b==1)
			    return Fraction(-f.a,-f.b);
			else if(f.a==0 && f.b==1) 
				return Fraction(a,b);
			else if(a==0 && b==1 && f.a==0 && f.b==1) 
			    return Fraction(0,1); 			    
			else
			{
				Fraction c;
				c.b=b*f.b;
				c.a=a*f.b-b*f.a;
				return Fraction(c.a,c.b); 
			}
		}
		Fraction operator * (Fraction &f)
		{
			if(b==-1||f.b==-1)
			    return Fraction(0,-1);   				
			else if((a==0 && b==1)||(f.a==0 && f.b==1)) 
			    return Fraction(0,1); 			    
			else
			{
				Fraction c;
				c.b=b*f.b;
				c.a=a*f.a;
				return Fraction(c.a,c.b); 
			}
		}
		Fraction operator / (Fraction &f)
		{
			if(b==-1||f.b==-1)
			    return Fraction(0,-1);   				
			else if(a==0 && b==1)
			    return Fraction(0,1);
			else if(f.a==0 && f.b==1) 
				return Fraction(0,-1);			    
			else
			{
				Fraction c;
				c.a=a*f.b;
				c.b=b*f.a;
				if(c.b<0)
				{
					c.b=-c.b;
					c.a=-c.a;
				}
				return Fraction(c.a,c.b); 
			}
		}
		operator double(){
				return ((double)a/b);			
		}
};

int main()
{
	Fraction f(1,-1),f1(-11,22),f2(0,2),f3(1,2),f4(4,0),f5,f6,f7(3,4),f8(-3,1),f9;
	f.show();
	f1.show();
	f2.show();
	f5=f2+f3;
	f5.show();
	f6=f1*f3;
	f6.show();
	f9=f7/f8;
	f9.show();
	cout<<double(f3)<<endl;
	return 0;
}
