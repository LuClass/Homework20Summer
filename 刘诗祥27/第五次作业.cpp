using namespace std;
#include <iostream>
class Fraction{
	int x;
	int y;//分子和分母
public:
    Fraction(int a,int b)
	{
		x=a;
		y=b;
		if(y<0)
		{
			x=-x;
			y=-y;
		}//分母大于0
		int max;
		x>y?max=x:max=y;
		for(int i=2;i<=max;i++)
		{
			if(x%i&&y%i)
			{
				x/=i;
				y/=i;
			}
		 } //化简 
	 } //构造函数 
	 void show()
	 {
	 	 cout<<x<<"/"<<y<<endl;//测试
	 }
	 Fraction & operator + (const Fraction & c)
	 {
	 	x=x*c.y+y*c.x;
	 	y=y*c.y;
	 	int max;
		x>y?max=x:max=y;
		for(int i=2;i<=max;i++)
		{
			if(x%i==0&&y%i==0)
			{
				x/=i;
				y/=i;
			}
			} 
	 }//加法
	 Fraction & operator - (const Fraction & c){
	 	x=x*c.y-y*c.x;
	 	y=y*c.y;
	 	int max;
		x>y?max=x:max=y;
		for(int i=2;i<=max;i++)
		{
			if(x%i==0&&y%i==0)
			{
				x/=i;
				y/=i;
			}}
	  }//减法
	  Fraction & operator *(const Fraction &c)
	  {
	  	x=x*c.x;
	  	y=y*c.y;
	  	int max;
		x>y?max=x:max=y;
		for(int i=2;i<=max;i++)
		{
			if(x%i==0&&y%i==0)
			{
				x/=i;
				y/=i;
			}
		}
	   } //乘法
	   Fraction & operator /(const Fraction &c)
	   {
	   	x=x*c.y;
	   	y=y*c.x;
	   	int max;
		x>y?max=x:max=y;
		for(int i=2;i<=max;i++)
		{
			if(x%i&&y%i)
			{
				x/=i;
				y/=i;
			}
		} //除法
		operator double(){
			double t=(double)x/(double)y;
			return t;
		 } 
		 
		 
		 
		 } //类型转换 
};
 main(){
	Fraction a(1,2),b(1,3),c(1,1);
	c=a+b;c.show();
	c=a-b;c.show();
	c=a*b;c.show();
	c=a/b;c.show();
	return 0;
	
}


