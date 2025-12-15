#include <iostream>
#include <string>
using namespace std;

class Gun {
public:
	virtual void shoot() {
		cout << "BANG!" << endl;
	}
	virtual void reload() {
		while (true) {
			int mag = 2;
			int mass = 3;
			int count = mass;
			char per;
			for (int i = 0; i <= count; i++) {
				cout << "Кол.-во потрон " << mass << endl;
				Gun::shoot();
				mass = mass - 1;
				if (mass == 0) {
					cout << "Нет потрон " << mass << endl;
					cout << "Для перезорядке напеши R" << endl;
					if (per == 'R') {
						mag = mag - 1;
					}
					else
					{
						break;
					}
					if (mag == 0) {
						break;
					}

				}
				
			}
		}
	}
};

class Submachinegun : public Gun {
public:
	void shoot() override {
		cout << "BANG! BANG! BANG!" << endl;
	}
    void reload()override {
		int mass = 10;
		int count = mass;
		for (int i = 0; i <= count; i++) {
			cout << "Кол.-во потрон " << mass << endl;
			Submachinegun::shoot();
			mass = mass - 1;
			if (mass == 0) {
				cout << "Нет потрон " << mass << endl;
				break;
			}
		}
	}
};

class Rifle : public Gun {
public:
	void shoot() override {
		cout << "BANG! BANG! BANG!" << endl;
		cout << "BANG! BANG! BANG!" << endl;
		cout << "BANG! BANG! BANG!" << endl;
	}
        void reload() override {
		int mass = 15;
		int count = mass;
		for (int i = 0; i <= count; i++) {
			cout << "Кол.-во потрон " << mass << endl;
			Rifle::shoot();
			mass = mass - 1;
			if (mass == 0) {
				cout << "Нет потрон " << mass << endl;
				break;
			}
		}
	}
};
class RPG : public Gun {
public:
	void shoot() override {
		cout << "MEGA BOOM!" << endl;
	}
	    void reload() override {
		int mass = 5;
		int count = mass;
		for (int i = 0; i <= count; i++) {
			cout << "Кол.-во потрон " << mass << endl;
			Gun::shoot();
			mass = mass - 1;
			if (mass == 0) {
				cout << "Нет потрон " << mass << endl;
				break;
			}
		}
	}
};

class Player {
public:
	void shot(Gun& gun) {
		gun.shoot();
	}
};

int main()
{
	setlocale(LC_ALL, "RU");
	Submachinegun Obj1;
	cout << "Оружие 1" << endl;
	Obj1.reload();
	cout << endl;
	//Rifle Obj2;
	//cout << "Оружие 2" << endl;
	//Obj2.reload();
	//cout << endl;
	//RPG Obj3;
	//cout << "Оружие 3" << endl;
	//Obj3.reload();
	//cout << endl;
	return 0;
}