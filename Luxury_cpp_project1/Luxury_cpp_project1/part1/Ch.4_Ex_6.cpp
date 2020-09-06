#include <iostream>
#include <string>
using namespace std;



int main() {
	string s;

	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
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