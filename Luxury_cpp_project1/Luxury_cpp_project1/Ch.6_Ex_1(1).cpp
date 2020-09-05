#include <iostream>
#include <string>
using namespace std;

int add(int m[], int n) {
	int sum1 = 0;
	for (int i = 0; i < n;  i++) {
		sum1 = sum1 + m[i];
	}
	return sum1;
}

int add(int m[], int n, int k[]) {
	int sum1 = 0;
	int sum2 = 0;
	sum1 = add(m, n);
	sum2 = add(k, n);
	return sum1 + sum2;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };

	int c = add(a, 5);
	int d = add(a, 5, b);

	cout << c << endl;
	cout << d << endl;

	return 0;
}