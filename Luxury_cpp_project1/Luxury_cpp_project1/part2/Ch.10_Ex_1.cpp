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
	cout << biggest(x, 5) << endl; // 5는 배열 x의 크기. 100이 출력된다.


	double y[] = { 6.4, 3.3, -200.6, 7.7, 8.8, 20.3 };
	cout << biggest(y, 6); // 6는 배열 y의 크기

	return 0;
}