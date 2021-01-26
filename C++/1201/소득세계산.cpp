#include <iostream>
using namespace std;

int main() {
	int grade;
	double income;
	double tax;	
	cout.precision(10);
	cout << "******************************************" << endl;
	cout << "등급과 월 수익을 입력하세요 >>";
	cin >> grade >> income;
	cout << "월 수입액 : " << income << "\t등급 : " << grade << endl;
	cout << "-----------------------------------------" << endl;
	cout << "금액" << "\t" << "세율" << "\t" << "세금" << endl;

	if (income < 500000) {
		tax = income * 2 / 100;
		cout << income << "\t" << "2%\t" << tax << endl;
		cout << "총 세금 : " << "\t" << tax << endl;
		cout << "실 수령액 : " << "\t" << income - tax << endl;
	}
	else if (income < 1000000) {
		if (grade <= 2) {
			tax = income * 2 / 100;
			cout << income << "\t" << "2%\t" << tax << endl;
			cout << "-------------------------------------" << endl;
			cout << "총 세금 : " << "\t" << tax << endl;
			cout << "실 수령액 : " << "\t" << income - tax << endl;
		}
		else {
			tax = (income - 500000) * 5 / 100;
			cout << "500000" << "\t" << "2%\t" << "10000" << endl;
			cout << income - 500000 << "\t" << "5%\t" << tax << endl;
			cout << "-------------------------------------" << endl;
			cout << "총 세금 : " << "\t" << tax+10000 << endl;
			cout << "실 수령액 : " << "\t" << income - (tax+10000) << endl;
		}
	}
	else if (income < 2000000) {
		if (grade <= 2) {
			tax = (income - 1000000) * 5 / 100;
			cout << "1000000" << "\t" << "2%\t" << "20000" << endl;
			cout << income - 1000000 << "\t" << "5%\t" << tax << endl;
			cout << "-------------------------------------" << endl;
			cout << "총 세금 : " << "\t" << tax + 20000 << endl;
			cout << "실 수령액 : " << "\t" << income - (tax + 20000) << endl;
		}
		else {
			tax = (income - 1000000) * 7 / 100;
			cout << "500000" << "\t" << "2%\t" << "10000" << endl;
			cout << "500000" << "\t" << "5%\t" << "25000" << endl;
			cout << income - 1000000 << "\t" << "7%\t" << tax << endl;
			cout << "-------------------------------------" << endl;
			cout << "총 세금 : " << "\t" << tax + 35000 << endl;
			cout << "실 수령액 : " << "\t" << income - (tax + 35000) << endl;
		
		}
	}
	else {
		
		if (grade == 1) {
			tax = (income - 1000000) * 5 / 100;
			cout << "1000000" << "\t" << "2%\t" << "20000" << endl;
			cout << income - 1000000 << "\t" << "5%\t" << tax << endl;
			cout << "-------------------------------------" << endl;
			cout << "총 세금 : " << "\t" << tax + 20000 << endl;
			cout << "실 수령액 : " << "\t" << income - (tax + 20000) << endl;
		
		}
		else if (grade == 2) {
			tax = (income - 2000000) * 7 / 100;
			cout << "1000000" << "\t" << "2%\t" << "20000" << endl;
			cout << "1000000" << "\t" << "5%\t" << "50000" << endl;
			cout << income - 2000000 << "\t" << "7%\t" << tax << endl;
			cout << "-------------------------------------" << endl;
			cout << "총 세금 : " << "\t" << tax + 70000 << endl;
			cout << "실 수령액 : " << "\t" << income - (tax + 70000) << endl;
		
		}
		else {
			tax = (income - 2000000) * 10 / 100;
			cout << "500000" << "\t" << "2%\t" << "10000" << endl;
			cout << "500000" << "\t" << "5%\t" << "25000" << endl;
			cout << "1000000" << "\t" << "7%\t" << "70000" << endl;
			cout << income - 2000000 << "\t" << "10%\t" << tax << endl;
			cout << "-------------------------------------" << endl;
			cout << "총 세금 : " << "\t" << tax + 105000 << endl;
			cout << "실 수령액 : " << "\t" << income - (tax + 105000) << endl;
		}
	}
}
