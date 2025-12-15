#include <iostream>
using namespace std; 
class pilmeni {
private:
	int kol = 40;
public:
	void varka(int teim, int kolich) {
		if (kolich <= kol) {
			cout << "Варка идёт" << endl;
			cout << "Времени потрачено :" << teim << endl;
			cout << "Так так вот так :" << kolich << endl;
		}
		else
		{
			cout << "Столько нету" << endl;
		}
	}


};
int main()
{
	setlocale(LC_ALL, "ru");
	int vremi, kol;
	cout << "Время варки" << endl;
	cin >> vremi;
	cout << "Количество" << endl;
	cin >> kol;
	pilmeni svinina;
	svinina.varka(vremi, kol);
}