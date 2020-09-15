
#include <iostream>

using namespace std;

class Fraction {
	int numerator, denominator;  //定义整型变量分子（numerator）和分母（denominator）
	int i = 0;	//	i用来判定该分数是否为负


public:
	Fraction():numerator(0),denominator(1){}
	Fraction(int n, int d) {
		if (d) {
			numerator = n ;
			denominator = d ;

			
			if (n < 0) {
				n = -n; i++;
			}
			if (d < 0) {
				d = -d; i++;	//	将分子分母转化为正数，便于约分
			}
			if(i%2 == 0 && i!=0){
				numerator = n;
				denominator = d;	
			}
			else if (i == 1 || i == -1) {
				numerator = -n;
				denominator = d;
			}
			/*
				在分数为-1/-2此类时，将其正确显示为1/2
				原因是此时判断最大公因数的循环不满足条件，
				因而循环不执行，也就不会修正分子与分母的值
			*/


				

			int A = n < d ? d : n;	//取分子分母较大者为A
			for (int m = A; m > 1; m--) {	//从A到1逐减，寻找最大公约数
				if (n % m == 0 && d % m == 0) {
					if(i%2 == 0){
						numerator = n / m;
					}
					else {
						numerator = -( n / m );
					}
					denominator = d/m;	//将分子分母修正为约分后的值
					break;
				}
			}

		}
		else{ 
			cout << "ERORR：分母不能为0！已默认设定分数值为0" << endl; 
			numerator = 0;
			denominator = 1;
		}
			
	}


	void print() {
		if (numerator == 0) {
			denominator = 1;
			cout << 0 << endl;
		}
		else if (i % 2 == 0 && numerator == denominator) {
			cout << 1 << endl;
		}
		else if (i % 2 == 1 && numerator == -denominator) {
			cout << -1 << endl;
		}else {
			cout << numerator << '/' << denominator << endl;
		}
	}

	void SetNumerator(int x) {	//设置分子
		numerator = x;
	}

	void SetDenominator(int y) {	//设置分母
		denominator = y;
	}


	Fraction operator+(const Fraction& frac) {	//重载定义：加法
		int T=1,M=0,N=0;
		int temp;
		int numerator1;
		int numerator2;

		int min = this->denominator <= frac.denominator ? this->denominator : frac.denominator;
		int max = this->denominator <= frac.denominator ? frac.denominator: this->denominator;
		for (int m = 1; m < max + 1; m++) {
			temp = m * min;
			if (temp % min == 0 && temp % max == 0 && temp >= max) {
				T = temp;
				M = m;
				N = temp / max;
				break;	//求分母最小公倍数
			}
		}
		if (min == this->denominator) {
			numerator1 = this->numerator * M;
			numerator2 = frac.numerator * N;
		}
		else {
			numerator1 = this->numerator * N;
			numerator2 = frac.numerator * M;
		}

		return Fraction(numerator1+ numerator2,T);
	}

	Fraction operator-(const Fraction& frac) {	//重载定义：减法
		int T = 1, M = 0, N = 0;
		int temp;
		int numerator1;
		int numerator2;

		int min = this->denominator <= frac.denominator ? this->denominator : frac.denominator;
		int max = this->denominator <= frac.denominator ? frac.denominator : this->denominator;
		for (int m = 1; m < max + 1; m++) {
			temp = m * min;
			if (temp % min == 0 && temp % max == 0 && temp >= max) {
				T = temp;
				M = m;
				N = temp / max;
				break;	//求分母最小公倍数
			}
		}
		if (min == this->denominator) {
			numerator1 = this->numerator * M;
			numerator2 = frac.numerator * N;
		}
		else {
			numerator1 = this->numerator * N;
			numerator2 = frac.numerator * M;
		}

		return Fraction(numerator1 - numerator2, T);
	}
	
	Fraction operator*(const Fraction& frac) {	//重载定义：乘法

		int numerator1 = this->numerator * frac.numerator;
		int denominator1 = this->denominator * frac.denominator;

		return Fraction(numerator1 , denominator1);


	}
	
	Fraction operator/(const Fraction& frac) {	//重载定义：除法

		if (frac.numerator == 0) {
			cout << "ERROR：除数不能为0！已默认设定结果值为0" << endl;
			return Fraction();
		}
		else {
			int numerator1 = this->numerator * frac.denominator;
			int denominator1 = this->denominator * frac.numerator;

			return Fraction(numerator1, denominator1);

		}


	}

	operator double() {
		return (double)this->numerator / (double)this->denominator;
	}

};




int main()
{
	Fraction A(50,85),B(2,0),C(4,-6),D(-6,4),E ,F ,G ,H,I;
	A.print();
	B.print();
	C.print();
	D.print();

	E = C + D;
	E.print();	//加法测试

	F = C - D;
	F.print();	//减法测试

	G = C * D;
	G.print();	//乘法测试

	H = C / D;
	I = C / B;
	H.print();
	I.print();	//除法测试（包含除数为0的情况


	double a = A;	//	类型转换测试
	cout << a << endl;

}
