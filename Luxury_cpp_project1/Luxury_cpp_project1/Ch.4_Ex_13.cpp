#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string text;
	int histo[26]; // 26���� ���ĺ��� ���� �� ���ڴ� ���� ����
public:
	Histogram();
	Histogram(string text); // �����ڿ� ������׷����� �м��� ���ڿ� ����
	void putc(char c); // ������׷��� ���� ����
	void put(string text); // ������׷��� string ���ڿ� ����
	void print(); // ������׷��� ȭ�� ���
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
		histo[i] = 0; // histo �迭�� 0���� �ʱ�ȭ

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
	cout << "�� ���Ĺ� �� : " << sum1 << endl << endl;
	
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