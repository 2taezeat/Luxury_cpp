#include <iostream>
#include <string>
#include <vector>

using namespace std;


class UI {
public:
	static int getMainMenu();
	static void getCircle(int&, string&);
	static string getCircleName();
	static void println(string = "");
	static void print(string);
	static void print(int);
};
int UI::getMainMenu() {
	cout << "삽입:1, 삭제:2, 모두보기:3. 종료:4 >> ";

	int menu;
	cin >> menu;
	return menu;
}

void UI::getCircle(int& radius, string& name) {
	cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
	cin >> radius >> name;
}

string UI::getCircleName() {
	cout << "삭제하고자 하는 원의 이름은 >> ";
	string name;
	cin >> name;
	return name;
}

void UI::println(string msg) {
	cout << msg << endl;
}

void UI::print(string msg) {
	cout << msg;
}

void UI::print(int msg) {
	cout << msg;
}

class Circle {
	string name;
	int radius;
public:
	Circle(int radius, string name) {
		this->radius = radius;
		this->name = name;
	}
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

class Circle;


class CircleVectorManager {
	enum { EDIT = 1, REMOVE = 2, PAINT = 3, EXIT = 4 };
	vector<Circle*> v;
	void edit();
	void remove();
	void paint();
public:
	CircleVectorManager();
	~CircleVectorManager();
	void run();

};

CircleVectorManager::CircleVectorManager() { }
CircleVectorManager::~CircleVectorManager() { }

void CircleVectorManager::edit() {
	int radius;
	string name;

	UI::getCircle(radius, name);
	v.push_back(new Circle(radius, name));
}

void CircleVectorManager::remove() {
	string name;
	name = UI::getCircleName();

	vector<Circle*>::iterator it = v.begin();
	while (it != v.end()) {
		Circle* p = *it;
		if (p->getName() == name) {
			it = v.erase(it);
			delete p;
		}
		else {
			it++;
		}
	}
}

void CircleVectorManager::paint() {
	vector<Circle*>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		Circle* p = *it;
		UI::println(p->getName());
	}
	UI::println();
}

void CircleVectorManager::run() {
	UI::println("원을 삽입하고 삭제하는 프로그램입니다.");
	while (true) {
		int menu = UI::getMainMenu();
		switch (menu) {
		case EDIT: // 삽입
			edit(); break;
		case REMOVE: // 삭제
			remove(); break;
		case PAINT: // 다시 그리기
			paint(); break;
		case EXIT: // 끝내기
			return;
		default:
			UI::println("명령 선택 오류");
		}
	}
}

int main() {
	CircleVectorManager cvm;
	cvm.run();
}