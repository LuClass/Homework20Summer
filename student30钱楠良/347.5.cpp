using namespace std;
#include<iostream>
#include<math.h>
class fraction
{
	private:
		int fm,fz;
	public:
		fraction(int z=1,int m=1)
		{
			fm=m;
			fz=z;
			if(fm<=0&&fz!=-2&&fm!=-1)
			{
				cout<<"分母小于等于0，输入错误"<<endl;
			}
			int fzz=fabs(fz);
			if(fm>fzz)
			{
				for(int i=fzz;i>1;i--)
				{
					if(fm%i==0&&fz%i==0)
					{
						fm=fm/i;
						fz=fz/i;
					}
				}
			}
			if(fm<fzz)
			{
				for(int i=fm;i>=1;i--)
				{
					if(fm%i==0&&fz%i==0)
					{
						fm=fm/i;
						fz=fz/i;
					}
				}
			}
			if(fm==fz)
			{
				fm=fz=1;
		    }
		    if(fm==fz*(-1))
		    {
		    	fm=1;
		    	fz=-1;
			}
			if(fz==0)
			{
				fm=1;
				fz=0;
			}
			
		}
		
		fraction operator+(const fraction &t)const
		{
			int fz1=fz;
			int fm1=fm;
			int fz2=t.fz;
			int fm2=t.fm;
			int num;
			for(int i=fm1>=fm2?fm1:fm2;i<=fm1*fm2;i++)
			{
				if(i%fm1==0&&i%fm2==0)
				{
					num=i;
				}
			}
			
			int fzz,fmm;
			fmm=num;
			fzz=fz1*fm2+fz2*fm1;
			for(int i=fmm>=fzz?fzz:fmm;i>=1;i--)
				{
					if(fmm%i==0&&fzz%i==0)
					{
						fmm=fmm/i;
						fzz=fzz/i;
					}
				}
				
			
			return fraction(fzz,fmm);
		}//+
		
		fraction operator-(const fraction &t)const
		{
			int fz1=fz;
			int fm1=fm;
			int fz2=t.fz*(-1);
			int fm2=t.fm;
			int num;
			for(int i=fm1>=fm2?fm1:fm2;i<=fm1*fm2;i++)
			{
				if(i%fm1==0&&i%fm2==0)
				{
					num=i;
				}
			}
			
			int fzz,fmm;
			fmm=num;
			fzz=fz1*fm2+fz2*fm1;
			for(int i=fmm>=fzz?fzz:fmm;i>=1;i--)
				{
					if(fmm%i==0&&fzz%i==0)
					{
						fmm=fmm/i;
						fzz=fzz/i;
					}
				}
				
			
			return fraction(fzz,fmm);
		}//-
		
		fraction operator*(const fraction &t)const
		{
			int fz1=fz;
			int fm1=fm;
			int fz2=t.fz;
			int fm2=t.fm;
		int fzz,fmm;
		fmm=fm1*fm2;
		fzz=fz1*fz2;	
		for(int i=fmm>=fzz?fzz:fmm;i>=1;i--)
				{
					if(fmm%i==0&&fzz%i==0)
					{
						fmm=fmm/i;
						fzz=fzz/i;
					}
				}		
			
			return fraction(fzz,fmm);
		}//*
		
		
		fraction operator/(const fraction &t)const
		{
			int fz1=fz;
			int fm1=fm;
			int fzz,fmm;
			int fm2;
			int fz2;
			if(t.fz==0)
			{
				int fmm=-1;
				int fzz=-2;
				return fraction(fzz,fmm);
			}
			if(fz==0)
			{
				int fzz=0;
				int fmm=1;
				return fraction(fzz,fmm);
			}
			if(t.fz<0)
			{
				fz2=t.fm*(-1);
			    fm2=t.fz*(-1);
			}
			if(t.fz>0)
			{
				fz2=t.fm;
			    fm2=t.fz;
			}
		
		fmm=fm1*fm2;
		fzz=fz1*fz2;	
		for(int i=fmm>=fzz?fzz:fmm;i>=1;i--)
				{
					if(fmm%i==0&&fzz%i==0)
					{
						fmm=fmm/i;
						fzz=fzz/i;
					}
				}		
			
			return fraction(fzz,fmm);
		}// /
		
		operator double()
		{
			
			return (double)fz/fm;
		}
		
		
		
		void show()
		{
			if(fz==-2&&fm==-1)
			{
				cout<<"error"<<endl;
				return;
			}
			if(fz==0)
			cout<<"0"<<endl;
			if(fm==fz)
			cout<<"1"<<endl;
			if(fm==fz*(-1))
			cout<<"-1"<<endl;
			if(fz!=0&&fm!=fz&&fm!=fz*(-1))
			cout<<fz<<"/"<<fm<<endl;
		}
};



int main()
{
	fraction a(10,24);

	fraction b(0,24);
		
	fraction c(-10,24);

	fraction d(10,10);

	fraction e(-10,10);
	fraction aa;
	aa=a/e;
	aa.show();
	aa=a+b;
	aa.show();
	aa=a-b;
	aa.show();
	aa=a/b;
	aa.show();
	
	return 0;
	
}

