#include <iostream>
#include <cstring>

using namespace std;
class Rectangle {
public:
	int width;
	int height;
	int getArea();
};
int Rectangle::getArea() {
	while (true) {
		if (height == width) {
			return width * height;
			break;
		}
		else {
			return 0;
			break;

		}
	}
}
int main() {
	Rectangle rect;
	
	while (true) {
		cout << "가로길이를 입력하세요 : ";
		cin >> rect.width;
		cout << "세로길이를 입력하세요 : ";
		cin >> rect.height;
		if (rect.getArea() == 0) {
			cout << "정사각형을 입력받지 못했습니다 다시 입력해주세요\n";
			continue;
		}
		else {
			cout << "정사각형의 넓이는 " << rect.getArea() << "입니다";
			break;
		}
	}
	
	}
