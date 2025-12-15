#include <iostream>
#include <string>
using namespace std;
class student
{
	int grup;
	int tak;
public:
	string imay;
	void setg(int grupp) {
		grup = grupp;
	}
	void sett(int takk) {
		tak = takk;
	}
	int getg() {
		return grup;
	}
	int gett() {
		return tak;
	}


};
int main()
{
	setlocale(LC_ALL, "ru");
	student stut;
	 int a;
	 int b;
	cout << "Введи группу";
	cin >> a;
	cout << "Введи Средний балл";
	cin >> b;
	stut.imay = "Igor Tak";
	stut.setg(a);
	stut.sett(b);
	cout <<"Имя :"<< stut.imay << endl;
	cout << "Группа :" << stut.getg() << endl;
	cout << "Оценка :" << stut.gett() << endl;
	student stut2;
	int a2;
	int b2;
	cout << "Введи группу";
	cin >> a2;
	cout << "Введи Средний балл";
	cin >> b2;
	stut.imay = "Ivan Tak";
	stut.setg(a2);
	stut.sett(b2);
	cout << "Имя :" << stut.imay << endl;
	cout << "Группа :" << stut.getg() << endl;
	cout << "Оценка :" << stut.gett() << endl;
	student stut3;
	int a3;
	int b3;
	cout << "Введи группу";
	cin >> a3;
	cout << "Введи Средний балл";
	cin >> b3;
	stut.imay = "Kirill Tak";
	stut.setg(a3);
	stut.sett(b3);
	cout << "Имя :" << stut.imay << endl;
	cout << "Группа :" << stut.getg() << endl;
	cout << "Оценка :" << stut.gett() << endl;
} 