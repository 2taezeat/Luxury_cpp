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
		cout << "�̸��� ����>> ";
		cin >> name >> n;

		if (scoreMap.find(name) != scoreMap.end())
		{
			cout << name << "�� ������ ������ �� ����" << endl;
		}

		scoreMap.insert(make_pair(name, n));
		break;

	} while (true);
}

void GradeManager::search() {
	string name;
	cout << "�̸�>> ";
	cin >> name;
	if (scoreMap.find(name) == scoreMap.end()) { // name�� �ʿ��� ã�� �� ����. �η� G ����
		cout << name << "�� ���� �����" << endl;
	}
	else {
		int score = scoreMap[name]; // �����˾Ƴ���
		cout << name << "�� ������ " << score << endl;
	}
}


void GradeManager::run() {
	int menu;
	cout << "***** �������� ���α׷� " << program << "�� �����մϴ� *****" << endl;
	while (true)
	{
		cout << "�Է�:1, ��ȸ:2, ����:3 >> ";
		cin >> menu;

		
		switch (menu) {

		case 1:
			insert();
			break;
		case 2:
			search();
			break;
		case 3:
			cout << "���α׷��� �����մϴ�....";
			return ;
		}
	
	}
}


int main() {
	GradeManager gm("High Score");
	gm.run();
}