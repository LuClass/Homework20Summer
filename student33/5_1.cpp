using namespace std;
#include<iostream>
class Fraction{
	private:
		int numera,denom;
	public:
		Fraction()
		{
		    numera=0;
			denom=1;
		}
		Fraction(int n,int d)
		{
			int min,k=0,i;
			n>0?k=n:k-=n;
			k>d?min=d:min=k;
		    for(i=min;i>0;i--)
		    {
		    	if(d%i==0&&n%i==0)
		    	{ 
		    		numera=n/i;
		    		denom=d/i;
		    		break;
				}
			}
		}
	  Fraction &simplize(Fraction &x)
		{
			int min,k=0,i;
			x.numera>0?k=x.numera:k-=x.numera;
			k>x.denom?min=x.denom:min=k;
		    for(i=min;i>0;i--)
		    {
		    	if(x.denom%i==0&&x.numera%i==0)
		    	{
		    		x.numera=x.numera/i;
		    		x.denom=x.denom/i;
		    		break;
				}
		    }
		  return x;
		}
	   
	 Fraction &operator+(Fraction &x)
	 {  int max;
	    Fraction n;
	    if(x.denom!=denom)
	    {   
	    	x.denom>denom?max=x.denom:max=denom;    //通分 
	    	while(1)
	    	{
	    	   if(max%x.denom==0&&max%denom==0)
			   {
			   	break;
			   	
				   }
				else
				{
					max++;
					}	
			}
		}
		else max=denom;
	 	n.numera = max/denom*numera+max/x.denom*x.numera;
	 	n.denom=max;
	 	return simplize(n);
	 }
	 Fraction &operator-(Fraction &x)
	 {   int max;
	    Fraction n;
	    if(x.denom!=denom)
	    {
	    	x.denom>denom?max=x.denom:max=denom;   //通分 
	    	while(1)
	    	{
	    	   if(max%x.denom==0&&max%denom==0)
			   {
			   	break;
				   }
				else
				{
					max++;
					}	
			}
		}
		else max=denom;
	 	n.numera=max/denom*numera-max/x.denom*x.numera;
	 	n.denom=max;
	 	return simplize(n);
	 }
	 Fraction &operator*(Fraction &x)
	 {  Fraction n;
	 	n.numera=numera*x.numera;
	  	n.denom=denom*x.denom;
	 	return simplize(n);
	 }
	 Fraction &operator/(Fraction &x)
	 {
	 	Fraction n;
		n.numera=numera*x.denom;
	 	n.denom=denom*x.numera;
	 	if(n.denom<0)       //做除法后分母小于零的情况 
	 	{
	 		n.denom*=-1;
	 		n.numera*=-1;
		 }
	 	return simplize(n);
	 }
	 operator double()
	 {
	 	double n;
	 	n=numera/denom;
	 	return n;
	 }
	 void show()
	 {   if(denom!=1)
	 	cout<<numera<<"/"<<denom<<endl;
	 	else
	 	cout<<numera<<endl;
	 }
		
};

int main()
{
	Fraction n(-3,2),m(4,8),k;
	k=n+m;
	cout<<"n+m="; 
	k.show();
	k=n-m;
	cout<<"n-m="; 
	k.show();
	k=n*m;
	cout<<"n*m="; 
	k.show();
	k=n/m;
	cout<<"n/m="; 
	k.show();
	return 0;
	
}
