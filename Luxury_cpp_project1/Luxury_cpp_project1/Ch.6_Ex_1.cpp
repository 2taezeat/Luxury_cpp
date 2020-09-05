#include <iostream>
#include <string>
using namespace std;

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };

	int c = add(a, 5);
	int d = add(a, 5, b);

	cout << c << endl;
	cout << d << endl;

	return 0;
}