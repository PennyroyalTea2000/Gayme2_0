#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

class weapon {
public:
	string namew;
	int att;
};

class armor {
public:
	string namea;
	int hp;
};

class hero {
public:
	int MAXHP;
	int basHP, basATT;
	void wearW(weapon a) {
		basATT += a.att;
	}
	void wearA(armor a) {
		basHP += a.hp;
		MAXHP = basHP;
	}
	void unwearW(weapon a) {
		basATT -= a.att;
	}
};

class mob {
public:
	int mobATT, mobDEF;
	string namem;
	void appear(mob a, hero you) {
		int i, j;
		cout << "�� ����������" << a.namem << endl << "���� ��������" << endl;
		cout << "1) �������� � ��� 2)�������";
		cin >> i;
		if (i == 1) {
			system("cls");
			while ((a.mobDEF) && (you.basHP)) {
				cout << "------���------" << endl;
				cout << "����������� �" << a.namem << "��������� �� �������" << endl;
				cout << "1)������� �� ��������" << endl << "2)���������� ������� ��� ������" << endl;
				cin >> j;
				switch (j) {
				case 1:
					a.mobDEF -= you.basATT;
					cout << "����� �� ���� �� ���� ���������� = " << a.mobDEF << endl;
					cout << "������� ������� �� ��� �������  ������ ��������" << endl;
					you.basHP -= a.mobATT;
					cout << "���� �� ���������� �� " << you.basHP << endl;
					break;
				case 2:
					cout << "������ ����������� �� ���������������� ������ ��";
					you.basHP = you.MAXHP;
					break;
				}
			}
		}
		cout << "���� ��������" << endl;
	}
};

int main() {
	hero you;
	you.basHP = 5;
	you.basATT = 1;
	you.MAXHP = 5;
	weapon palka;
	palka.namew = "����� �� ���� ������� ";
	palka.att = 1;
	weapon sword;
	sword.namew = "����������� ���";
	sword.att = 3;
	armor shapka;
	shapka.namea = "������� �� ������";
	shapka.hp = 5;
	mob krisa;
	krisa.namem = "������ ����";
	krisa.mobDEF = 3;
	krisa.mobATT = 1;

	cout << "���� �� ������ "<<  you.basHP << " ���� ����� ������ "<<  you.basATT << endl;
	krisa.appear(krisa, you);
	cout << "���� �� ������" <<  you.basHP << " ���� ����� ������ " <<  you.basATT << endl;
	cout << "�� ����� ����� �� ���� �������" << endl;
	you.wearW(palka);
	cout << "���� �� ������" <<  you.basHP <<  "���� ����� ������" <<  you.basATT << endl;
	krisa.appear(krisa, you);
	cout << "�� ����� ������� �� ������" << endl;
	you.wearA(shapka);
	cout << "�� �����"  << sword.namew << endl << "�������� ������"  <<endl << "1)�� "<< endl << "2)���";
	int shouse;
	cin >> shouse;
	if (shouse == 1) {
		you.unwearW(palka);
		you.wearW(sword);
	}
	cout << "���� �� ������ " << you.basHP << " ���� ����� ������ " <<  you.basATT << endl;
	system("pause");
	return 0;
}