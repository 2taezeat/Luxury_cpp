#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = n - i; j > 0; j--)
		{
			cout << "*";
		}

		if (i == n - 1)
		{
			return 0;
		}

		cout << "\n";
	}
}