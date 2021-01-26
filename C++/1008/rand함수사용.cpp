#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	srand((unsigned int)time(NULL));
	int num1 = rand() % 5 + 3;
	int num2 = rand() % 5 + 3;
	int array[7][7];
	int sum = 0;
	int rsum = 0;
	int Rsum = 0;
	double avr = 0;
	int csum = 0;
	for (int i = 0; i < num1; i++) {
		for (int j = 0; j < num2; j++) {
			array[i][j] = rand() % 5 + 1;
			cout << array[i][j] << "\t";
			rsum += array[i][j];
			sum += array[i][j];

		}
		double avr = static_cast<double>(rsum) / num2;
		Rsum = Rsum + rsum;
		cout << "합계 : " << rsum << "\t 평균 : " << avr;
		rsum = 0;
		cout << endl;

	}

	if (num2 >= 1) {
		for (int i = 0; i < num1; i++) {
			csum = csum + array[i][0];
		}
		cout << "1열 합계 : " << csum << "\t 3열 평균 : " << static_cast<double>(csum) / num2 << endl;
		csum = 0;
	}
	if (num2 >= 2) {
		for (int i = 0; i < num1; i++) {
			csum = csum + array[i][1];
		}
		cout << "2열 합계 : " << csum << "\t 3열 평균 : " << static_cast<double>(csum) / num2 << endl;
		csum = 0;
	}
	if (num2 >= 3) {
		for (int i = 0; i < num1; i++) {
			csum = csum + array[i][2];
		}
		cout << "3열 합계 : " << csum << "\t 3열 평균 : " << static_cast<double>(csum) / num2 << endl;
		csum = 0;
	}
	if (num2 >= 4) {
		for (int i = 0; i < num1; i++) {
			csum = csum + array[i][3];
		}
		cout << "4열 합계 : " << csum << "\t 4열 평균 : " << static_cast<double>(csum) / num2 << endl;
		csum = 0;
	}
	if (num2 >= 5) {
		for (int i = 0; i < num1; i++) {
			csum = csum + array[i][4];
		}
		cout << "5열 합계 : " << csum << "\t 5열 평균 : " << static_cast<double>(csum) / num2 << endl;
		csum = 0;
	}
	if (num2 >= 6) {
		for (int i = 0; i < num1; i++) {
			csum = csum + array[i][5];
		}
		cout << "6열 합계 : " << csum << "\t 6열 평균 : " << static_cast<double>(csum) / num2 << endl;
		csum = 0;
	}
	if (num2 >= 7) {
		for (int i = 0; i < num1; i++) {
			csum = csum + array[i][6];
		}
		cout << "7열 합계 : " << csum << "\t 7열 평균 : " << static_cast<double>(csum) / num2 << endl;
		csum = 0;
	}

	cout << "전체합계 : " << sum << "\t전체평균 : " << static_cast<double>(sum) / num1 + num2;
}
