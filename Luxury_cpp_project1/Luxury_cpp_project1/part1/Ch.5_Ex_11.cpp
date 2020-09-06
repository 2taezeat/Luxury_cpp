#define _CRT_SECURE_NO_WARNINGS // 비주얼 스튜디오에서 stpcpy() 때문에 발생하는 컴파일 오류를 막기 위해
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	Book(Book& b); // 깊은 복사 생성자
	~Book();

	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }

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

Book::Book(Book& b) { // (3) 정답. 깊은 복사 복사 생성자 작성
	int len = strlen(b.title);
	title = new char[len + 1];
	strcpy(title, b.title);
	price = b.price;
}

void Book::set(const char* title, int price) { // (1) 정답
	if (this->title) // 현재 객체에 title에 메모리가 할당되어 책 이름이 적혀있는 상황
		delete[] this->title; // 현재 title에 할당된 메모리 반환
	int len = strlen(title);
	this->title = new char[len + 1]; // 새로 메모리 할당
	strcpy(this->title, title);
	this->price = price;
}

int main()
{
	Book cpp("명품C++", 10000);
	Book java = cpp;

	java.set("명품자바", 12000);;

	cpp.show();
	java.show();

	return 0;
}
