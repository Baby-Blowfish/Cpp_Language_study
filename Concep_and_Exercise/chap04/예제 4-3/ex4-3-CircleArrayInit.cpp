/*
	객체 배열 초기화. 생성자를 사용
	Circle circlArray[3] = {Circle(10), Circle(11), Circle(12)};
*/

#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:
	Circle() {	radius = 1; }
	Circle(int r)  { radius = r; }
	void setRadius(int r)  { radius = r; } 
	double getArea(); 
}; 

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() }; // Circle 객체 배열 초기화

	for(int i=0; i<3; i++) 
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
}