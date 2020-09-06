#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string name;
	int remain;
	int id;
public:
	Account(string s, int i, int r);
	void deposit(int m);
 	string getOwner();
	int inquiry();
	int withdraw(int n);
};

Account::Account(string s, int i, int r)
{
	name = s;
	remain = r;
	id = i;
}

void Account::deposit(int m) {
	remain = remain + m;
}

string Account::getOwner() {
	return name;
}

int Account::inquiry() {
	return remain;
}

int Account::withdraw(int n) {
	remain = remain - n;
	return remain ;
}


int main()
{
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}