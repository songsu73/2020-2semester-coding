#include <iostream>
using namespace std;
bool Root(double a, double b, double c, double& x1, double& x2) {
	double D = b * b - 4 * a * c;		// 판별식(D=b*b-4*a*c)
	if (D < 0) {
		return false;		// 허근(0, false rtn)
	}
	if (D == 0) {
		x1 = x2 = (-b + sqrt(b * b - 4 * a * c)) / 2*a;
		return true;
	}// 중근 
	x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;// 두 실근
	x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;// 두 실근

	return true;
}

int main() {
	double a, b, c, x1, x2;


	cout << "2차방정식의 근을 구하는 프로그램입니다" << endl;
	cout << "ex) ax^2 + bx + c ... 의 a,b,c의 값을 입력하세요" << endl;
	cout << "a를 입력하세요 : ";
	cin >> a;
	cout << "b를 입력하세요 : ";
	cin >> b;
	cout << "c를 입력하세요 : ";
	cin >> c;
	if (Root(a, b, c, x1, x2))	// 실근을 가지면 출력
		cout << "입력한 a,b,c에 대해서 실근을 가지고 있으며 실근은 다음과 같습니다" << endl;
		cout << x1 << '\t' << x2 << endl;
		cout << "--만약 두 근이 같다면 중근입니다";

}
