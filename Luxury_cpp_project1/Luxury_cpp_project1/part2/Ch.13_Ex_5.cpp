#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;

	while (true) {
		cout << "��� �Է� >> ";
		cin >> n;
		try {
			cout << cin.fail() << endl;

			if (cin.fail()) // failbit�� 1(true)�� �µǾ� �ִ� ���, ���信 ���� �ʴ� �Է� �߻� => ���� : 0(false) , �� �� : 1 (true)
				throw "������ �ƴ� �� �Է�";

			if (n > 9 || n <= 0)
			{
				throw n;
			}

			for (int i = 0; i < 10; i++)
				cout << n << 'x' << i << '=' << n * i << ' ';
			cout << endl;
		}
		
			catch (int error) {
				cout << "�Է� ���� : 0~9 �ƴ�" << endl;
			}

			catch (const char* s) {
				cout << "�Է� ���� : ������ �ƴ�, ���α׷� ����" << endl;
				return 0;
			}
	}
}
