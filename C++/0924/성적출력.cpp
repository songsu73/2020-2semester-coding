#include <iostream>

using namespace std;

int main() {
	int 학번, scoreCplus, scoreJava, scoreDS;
	float average;
	char name[100];
	cout << "학번과 이름 => ";
	cin.getline(name, 100, '\n');
	cout << "C++ 성적 => ";
	cin >> scoreCplus;
	cout << "Java 성적 => ";
	cin >> scoreJava;
	cout << "DS 성적 => ";
	cin >> scoreDS;
	average = (scoreCplus + scoreJava + scoreDS) / 3;
	cout << "학번	이름	C++  JAVA  DS  합  평균\n";
	cout << "---------------------------------------------------------------------\n";
	cout << name << "  " << scoreCplus << "  " << scoreJava << "  " << scoreDS << "  " << (average * 3) << "  " << average;
}
