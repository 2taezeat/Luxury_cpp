#include <iostream>
#include <string>
using namespace std;



int main() {
	string s;

	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	getline(cin, s, '\n');

	while (s != "exit")
	{
		string k;
		for (int i = s.size()-1; i >= 0; i--)
		{
			k = k + s[i];
		}

		cout << k << endl;

		getline(cin, s, '\n');
	}

	return 0;
}