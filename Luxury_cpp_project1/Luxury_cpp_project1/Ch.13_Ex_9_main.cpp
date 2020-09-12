#include <iostream>
#include <string>

using namespace std;

extern "C" int get();
int mul();

int main() {

	int n, m;

	n = get();
	m = mul();

	cout << n * m;
}