#include <iostream>
using namespace std;


struct Struct {
private:
	int H, V;
public:
	Struct(int h, int v) { H = h, V = v; }
	double getArea();
};

double Struct::getArea() {
	return H * V;
}

int main() {
	Struct 직사각형(4,5);
	cout << "면적은 " << 직사각형.getArea();
}
//구조체 Struct 학습
