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
		cout << "ты встречаешь" << a.namem << endl << "твои действия" << endl;
		cout << "1) вступить в бой 2)убежать";
		cin >> i;
		if (i == 1) {
			system("cls");
			while ((a.mobDEF) && (you.basHP)) {
				cout << "------БОЙ------" << endl;
				cout << "обменявшись с" << a.namem << "взглядами ты решаешь" << endl;
				cout << "1)ударить по печенкам" << endl << "2)рассказать анекдот про хохлов" << endl;
				cin >> j;
				switch (j) {
				case 1:
					a.mobDEF -= you.basATT;
					cout << "визжя от боли хп моба становятся = " << a.mobDEF << endl;
					cout << "брызгая слюнами во все стороны  делает подсечку" << endl;
					you.basHP -= a.mobATT;
					cout << "ваши хп опускаются до " << you.basHP << endl;
					break;
				case 2:
					cout << "хорошо посмеявшись вы восстанавливаете полное хп";
					you.basHP = you.MAXHP;
					break;
				}
			}
		}
		cout << "Враг повержен" << endl;
	}
};

int main() {
	hero you;
	you.basHP = 5;
	you.basATT = 1;
	you.MAXHP = 5;
	weapon palka;
	palka.namew = "палка по еблу давалка ";
	palka.att = 1;
	weapon sword;
	sword.namew = "силиконовый меч";
	sword.att = 3;
	armor shapka;
	shapka.namea = "шапочка из фольги";
	shapka.hp = 5;
	mob krisa;
	krisa.namem = "хитруя суку";
	krisa.mobDEF = 3;
	krisa.mobATT = 1;

	cout << "ваши хп сейчас "<<  you.basHP << " ваша атака сейчас "<<  you.basATT << endl;
	krisa.appear(krisa, you);
	cout << "ваши хп сейчас" <<  you.basHP << " ваша атака сейчас " <<  you.basATT << endl;
	cout << "вы нашли палку по еблу давалку" << endl;
	you.wearW(palka);
	cout << "ваши хп сейчас" <<  you.basHP <<  "ваша атака сейчас" <<  you.basATT << endl;
	krisa.appear(krisa, you);
	cout << "вы нашли шапочку из фольги" << endl;
	you.wearA(shapka);
	cout << "Вы нашли"  << sword.namew << endl << "Поменять оружие"  <<endl << "1)да "<< endl << "2)нет";
	int shouse;
	cin >> shouse;
	if (shouse == 1) {
		you.unwearW(palka);
		you.wearW(sword);
	}
	cout << "ваши хп сейчас " << you.basHP << " ваша атака сейчас " <<  you.basATT << endl;
	system("pause");
	return 0;
}