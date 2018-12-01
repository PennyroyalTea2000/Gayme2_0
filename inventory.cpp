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
	void unwearA(armor a) {
		basHP -= a.hp;
	}
};

class mob {
public:
	int mobATT, mobDEF;
	string namem;
	void appear(mob a, hero you) {
		int i, j;
		cout  << "òû âñòðå÷àåøü " <<   a.namem<<  endl<<  "òâîè äåéñòâèÿ" << endl;
		cout << "1)âñòóïèòü â áîé "<< endl<<  "2)óáåæàòü";
		cin >>i;
		if (i == 1) {
			system("cls");
			while ((a.mobDEF> 0) && (you.basHP>0)) {
				cout<<"------ÁÎÉ------"<< endl;
				cout << "îáìåíÿâøèñü ñ "<<   a.namem << " âçãëÿäàìè òû ðåøàåøü"<<  endl;
				cout<<  "1)óäàðèòü ïî ïå÷åíêàì" << endl << "2)ðàññêàçàòü àíåêäîò ïðî õîõëîâ"<<  endl;
				cin >> j;
				switch (j) {
				case 1:
					a.mobDEF -= you.basATT;
					cout << " âèçæa îò áîëè õï ìîáà ñòàíîâÿòñÿ = " << a.mobDEF << endl;
					cout << " áðûçãàÿ ñëþíàìè âî âñå ñòîðîíû  êóñàåò çà æåïïó "<<  endl;
					you.basHP -= a.mobATT;
					cout << " âàøè õï îïóñêàþòñÿ äî "<<   you.basHP<<  endl;
					break;
				case 2:
					cout << "õîðîøî ïîñìåÿâøèñü âû âîññòàíàâëèâàåòå ïîëíîå õï";
					you.basHP = you.MAXHP;
					break;
				}
			}
		}
		cout  <<"Âðàã ïîâåðæåí "<< endl;
	}
};

int main() {
	hero you;
	you.basHP = 5;
	you.basATT = 1;
	you.MAXHP = 5;
	weapon palka;
	palka.namew = " ïàëêà ïî ëèöó äàâàëêà ";
	palka.att = 1;
	weapon sword;
	sword.namew = " ñèëèêîíîâûé ìå÷ ";
	sword.att = 3;
	armor shapka;
	shapka.namea =" øàïî÷êà èç ôîëüãè ";
	shapka.hp = 5;
	mob krisa;
	krisa.namem = " õèòðóþ êðûñó ";
	krisa.mobDEF = 3;
	krisa.mobATT = 1;
	

	cout << "âàøè õï ñåé÷àñ "<<   you.basHP <<  " âàøà àòàêà ñåé÷àñ " <<  you.basATT << endl;
	krisa.appear(krisa, you);
	cout << "âàøè õï ñåé÷àñ " << you.basHP << " âàøà àòàêà ñåé÷àñ " << you.basATT << endl;
	cout << "âû íàøëè ïàëêó ïî åáëó äàâàëêó"<<  endl;
	you.wearW(palka);
	cout << "âàøè õï ñåé÷àñ " << you.basHP << " âàøà àòàêà ñåé÷àñ " << you.basATT << endl;
	krisa.appear(krisa, you);
	cout  <<"âû íàøëè øàïî÷êó èç ôîëüãè "<<  endl;
	you.wearA(shapka);
	cout<< " Âû íàøëè " << sword.namew<<  endl << "Ïîìåíÿòü îðóæèå" << endl << "1)äà" << endl << "2)íåò";
	int shouse;
	cin >> shouse;
	if (shouse == 1) {
		you.unwearW(palka);
		you.wearW(sword);
	}
	cout << "âàøè õï ñåé÷àñ " << you.basHP << " âàøà àòàêà ñåé÷àñ" << you.basATT << endl;
	system("pause");

	cout << "íàæìèòå 5, ÷òîáû îòêðûòü èíâåíòàðü";
	int u;
	cin >> u;

	if (u == 5) {
		cout << "Íà âàñ îäåòî:" << endl
			<< "1)" << sword.namew << endl << "2)" << shapka.namea
			<< endl << "Ñíÿòü" << endl << "1) äà" << "2) íåò" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			cout << "÷òî ñíÿòü?";
				int p;
			cin>> p;
			switch (p) {
			case 1:
					you.unwearW(sword);
			case 2:
				you.unwearA(shapka);
			}

		}

	}
	cout << "âàøè õï ñåé÷àñ " << you.basHP << " âàøà àòàêà ñåé÷àñ" << you.basATT << endl;
	system("pause");
	return 0;
}
