#include <iostream>
#include <string>
using namespace std;
struct govi
{
	string im;
	int gr;
	float ses[5];
};
int main()
{
	setlocale(LC_ALL, "ru");
	int set = 0;
	float f = 0;
	const int dyr = 2;
	govi dom[dyr];
	for (int i = 0; i < dyr; i++) {
		cout << "Введите ФИО" << endl;
		cin >> dom[i].im;
		cout << "Введите номер группы" << endl;
		cin >> dom[i].gr;
		for (int j = 0; j < dyr; j++) {
			cout << "Введите успеваемость" << endl;
			cin >> dom[i].ses[j];
		}
	}
	for (int i = 0; i < dyr; i++) {
		for (int j = 0; j < dyr; j++) {
			f += dom[i].ses[j];
			cout << endl;
			cout << "Успеваймость" << dom[i].ses[j] << endl;
		}
		for (int i = 0; i < dyr; i++) {
			if (f / 5 > 4.0) {
				cout << "Ученик" << dom[i].im << endl;
				cout << "група" << dom[i].gr << endl;
			}
		}
	}
}
