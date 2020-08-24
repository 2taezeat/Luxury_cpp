#include <iostream>
#include <string>
using namespace std;

class Oval {
private:
	int width, height;
public:
	Oval();
	Oval(int w, int h);
	~Oval();
	void show();
	int getWidth();
	int getHeight();
	void set(int w, int h);

};

Oval::Oval()
{
	width = 1;
	height = 1;
}

Oval::Oval(int w, int h)
{
	width = w;
	height = h;
}

Oval::~Oval()
{
	cout << "Oval 소멸: w, h -> " << width << ", "<< height << endl;
}

void Oval::show() {
	cout << "width = " << width << ", " << "height = " << height << endl;
}

int Oval::getWidth() {
	return width;
}

int Oval::getHeight() {
	return height;
}

void Oval::set(int w, int h){
	width = w;
	height = h;
}

int main()
{
	Oval a;
	Oval b(3, 4);

	a.set(10, 20);
	a.show();

	cout << b.getWidth() << "," << b.getHeight() << endl;
	return 0; // main 함수가 종료되면, 함수의 스택에서 생선된 객체가 소멸하면서, 소멸자를 호출한다.
}
