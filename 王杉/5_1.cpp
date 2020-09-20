#include <iostream>
using namespace std;

int Gongyueshu(int a,int b)
	{	
		int max,min,Max,Min;
		max= a>b? a:b;
		if (a==max) {min=b;}
		else {min=a;}
		for(int i=min;i>=1;i--)
		{
			if((max%i==0)&&(min%i==0))
			
				{
				Max=i;break;}
				else continue;
			
		}
		;Min=a*b/Max;
		//cout<<"最大公约数 "<<Max<<"  "<<"最小公倍数 "<<Min<<endl;
		return Max;
	}
	
	
class Fraction
{
	int fenzi;
	int fenmu;
	bool checked;
	public:
		Fraction(){
		}
		Fraction(int x,int y)
		{
			if(y>0)
			{
				checked=1;
				this->fenzi=x; 
				this->fenmu=y;
			}
			else cout<<"error!"<<endl ;
		}
	int getFenzi(){
		return fenzi;
	}
	int getFenmu(){
		return fenmu;
	}
	void show()
	{
		if(checked)
		cout<<fenzi<<"\n-\n"<<fenmu<<endl;
		//else cout<<"input invalid!"<<endl;
	}
	void simple()
	{
		if(checked)
	{
		
		int max,min,Max,Min;
		max= fenzi>fenmu? fenzi:fenmu;
		if (fenzi==max) {min=fenmu;}
		else {min=fenzi;}
		for(int i=min;i>1;i--)
		{
			if((max%i==0)&&(min%i==0))
			
				{
				Max=i;break;}
				else continue;
			
		}
		;Min=fenzi*fenmu/Max;
		//cout<<"最大公约数 "<<Max<<"  "<<"最小公倍数 "<<Min<<endl;
		this->fenzi/=Max;
		this->fenmu/=Max;
	}
	}
	//operator +
	Fraction operator +(const Fraction &x) const
	{
		int Gys=Gongyueshu(this->fenmu,x.fenmu);
		int Gbs=(this->fenmu*x.fenmu)/Gys;
		int F11=this->fenzi*(Gbs/this->fenmu);
		int F22=x.fenzi*(Gbs/x.fenmu);
		return Fraction(F11+F22,Gbs);
		
	}
	//operator -
	Fraction operator -(const Fraction &x) const
	{
		int Gys=Gongyueshu(this->fenmu,x.fenmu);
		int Gbs=(this->fenmu*x.fenmu)/Gys;
		int F11=this->fenzi*(Gbs/this->fenmu);
		int F22=x.fenzi*(Gbs/x.fenmu);
		return Fraction(F11-F22,Gbs);
		
	}
	//operator *
	Fraction operator *(const Fraction &x) const
	{
		//int Gys=Gongyueshu(this->fenmu,x.fenmu);
		//int Gbs=(this->fenmu*x.fenmu)/Gys;
		int F11=this->fenzi*x.fenzi;
		int F22=this->fenmu*x.fenmu;
		int Gys=Gongyueshu(F11,F22);
		F11/=Gys;F22/=Gys;
		return Fraction(F11,F22);
	}
	//operator /
	Fraction operator /(const Fraction &x) const
	{
		//int Gys=Gongyueshu(this->fenmu,x.fenmu);
		//int Gbs=(this->fenmu*x.fenmu)/Gys;
		int F11=this->fenzi*x.fenmu;
		int F22=this->fenmu*x.fenzi;
		int Gys=Gongyueshu(F11,F22);
		F11/=Gys;F22/=Gys;
		return Fraction(F11,F22);
	}
	//operator double
	operator double()
	{
		return (fenzi*1.0)/(fenmu*1.0);
	}
	
};
int main()
{
	Fraction f1(6,8),f2(8,6);
	f1.show();f2.show();
	f1.simple();
	cout<<"f1 simple: \n";f1.show();
	f2.simple();
	cout<<"f2 simple: \n";f2.show();
	Fraction f3,f4,f5,f6,f7;
	f3=f1+f2;
	cout<<"f1+f2 : \n";f3.show();
	f4=f1-f2;
	cout<<"f1-f2 : \n";f4.show();
	f5=f1*f2;
	cout<<"f1*f2 : \n";f5.show();
	f6=f1/f2;
	cout<<"f1/f2 : \n";f6.show();
	cout<<"double f1: "<<double(f1)<<"    double f2:"<<double(f2)<<endl;
	//f7.show();
	
	
}
