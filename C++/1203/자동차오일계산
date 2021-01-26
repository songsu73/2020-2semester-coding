#include <iostream>
using namespace std;

int main() {
	float oil = 0;
	float lastoil = 0;
	string booloil;
	float distance = 0;
	int date = 0;
	float yunbi = 75 / 11.8;
	int booldate = 0;
	cout.precision(5);
	while (oil > 0 or oil < 501) {
		cout << "[차량] 오일량을 입력하세요(0~500) : ";
		cin >> oil;
		if (oil < 0 or oil > 500) {
			cout << "오일량을 다시 입력하세요" << endl;
			continue;
		}
		else {
			cout << "입력한 오일량은 " << oil << "L입니다." << endl;
			break;
		}
	}
	cout << "--------------------------------------------" << endl;
	cout << "날짜\t연료량(L)\t주행거리(KM)\t연료 보충\n";
	cout << "--------------------------------------------" << endl;
	lastoil = oil;
	while (lastoil > 0) {
		date += 3;
		distance += 75;
		lastoil -= yunbi;
		if (lastoil <= 0) {
			break;
		}
		if (lastoil > 20) {
			booloil = "안전";
		}
		else {
			booloil = "보충";
			if (booldate == 0) {
				booldate = date;
			}

		}
	
		cout << date << "\t" << lastoil << "\t\t" << distance << "\t\t" << booloil << endl;
		
	}
	cout << "---------------------------------------------" << endl;
	cout << "다음 주유 일자는 " << booldate << "일 후 입니다" << endl;
}
