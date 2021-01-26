#include <iostream>
#include <string.h>

using namespace std;

int add(int x, int y) {
	
	return x + y;
}
int sub(int x, int y) {
	if (x > y) {
		return x - y;
	}
	else
		return y - x;
}
int mul(int x, int y) {

	return x * y;
}
double div5(double x, double y) {
	double div = x / y;
	return div;
}

int main() {
	int a, b;
	char op;
	while (true) {
		cout << "\n두개의 정수 입력 >>";
		cin >> a >> b;
		cout << "연산자 입력(=입력시 종료) >>";
		cin >> op;
		if (op == '+') {
			cout << "두 정수의 합은 >>" << a << "+" << b << "=" << add(a, b);
		}
		else if (op == '-') {
			if (a < b) {
				cout << "두 정수의 뺄셈은 >>" << b << "-" << a << "=" << sub(a, b);
			}
			else
				cout << "두 정수의 뺄셈은 >>" << a << "-" << b << "=" << sub(a, b);

		}
		else if (op == '*') {
			cout << "두 정수의 곱은 >>" << a << "*" << b << "=" << mul(a, b);
		}
		else if (op == '/') {
			if (b == 0) {
				cout << "0으로 나눌 수 없습니다";
			}
			else
				cout << "두 정수의 나눗셈은 >>" << a << "/" << b << "=" << (double)div5(a, b);
		}
		else if (op == '=')
		{
			break;
		}
		else
			continue;
		
	}
}
