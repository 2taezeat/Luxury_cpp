#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	friend Book& operator +=(Book& b, int p);
	friend Book& operator -=(Book& b, int p);
	Book(string title = "", int price = 0, int pages = 0)
	{
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}

	string getTitle()
	{
		return title;
	}
};

Book& operator +=(Book& b, int p) {
	b.price = b.price + p;
	return b;
}


Book& operator -=(Book& b, int p) {
	b.price = b.price - p;
	return b;
}

int main() {

	Book a("청춘", 20000, 300);
	Book b("미래", 30000, 500);
	a += 500; // a = + (a, 500)
	b -= 500; // b = - (b, 500)
	
	a.show();
	b.show();
}