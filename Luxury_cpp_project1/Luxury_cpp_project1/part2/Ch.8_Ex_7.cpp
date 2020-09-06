#include <iostream>
#include <string>
using namespace std;

class BaseMemory {

	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
};



int main() {



	return 0;
}