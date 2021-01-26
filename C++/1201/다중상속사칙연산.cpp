#include <iostream>
using namespace std;

class Adder {
protected:
	int add(int a, int b) { return a + b; }
};

class Subtractor {
protected:
	int minus(int a, int b) { return a - b; }
};
class Divider {
protected:
	double divide(double a, double b) {
		if (b != 0)
		{
			return a / b;
		}
		else {
			cout << "0으로 나눌 수 없음";
			return 0;
		}
	}

};
class Mul {
protected:
	int mul(int a, int b) { return a * b; }
};
// 다중 상속
class Calculator : public Adder, public Subtractor, public Divider, public Mul {
public:
	double calc(char op,double  a, double b);
};

double Calculator::calc(char op, double a, double b) {
	double res = 0;
	double fres = 0;
	switch (op) {
	case '+': res = add(a, b); break;
	case '-': res = minus(a, b); break;
	case '*': res = mul(a, b); break;
	case '/': fres = divide(a, b); return fres;
	}
	return res;
}
int main() {
	Calculator handCalculator;
	cout << "2 + 4 = "
		<< handCalculator.calc('+', 2, 4) << endl;
	cout << "100 - 8 = "
		<< handCalculator.calc('-', 100, 8) << endl;
	cout << "35 * 3 =" << handCalculator.calc('*', 35, 3) << endl;
	
	cout << "10 / 3 =" << handCalculator.calc('/', 10, 3) << endl;
}
