#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;

public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {


	NamedCircle waffle(3, "waffle");
	waffle.show();
	

	return 0;
}