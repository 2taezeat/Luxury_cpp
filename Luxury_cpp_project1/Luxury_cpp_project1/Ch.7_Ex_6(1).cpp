#include <iostream>
#include <string>
using namespace std;
// (1) 연산자 함수를 Matrix의 멤버 함수로 구현하라.


class Matrix {
	int array1[4];

public:
	Matrix() {
		for (int i = 0; i < 4; i++)
		{
			array1[i] = 0;
		}
	}
	Matrix(int a, int b, int c, int d) {
		array1[0] = a;
		array1[1] = b;
		array1[2] = c;
		array1[3] = d;
	}

	Matrix operator+(Matrix m)
	{	
		Matrix tmp;
		for (int i = 0; i < 4; i++)
		{
			tmp.array1[i] = m.array1[i] + this->array1[i];
		}
		return tmp;
	}

	bool operator== (Matrix m) {
		for (int i = 0; i < 4; i++)
		{
			if (m.array1[i] != this->array1[i])
				return false;
		}
			return true;
	}

	Matrix& operator+= (Matrix m) {
		for (int i = 0; i < 4; i++)
		{
			this->array1[i] = m.array1[i] + this->array1[i];
		}
		return *this;
	}

	void show(){
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++)
		{
			cout << array1[i] << ' ';
		}
		cout << '}' << endl;
	}

};

int main() {

	Matrix a(1, 2, 3, 4);
	Matrix b(2, 3, 4, 5);
	Matrix c;
	c = a + b; // c = a. + (b);
	a += b; // a. += (b);

	a.show(); b.show(); c.show();
	if (a == c) // a. == (c)

	{
		cout << "a and c are the same" << endl;
	}

	return 0;
}