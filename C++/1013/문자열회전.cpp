#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;

	cout << "문자열을 입력하세요(한글 안됨) " << endl;
	getline(cin, s, '\n');
	int len = s.length();

	for (int i = 0; i < len; i++) {
		string first = s.substr(len-1, len)
		string sub = s.substr(0, len-1);
		s = first + sub;
		cout << s << endl;
	}
}
