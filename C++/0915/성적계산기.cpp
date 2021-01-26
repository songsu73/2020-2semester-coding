#include <iostream>
#include <algorithm>
using namespace std;

int sumArray(int a[], int size); // 함수의 원형 선언
void makeSort(int a[], int size); // 함수의 원형 선언
int printArray(int a[], int size); // 함수의 원형 선언

int main() {
	int n[5] = {0,0,0,0,0};
	cout << "다섯명의 C++ 성적을 입력 : ";
	cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];

	// 배열 n[]과 개수를 매개 변수에 전달
	int sum = sumArray(n, 5);
	cout << "배열 n의 합은 " << sum << "입니다\n";

	int average = printArray(n, 5);
	cout << average << " - > 평균값 \n";


	makeSort(n, 5);
	
	
}
// 배열과 개수를 전달받아 합을 리턴하는 함수
int sumArray(int a[], int size) {
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += a[i];
	return sum;
}

// 배열의 최소와 최대를 정렬해주는 함수
void makeSort(int a[], int size) {
	int i, j,t;
	for (i = 0; i < size; i++) {
		for (j = i + 1; j < size; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
				
		}
	}
	cout << a[0] + " - > 최소값 \n";
	cout << a[4] + " - > 최대값 \n";
}


// 성적의 평균을 출력하는 함수
	int  printArray(int a[], int size) {
	int i, sum2 = 0;
	for (i = 0; i < size; i++) {
		sum2 += a[i];
	}
	int avr = sum2 / size;
	return avr;
}
