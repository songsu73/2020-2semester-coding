#include <iostream>
using namespace std;

class Calculator {
	void input() {
		cout << "정수 2 개를 입력하세요>> ";
		cin >> a >> b;
	}
protected:
	double a, b;
	virtual double calc(double a, double b) = 0; 
	
public:
	void run() {
		input();
		cout << "계산된 값은 " << calc(a, b) << endl;
	}
};
class Adder : public Calculator{
public :

	virtual double calc(double a,double b);
	
};

double Adder::calc(double a,double b) {
	return a + b;
}

class Subtractor : public Calculator {
public :
	virtual double calc(double a,double b);

};

double Subtractor::calc(double a, double b) {
	return a - b;
}

class Multiple : public Calculator {
public :
	virtual double calc(double a, double b);
};
double Multiple::calc(double a, double b) {
	return a * b;
}

class Divider : public Calculator {
public :
	virtual double calc(double a, double b);
};
double Divider::calc(double a, double b) {
	return a / b;
}
int main() {
	Adder adder;
	Subtractor subtractor;
	Multiple multipler;
	Divider divider;
	adder.run();
	subtractor.run();
	multipler.run();
	divider.run();
}
