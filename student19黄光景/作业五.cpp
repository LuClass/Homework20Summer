#include<iostream> 
using namespace std;

class Fraction{
	int fz,fm;
	public:
		Fraction(int a,int b){
			if(b>0)
			fz=a,fm=b;
			else cout<<"分母不为正  ERROR!"	<<endl;	
		}
		void YF(Fraction f){
			if(fm>0&&fz!=0)
			{int a1;
				if(fz>0) a1=fz;else a1=-fz;
				if(a1<fm) 
				for(int i=1;i<=a1;i++)
					if(fz%i==0&&fm%i==0) 
					fz=fz/i,fm=fm/i;
				else
				for(int i=1;i<=fm;i++)
					if(fz%i==0&&fm%i==0) 
					fz=fz/i,fm=fm/i;	
			}
		}
		Fraction operator+(const Fraction &f){
			fm=fm*f.fm;
			fz=fz*f.fm+f.fz*fm;
			YF(*this);
			return *this;
		}
		Fraction operator-(const Fraction &f){
			fm=fm*f.fm;
			fz=fz*f.fm-f.fz*fm;
			YF(*this);
			return *this;
		}
		Fraction operator*(const Fraction &f){
			fm=fm*f.fm;
			fz=fz*f.fz;
			YF(*this);
			return *this;
		}
		Fraction operator/(const Fraction &f){
			fm=fm*f.fz;
			fz=fz*f.fm;
			YF(*this);
			return *this;
		}
		
	/*	bool operator<(const Fraction &f)
		{
			if(fz*f.fm<fm*f.fz) return 1;
			return 0;
		}
		bool operator<=(const Fraction &f)
		{
			if(fz*f.fm<=fm*f.fz) return 1;
			return 0;
		}
		bool operator>(const Fraction &f)
		{
			if(fz*f.fm>fm*f.fz) return 1;
			return 0;
		}
		bool operator>=(const Fraction &f)
		{
			if(fz*f.fm>=fm*f.fz) return 1;
			return 0;
		}
		bool operator==(const Fraction &f)
		{
			if(fz*f.fm==fm*f.fz) return 1;
			return 0;
		}
		bool operator!=(const Fraction &f)
		{
			if(fz*f.fm!=fm*f.fz) return 1;
			return 0;
		}
		*/
		
		operator double(){
			return fz/fm;
		}
		
};
