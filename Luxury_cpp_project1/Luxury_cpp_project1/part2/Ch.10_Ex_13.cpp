#include <iostream>
#include <string>
#include <map>
using namespace std;

class GradeManager {
	string program;
	map<string, int> scoreMap;
	void insert();
	void search();
public:
	GradeManager(string name);
	void run();
};


GradeManager::GradeManager(string program) {
	this->program = program;
}

void GradeManager::insert() {
	string name;
	int n;
	
	do {
		cout << "이름과 점수>> ";
		cin >> name >> n;

		if (scoreMap.find(name) != scoreMap.end())
		{
			cout << name << "의 점수를 수정할 수 없음" << endl;
		}

		scoreMap.insert(make_pair(name, n));
		break;

	} while (true);
}

void GradeManager::search() {
	string name;
	cout << "이름>> ";
	cin >> name;
	if (scoreMap.find(name) == scoreMap.end()) { // name을 맵에서 찾을 수 없음. 부록 G 참고
		cout << name << "은 없는 사람임" << endl;
	}
	else {
		int score = scoreMap[name]; // 점수알아내기
		cout << name << "의 점수는 " << score << endl;
	}
}


void GradeManager::run() {
	int menu;
	cout << "***** 점수관리 프로그램 " << program << "을 시작합니다 *****" << endl;
	while (true)
	{
		cout << "입력:1, 조회:2, 종료:3 >> ";
		cin >> menu;

		
		switch (menu) {

		case 1:
			insert();
			break;
		case 2:
			search();
			break;
		case 3:
			cout << "프로그램을 종료합니다....";
			return ;
		}
	
	}
}


int main() {
	GradeManager gm("High Score");
	gm.run();
}