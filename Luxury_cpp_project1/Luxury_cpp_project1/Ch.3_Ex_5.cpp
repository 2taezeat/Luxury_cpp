#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	Random();

	int next();
	int nextInRange(int n, int m);
};

Random::Random()
{
	srand((unsigned)time(0));
}

int Random::next()
{
	int r = rand();
	return r;
}

int Random::nextInRange(int n, int m)
{	
	int r = rand();
	r = (r % 3) + 2;
	return r;
}

int main()
{
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl; // RAND_MAX = 32767
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}
	
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2,4);
		cout << n << ' ';
	}
	
	cout << endl;
}