#include <iostream>
#include <string>
using namespace std;

bool bigger(int a, int b, int& big)
{
	if (a == b)
	{	
		big = a;
		return true;
	}
	else
	{	
		if (a > b)
		{
			big = a;
		}
		else {
			big = b;
		}
		return false;
	}
}

int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	bool t_f;
	cout << "�� ������ �Է��ϼ���>> ";
	cin >> a >> b;

	t_f = bigger(a, b, c);
	cout << "t_f>> " << t_f << endl;
	cout << "ū ����>> " << c;
	return 0;
}