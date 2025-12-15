#include <iostream>
using namespace std;
struct date {
	int day;
	int month;
	int year;
	char mon_name[12];
};
bool da(int da) {
	if (da % 4 == 0 || (( da % 100 != 0) && (400 == 0))) {
		return true;
	}
	else
	{
		return false;
	}
 }
int main()
{
	setlocale(LC_ALL, "ru");
	int year = 2020;
	date Today = { 4,5,year,"May" };
	if (true == da(Today.year)) {
		cout << "Год высокостный" << endl;
	}
	else
	{
		cout << "Год не высокостный"<<endl;
	}
}