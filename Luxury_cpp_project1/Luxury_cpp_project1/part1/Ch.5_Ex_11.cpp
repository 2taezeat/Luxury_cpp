#define _CRT_SECURE_NO_WARNINGS // ���־� ��Ʃ������� stpcpy() ������ �߻��ϴ� ������ ������ ���� ����
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	Book(Book& b); // ���� ���� ������
	~Book();

	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }

};

Book::Book(const char* title, int price) {
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	this->price = price;
}

Book::~Book() {
	if (title)
		delete[] title;
}

Book::Book(Book& b) { // (3) ����. ���� ���� ���� ������ �ۼ�
	int len = strlen(b.title);
	title = new char[len + 1];
	strcpy(title, b.title);
	price = b.price;
}

void Book::set(const char* title, int price) { // (1) ����
	if (this->title) // ���� ��ü�� title�� �޸𸮰� �Ҵ�Ǿ� å �̸��� �����ִ� ��Ȳ
		delete[] this->title; // ���� title�� �Ҵ�� �޸� ��ȯ
	int len = strlen(title);
	this->title = new char[len + 1]; // ���� �޸� �Ҵ�
	strcpy(this->title, title);
	this->price = price;
}

int main()
{
	Book cpp("��ǰC++", 10000);
	Book java = cpp;

	java.set("��ǰ�ڹ�", 12000);;

	cpp.show();
	java.show();

	return 0;
}
