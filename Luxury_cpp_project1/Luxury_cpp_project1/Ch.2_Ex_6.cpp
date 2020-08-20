#include <iostream>
#include <string>
using namespace std;

int main()
{
	string p1;
	string p2;

	cout << "새 암호를 입력하세요>>";
	cin >> p1;

	cout << "새 암호를 다시 입력하세요>>";
	cin >> p2;

	if (p1 == p2)
	{
		cout << "같습니다";
	}
	else
	{
		cout << "같지 않습니다";
	}
	cout << endl;
	return 0;
}