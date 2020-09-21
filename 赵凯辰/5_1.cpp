#include <iostream>
using namespace std;
#define max(a,b) a>b?a:b
#define min(a,b) a>b?b:a



int gcd(int a, int b)
{
    int da = max(a, b);
    int xiao = min(a, b);
    if (da % xiao == 0)
        return xiao;
    else
        return gcd(xiao, da % xiao);

}
int lcm(int a, int b) {
    int g = gcd(a, b);
    return a * b / g;
}
class Fraction {
private:
    int numerator;
    int denominator;
public:

    Fraction(int num, int deno) {
        if (deno > 0) {
            int yin = gcd(num, deno);
            if (yin == 1) {
                numerator = num;
                denominator = deno;
            }
            else {
                numerator = num / yin;
                denominator = deno / yin;
            }
        }
        else {
            cout << "ERROR!" << endl;
            return;
        }
    }

    //加减乘除重载定义
    Fraction operator+(Fraction add) {
        int b = lcm(this->denominator, add.denominator);//最小公倍数
        int num1 = this->numerator * b / this->denominator;
        int num2= add.numerator * b / add.denominator;
        int numerator = num1 + num2;
        Fraction ans(numerator,b);
        return ans; 
    }
    Fraction operator-(Fraction sub) {
        int b = lcm(this->denominator, sub.denominator);//最小公倍数
        int num1 = this->numerator * b / this->denominator;
        int num2 = sub.numerator * b / sub.denominator;
        int numerator = num1 - num2;
        Fraction ans(numerator, b);
        return ans;
    }
    Fraction operator*(Fraction mult) {

        Fraction ans(this->numerator*mult.numerator, this->denominator*mult.denominator);
        return ans;
    }
    Fraction operator/(Fraction div) {
        int temp = div.numerator;
        div.numerator = div.denominator;
        div.denominator = temp;
        Fraction ans(this->numerator * div.numerator, this->denominator * div.denominator);
        return ans;
    }
    //转换到double重载定义
    operator double(){
        return (double)numerator / (double)denominator;
    }
  };

int main() {
    Fraction f1(3,6), f2(7,8), f3(17,4), f4(1,5);
    Fraction f5 = f1 + f2;
    Fraction f6 = f3 - f2;
    Fraction f7 = f4 * f1;
    Fraction f8 = f3 / f2;

    cout << (double)f5 << endl;
    cout << (double)f6 << endl;
    cout << (double)f7 << endl;
    cout << (double)f8 << endl;
}
