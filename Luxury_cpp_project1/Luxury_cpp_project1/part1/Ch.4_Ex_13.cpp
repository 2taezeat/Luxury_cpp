#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string text;
	int histo[26]; // 26개의 알파벳에 대해 각 글자당 개수 저장
public:
	Histogram();
	Histogram(string text); // 생성자에 히스토그램으로 분석할 문자열 전달
	void putc(char c); // 히스토그램에 문자 삽입
	void put(string text); // 히스토그램에 string 문자열 삽입
	void print(); // 히스토그램의 화면 출력
	~Histogram() {}
};

Histogram::Histogram()
{
	this->text = "";
}

Histogram::Histogram(string text)
{
	this->text = text;
}

void Histogram::putc(char c)
{
	this->text = this->text + c;
}

void Histogram::put(string text) {
	this->text.append(text);

}
void Histogram::print() {
	cout << text << endl << endl;

	for (int i = 0; i < 26; i++)
		histo[i] = 0; // histo 배열을 0으로 초기화

	for (int i = 0; i < text.size() ; i++)
	{	
		int as;
		int n = -1;
		as = (int)text[i];
		

		if (as < 123 && as>96)
		{
			n = as - 97;
		}
		else if (as < 91 && as > 64)
		{
			n = as - 65;

		}

		if (n > -1 && n < 26)
		{
			histo[n] = histo[n] + 1;
		}
		else {
			continue;
		}

	}
	int sum1 = 0;
	for (int j = 0; j < 26; j++)
	{
		sum1 = sum1 + histo[j];
	}
	cout << "총 알파뱃 수 : " << sum1 << endl << endl;
	
	for (int j = 0; j < 26; j++)
	{
		cout << char(j + 97) << " (" << histo[j] << ")	" << ": ";

		for (int i = 0; i < histo[j]; i++)
		{
			cout << "*";

		}
		cout << endl;
	}
}



int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, \n");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");

	elvisHisto.print();
}