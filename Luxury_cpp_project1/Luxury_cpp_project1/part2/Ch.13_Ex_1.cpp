#include <iostream>
#include <string>
#include <vector>
using namespace std;

int sum(int a, int b) {

	if (a > b)
	{
		throw "잘못된 입력";
	}
	if (a < 0 || b < 0)
	{
		throw "음수 처리 안됨";
	}
	else {
		return a + b;
	}
}


int main() {

	try {
		
		cout << sum(7, 5) << endl;

	}
	catch (const char* s) {
		cout << s << endl;

	}

	try {

		cout << sum(-3, 5) << endl;

	}
	catch (const char* s2) {
		cout << s2 << endl;

	}
	
}