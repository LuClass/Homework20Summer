#include <iostream>
#include<iomanip>
using namespace std;
class Fraction{
private:
	int x,y;
public:
	Fraction(){
		x=0;
		y=0;
	}
	Fraction(int x,int y){
		if(y<0)
		   this->x=0,this->y=-1;
		else if(x==0)
		   this->x==0,this->y=0;
		else{
			int a=(x>-x?x:-x);
			for(int i=(a<y?a:y);i>1;i--)
			{
				if(a%i==0&&y%i==0){
				x/=i;
				y/=i;
				break;
			} 
			this->x=x;
			this->y=y; 
			 } 
			
		}
		
	}
	void show()
    {
     cout<<setw(4)<<x<<"/"<<setw(4)<<y<<endl;
	 }
	Fraction operator + (Fraction &f)
    {   Fraction m=*this,n=f;
        if(m.x==-1||n.y==-1)
       {
           cout<<"error"<<endl;
           return Fraction(0,-1);
       }
       if(m.x==0)
           return n;
       if(n.x==0)
	    return m;	
        int x=(m.y>n.y?m.y:n.y);
        for(int i=x;;i++)
       {
            if(i%m.y==0&&i%n.y==0)
           {
               m.x=i/m.y*m.x;
			   m.y=i;
			   n.x=i/n.y*n.x;
			   n.y=i;
               break;

			}
    }
       Fraction tmp(m.x+n.x,m.y);
       if(tmp.x==0)
            return Fraction(0,0);
        return tmp;
   }
   Fraction operator - (Fraction &f)
   {
        Fraction m=*this,n=f;
        n.x=-n.x;
        if(m.y==-1||n.y==-1)
       {
           cout<<"error"<<endl;
           return Fraction(0,-1);

		}
        if(m.x==0)
           return n;
        if(n.x==0)
           return m;	
        int x=(m.y>n.y?m.y:n.y);
        for(int i=x;;i++)
       {
            if(i%m.y==0&&i%n.y==0)
           {
               m.x=i/m.y*m.x;
			   m.y=i;
			   n.x=i/n.y*n.x;
			   n.y=i;
               break;
           }
       }
        Fraction tmp(m.x+n.x,m.y);
        if(tmp.x==0)
            return Fraction(0,0);
		return tmp;
    }
    Fraction operator * (Fraction &f)
   {
        Fraction m=*this,n=f;
        if(m.y==-1||n.y==-1)
       {
            cout<<"error"<<endl;
            return Fraction(0,-1);
       }
        if(m.x==0||n.x==0)
             return Fraction(0,0);
        return Fraction(m.x*n.x,m.y*n.y);

	}
	Fraction operator / (Fraction &f)
    {   Fraction m=*this,n=f;		
        if(m.y==-1||n.y==-1||n.x==0)
       {    cout<<"error"<<endl;
	        return Fraction(0,-1);
       }
        if(n.x<0)
            n.x=-n.x,n.y=-n.y;

		if(m.x==0)
           return Fraction(0,0);
        return Fraction(m.x*n.y,m.y*n.x);

	}
	operator double ()
   {
        if(x==0&&y==-1)
       {
	       cout<<"error"<<endl;
		   return 0;
       }
       double d=(double)x/y;
       return d;
    }	

};
int main() {
	Fraction f1(3,4),f2(3,5);
    Fraction f3=f1+f2;
    f3.show();
    f3=f1-f2;
    f3.show();
    f3=f1*f2;
    f3.show();
    f3=f1/f2;
    f3.show();
    double d=f3;
    cout<<d<<endl;
    return 0;
	
}
