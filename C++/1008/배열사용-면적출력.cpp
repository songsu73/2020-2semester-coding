#include <iostream>
using namespace std;
class Rectangle {
	int V, H;
public:
	Rectangle() { V = 1,H=1; }
	Rectangle(int v) { V = v, H=v; }
	Rectangle(int v, int h) { V = v, H = h; }
	double getArea();
};

double Rectangle::getArea() {
	return V * H;
}

int main() {
	Rectangle rectangleArray[3] = { Rectangle(5, 10), Rectangle(5), Rectangle() };
	for (int i = 0; i < 3; i++)
		cout << "Rectangle " << i << "의 면적은 " << rectangleArray[i].getArea() << endl;
}
