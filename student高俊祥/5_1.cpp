#include <iostream>
using namespace std;
class Fraction {
private:
	int x, y;
public:
	Fraction(int x= 0, int y= 1) {
		if (y > 0) {
			if (x > 0) {
				for (int i = 2; i <= x && i <= y; i++) {
					if (x % i == 0 && y % i == 0) {
						x /= i;
						y /= i;
						i = 1;
					}
				}
				this->x = x;
				this->y = y;
			}
			else if (x < 0) {
				x *= -1;
				for (int i = 2; i <= x && i <= y; i++) {
					if (x % i == 0 && y % i == 0) {
						x /= i;
						x /= i;
						i = 1;
					}
				}
				x = -1 * x;
				y = y;
			}
		}
		if (y <= 0) {
			this->x = 0;
			this->y = 0;
		}

	}
	Fraction& operator + (Fraction& x) {
		Fraction t;
		if (this->y == x.y) {
			t.x = this->x + x.x;
			t.y = this->y;
		}
		else {
			t.y = this->y * x.y;
			t.x = this->x * x.y + x.x * this->y;
		}
		if (t.x > 0) {
			for (int i = 2; i <= t.x && i <= t.y; i++) {
				if (t.x % i == 0 && t.y % i == 0) {
					t.x /= i;
					t.y /= i;
					i = 1;
				}
			}
		}
		else if (t.x < 0) {
			t.x *= -1;
			for (int i = 2; i <= t.x && i <= t.y; i++) {
				if (t.x % i == 0 && t.y % i == 0) {
					t.x /= i;
					t.y /= i;
					i = 1;
				}
			}
			t.x *= -1;
		}
		return t;
	}
	Fraction& operator - (Fraction& x) {
		Fraction t;
		if (this->y == x.y) {
			t.x = x - x.x;
			t.y = this->y;
		}
		else {
			t.y = this->y * x.y;
			t.x = this->x * x.y - x.x * this->y;
		}
		if (t.x > 0) {
			for (int i = 2; i <= t.x && i <= t.y; i++) {
				if (t.x % i == 0 && t.y % i == 0) {
					t.x /= i;
					t.y /= i;
					i = 1;
				}
			}
		}
		else if (t.x < 0) {
			t.x *= -1;
			for (int i = 2; i <= t.x && i <= t.y; i++) {
				if (t.x % i == 0 && t.y % i == 0) {
					t.x /= i;
					t.y /= i;
					i = 1;
				}
			}
			t.x *= -1;
		}
		return t;
	}
	Fraction& operator * (Fraction& x) {
		Fraction t;
		t.x = this->x * x.x;
		t.y = this->y * x.y;
		if (t.x > 0) {
			for (int i = 2; i <= t.x && i <= t.y; i++) {
				if (t.x % i == 0 && t.y % i == 0) {
					t.x /= i;
					t.y /= i;
					i = 1;
				}
			}
		}
		else if (t.x < 0) {
			t.x *= -1;
			for (int i = 2; i <= t.x && i <= t.y; i++) {
				if (t.x % i == 0 && t.y % i == 0) {
					t.x /= i;
					t.y /= i;
					i = 1;
				}
			}
			t.x *= -1;
		}
		return t;
	}
	Fraction& operator / (Fraction& x) {
		Fraction t;
		t.x = this->x * x.y;
		t.y = this->y * x.x;
		if (t.x > 0) {
			for (int i = 2; i <= t.x && i <= t.y; i++) {
				if (t.x % i == 0 && t.y % i == 0) {
					t.x /= i;
					t.y /= i;
					i = 1;
				}
			}
		}
		else if (t.x < 0) {
			t.x *= -1;
			for (int i = 2; i <= t.x && i <= t.y; i++) {
				if (t.x % i == 0 && t.y % i == 0) {
					t.x /= i;
					t.y /= i;
					i = 1;
				}
			}
			t.x *= -1;
		}
		return t;
	}
	operator double() {
		return x, y;
	}
	void show() {
		if (x == 0 && y == 0)
			cout << "´íÎóµÄ·ÖÄ¸" << endl;
		else if (x == 0)
			cout << "0" << endl;
		else if (x == y)
			cout << "1" << endl;
		else
			cout << x << "/" << y << endl;

	}
};

int main() {
	Fraction  f1(4, 3), f2(9, 8);
	Fraction  f;
	f = f1 + f2; f.show();
	f = f1 - f2; f.show();
	f = f1 * f2; f.show();
	f = f1 / f2; f.show();
}