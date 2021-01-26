#include <iostream>
#include "string"
using namespace std;

class Rectangle {
	int V, H;
public:
	Rectangle() { V, H = 1; }
	Rectangle(int v, int h) { this->V = v; this->H = h; }
	void setV(int v) {
		this->V = v;
	}
	void setH(int h) {
		this->H = h;
	}
	double getArea() { return V * H; }


};
void getRectangle(Rectangle& v, Rectangle& h) {
	int x, y;
	cout << "가로 세로 값 입력 >";
	cin >> x >> y;
	v.setV(x);
	h.setH(y);
}



int main() {
	Rectangle exam;
	getRectangle(exam,exam);
	cout << "exam의 면적 = " << exam.getArea()
		<< endl;
}
