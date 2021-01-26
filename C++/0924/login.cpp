#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char Login[11] = "scott";
	char Password[11] = "tiger";
	char id[11];
	char pw[11];
	cout << "ID를 입력하세요  " << endl;
	while (true) {
		cout << " ID : ";
		cin >> id;
		if (strcmp(id,Login) == 0) {
			cout << "Password를 입력하세요  " << endl;
			cout << " PW : ";
			cin >> pw;
			if (strcmp(pw, Password) == 0) {
				cout << "\nSQL>";
				break;
			}
			else {
				cout << "pw가 불일치합니다 id입력절차로 이동합니다\n";
				continue;
			}
		}
		else if (id == "") {
			cout << "id를 입력하지 않아 종료됩니다";
			break;
		}
		else {
			cout << "ID가 없습니다 다시 입력해주세요\t";
			continue;
		}


	}
}
