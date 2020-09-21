#include<iostream>
using namespace std;
class Fraction{
	int fenzi,fenmu;

 public:
     Fraction(int a,int b)
	 {fenzi=a;
	 fenmu=b;
	 if(fenmu<0)
	   {fenzi=fenzi*(-1);
	    fenmu=fenmu*(-1);
	   }
	   if(fenzi>0)
	   { for(int i=fenzi<fenmu?fenzi:fenmu;i>1;i--)
	    {if(fenzi%i==0&&fenmu%i==0)
	     {fenzi/=i;
	     fenmu/=i;
		 }
		}
	   }
	   else 
	   {int m=fenzi*(-1);
	   for(int i=m<fenmu?m:fenmu;i>1;i--)
	    {if(fenzi%i==0&&fenmu%i==0)
	     {fenzi/=i;
	     fenmu/=i;
		 }
	   }
     }
	 }	
	 
	Fraction operator + ( Fraction &c){
         int a=fenmu,b=c.fenmu;
         int d=fenzi,e=c.fenzi ;
         if(a==b)
          {return Fraction(fenzi+c.fenzi ,fenmu);
		  }
         for(int i=a<b?b:a;i++;i>0)
          {if(i%a==0&&i%b==0)
           {d*=i/a;
           cout<<i<<endl;
           e*=i/b;
           a=i;
           b=i;
          
           break;
		   }
           
		  }
		  return Fraction(d+e ,a);
	
	}
		Fraction operator - ( Fraction &c){
         int a=fenmu,b=c.fenmu;
         int d=fenzi,e=c.fenzi ;
         if(a==b)
          {return Fraction(fenzi-c.fenzi ,fenmu);
		  }
         for(int i=a<b?b:a;i++;i>0)
          {if(i%a==0&&i%b==0)
           {d*=i/a;
           e*=i/b;
           a=i;
           b=i;
          
           break;
		   }
           
		  }
		  return Fraction(d-e ,a);
	
	}
	   
	   Fraction operator * ( Fraction &c){
         int a=fenmu,b=c.fenmu;
         int d=fenzi,e=c.fenzi ;
         
		  return Fraction(d*e ,a*b);
	
	}
	Fraction operator / ( Fraction &c){
         int a=fenmu,b=c.fenmu;
         int d=fenzi,e=c.fenzi ;
         
		  return Fraction(d*b ,a*e);
	
	}
	operator double()
	{return fenzi*1.0/fenmu*1.0;
	}
	
  void print()
    {
cout<<fenzi<<"/"<<fenmu<<" ";
	}
}; 
int main()
{Fraction a(1,8);
 Fraction b(-1,6);
 Fraction c =a/b;
 a.print();
 b.print();
 cout<<double(c)<<endl;
 c.print();
 return 0;
}
