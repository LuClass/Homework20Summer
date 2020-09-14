//p347 的第五题 1，2，4
#include <iostream> 
using namespace std;
class Fraction{
private:
	int up, down;
public:
	Fraction(int a=1, int b=1){
		int min;
		if (b <= 0){
			up = down = 1;
			cout << "分母小于或等于零，不符合规范，初始化数字为1";
		}
		else{min = a > b ? b : a;
		for (int i = 1; i <= min; i++)
			if (a%i == 0 && b%i == 0){
			a = a / i;
			b = b / i;
			min = a > b ? b : a;
			}
		up = a;
		down = b;
		}
		
	}
	int getup(){ return up; }
	int getdown(){ return down; }
	void tongfen();
	Fraction operator+(const Fraction &a){
		int upp, downn;
		upp = up*a.down+a.up*down;
		downn = down*a.down;
		return Fraction(upp, downn);
	}
	Fraction operator-(const Fraction &a){
		int upp, downn;
		upp = up*a.down - a.up*down;
		downn = down*a.down;
		return Fraction(upp, downn);
	}
	Fraction operator*(const Fraction &a){
		return Fraction(up * a.up, down * a.down);
	}
	Fraction operator/(const Fraction &a){
		return Fraction(up * a.down, down * a.up);
	}
	operator double(){
		double a = (up*1.0) / down;
		return a;
	}
	void show(){
		cout << up << "/" << down<<endl;
	}

};

int main()
{
	Fraction a(9, 12), b(14, 70), c;
	double d=1.0;
	cout << "Fraction a(9,12),a=";
	a.show();
	cout << "Fraction b(14,70),b=";
	b.show();
	cout << "c=";
	c.show();
	c = a + b;
	cout << "c=a+b,c=";
	c.show();
	c = a - b;
	cout << "c=a-b,c=";
	c.show();
	cout << "c=a*b,c=";
	c = a*b;
	c.show();
	c = a / b;
	cout << "c=a/b,c=";
	c.show();
	cout << "d=(double)a,d=";
	d = a;
	cout << d<<endl;
	return 0;
}
