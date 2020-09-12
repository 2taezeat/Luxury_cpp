#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;

	while (true) {
		cout << "양수 입력 >> ";
		cin >> n;
		try {
			cout << cin.fail() << endl;

			if (cin.fail()) // failbit이 1(true)로 셋되어 있는 경우, 포멧에 맞지 않는 입력 발생 => 정수 : 0(false) , 그 외 : 1 (true)
				throw "정수가 아닌 값 입력";

			if (n > 9 || n <= 0)
			{
				throw n;
			}

			for (int i = 0; i < 10; i++)
				cout << n << 'x' << i << '=' << n * i << ' ';
			cout << endl;
		}
		
			catch (int error) {
				cout << "입력 오류 : 0~9 아님" << endl;
			}

			catch (const char* s) {
				cout << "입력 오류 : 정수가 아님, 프로그램 종료" << endl;
				return 0;
			}
	}
}
