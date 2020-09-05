#include <iostream>
#include <string>
using namespace std;




int main() {

	Matrix a(1, 2, 3, 4);
	Matrix b(2, 3, 4, 5);
	Martix c;
	c = a + b;
	a = a + b;

	a.show(); b.show(); c.show();
	if (a == c)
	{
		cout << "a and c are the same" << endl;
	}

	return 0;
}