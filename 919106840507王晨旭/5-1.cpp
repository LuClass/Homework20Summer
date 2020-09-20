#include <iostream>
using namespace std;
class Fraction{
	private:
		int x, y;
	public:
	Fraction(int a=0, int b=1){
		if(b>0){
			if(a>0){
				for(int i=2;i<=a&&i<=b;i++){
				    if(a%i==0&&b%i==0){
				        a/=i;
				        b/=i;
				        i=1;	
			        }
			    }
			    x=a;
			    y=b;
			}
			else if(a<0){
				a*=-1;
				for(int i=2;i<=a&&i<=b;i++){
				    if(a%i==0&&b%i==0){
				        a/=i;
				        b/=i;
				        i=1;	
			        }
			    }
			    x=-1*a;
			    y=b;
			}						
		}
		if(b<=0){
		     x=0;
		     y=0;
		} 
							  
	}
	Fraction & operator+(Fraction &a){
		Fraction t;
		if(y==a.y){
			t.x=x+a.x;
			t.y=y;
		}		   
		else{
		   t.y=y*a.y;
		   t.x=x*a.y+a.x*y;
		}
		if(t.x>0){
			for(int i=2;i<=t.x&&i<=t.y;i++){
			    if(t.x%i==0&&t.y%i==0){
				    t.x/=i;
				    t.y/=i;
			    	i=1;	
			    }
	    	} 
		}
		else if(t.x<0){
			t.x*=-1;
			for(int i=2;i<=t.x&&i<=t.y;i++){
			    if(t.x%i==0&&t.y%i==0){
				    t.x/=i;
				    t.y/=i;
			    	i=1;	
			    }
	    	} 
	    	t.x*=-1;
		}
        return t;
	}
    Fraction & operator-(Fraction &a){
		Fraction t;
		if(y==a.y){
			t.x=x-a.x;
			t.y=y;
		}		   
		else{
		   t.y=y*a.y;
		   t.x=x*a.y-a.x*y;
		}
		if(t.x>0){
			for(int i=2;i<=t.x&&i<=t.y;i++){
			    if(t.x%i==0&&t.y%i==0){
				    t.x/=i;
				    t.y/=i;
			    	i=1;	
			    }
	    	} 
		}
		else if(t.x<0){
			t.x*=-1;
			for(int i=2;i<=t.x&&i<=t.y;i++){
			    if(t.x%i==0&&t.y%i==0){
				    t.x/=i;
				    t.y/=i;
			    	i=1;	
			    }
	    	} 
	    	t.x*=-1;
		} 
        return t;
	}
    Fraction & operator*(Fraction &a){
    	Fraction t;
    	t.x=x*a.x;
    	t.y=y*a.y;
    	if(t.x>0){
			for(int i=2;i<=t.x&&i<=t.y;i++){
			    if(t.x%i==0&&t.y%i==0){
				    t.x/=i;
				    t.y/=i;
			    	i=1;	
			    }
	    	} 
		}
		else if(t.x<0){
			t.x*=-1;
			for(int i=2;i<=t.x&&i<=t.y;i++){
			    if(t.x%i==0&&t.y%i==0){
				    t.x/=i;
				    t.y/=i;
			    	i=1;	
			    }
	    	} 
	    	t.x*=-1;
		}
    	return t;
	}
	Fraction &operator / (Fraction &a){
		Fraction t;
		t.x=x*a.y;
		t.y=y*a.x;
		if(t.x>0){
			for(int i=2;i<=t.x&&i<=t.y;i++){
			    if(t.x%i==0&&t.y%i==0){
				    t.x/=i;
				    t.y/=i;
			    	i=1;	
			    }
	    	} 
		}
		else if(t.x<0){
			t.x*=-1;
			for(int i=2;i<=t.x&&i<=t.y;i++){
			    if(t.x%i==0&&t.y%i==0){
				    t.x/=i;
				    t.y/=i;
			    	i=1;	
			    }
	    	} 
	    	t.x*=-1;
		} 
		return t;
	}
	operator double(){
		return x,y;
	}
	void show(){
		if(x==0&&y==0)
		cout<<"´íÎóµÄ·ÖÄ¸"<<endl;
		else if(x==0)
		cout<<"0"<<endl;
		else if(x==y)
		cout<<"1"<<endl;
		else
		cout<<x<<"/"<<y<<endl;
		
	}
};

int main(){
	Fraction f1(1,3),f2(5,6);
	Fraction f;
	f = f1+f2;f.show();
	f = f1-f2;f.show();
	f = f1*f2;f.show();
	f = f1/f2;f.show();
}
