#include <iostream>
#include <string>
using namespace std;

int main()
{
	string p1;
	string p2;

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> p1;

	cout << "�� ��ȣ�� �ٽ� �Է��ϼ���>>";
	cin >> p2;

	if (p1 == p2)
	{
		cout << "�����ϴ�";
	}
	else
	{
		cout << "���� �ʽ��ϴ�";
	}
	cout << endl;
	return 0;
}