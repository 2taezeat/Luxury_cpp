#include <iostream>
#include <string>
using namespace std;

template <class T>
T biggest(T array[], int n) {

	T m = array[0];

	for (int i = 0; i < n; i++)
	{
		if (m < array[i])
		{
			m = array[i];
		}
	}
	return m;
}

int main() {

	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x, 5) << endl; // 5�� �迭 x�� ũ��. 100�� ��µȴ�.


	double y[] = { 6.4, 3.3, -200.6, 7.7, 8.8, 20.3 };
	cout << biggest(y, 6); // 6�� �迭 y�� ũ��

	return 0;
}