#include <iostream>
#include <string>
using namespace std;

int main() {
	int sum = 0;
	char order[100];
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원 입니다.\n";
	
	char coffee[100];
	int num = 0;
	while (sum <= 20000) {
		cout << "주문 >>";
		cin >> coffee >> num;
		if (strcmp(coffee, "에스프레소") == 0){
			sum += num * 2000;
			cout << num * 2000 << "원입니다";
		}
		if (strcmp(coffee, "아메리카노") == 0) {
			sum += num * 2300;
			cout << num * 2300 << "원입니다";
		}
		if (strcmp(coffee, "카푸치노") == 0) {
			sum += num * 2500;
			cout << num * 2500 << "원입니다";
		}
	}
	cout << "오늘 판매금액은 " << sum << "원입니다";
}
