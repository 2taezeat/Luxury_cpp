#include <iostream>
#include <string>
#include <vector>
using namespace std;

int sum(int a, int b) {

	if (a > b)
	{
		throw "�߸��� �Է�";
	}
	if (a < 0 || b < 0)
	{
		throw "���� ó�� �ȵ�";
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