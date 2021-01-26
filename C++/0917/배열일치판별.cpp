#include <iostream>
using namespace std;

bool equalArray(int* p, int* q, int*z,int size); 

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = {2,5,3,2,5 };
	int result[] = { 0,0,0,0,0 };

	if (equalArray(a, b, result, 5)) cout << "arrays equal" << "\n";
	else cout << "arrays not equal" << "\n";
}
bool equalArray(int* p, int* q, int* z, int size) {
	int i;
	for (i = 0; i < size; i++) {
		if (*p != *q) {
			*z = 0;
		}
		else
			*z = 1;
		p++;
		q++;
		z++;
	}
	if (z[0] == 1 && z[1] == 1 && z[2] == 1 && z[3] == 1 && z[4] == 1)
		return true;
	else
		return false;
	
