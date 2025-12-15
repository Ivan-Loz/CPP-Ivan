#include <iostream>
using namespace std;
bool god(int a)
{
	if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0)) {
		return 1;
	}
	else
	{
		return 0;
	}
}
int days(int a, int b)
{
	switch (a)
	{
	case (1):
		return 31;
		break;
	}
	switch (a)
	{
	case (2):
		if (god(b) == true)
		{
			return 29;
		}
		else
		{
			return 28;
		}
		break;
	}
	switch (a)
	{
	case (3):
		return 31;
		break;
	}
	switch (a)
	{
	case (4):
		return 30;
		break;
	}
	switch (a)
	{
	case (5):
		return 31;
		break;
	}
	switch (a)
	{
	case (6):
		return 30;
		break;
	}
	switch (a)
	{
	case (7):
		return 31;
		break;
	}
	switch (a)
	{
	case (8):
		return 31;
		break;
	}
	switch (a)
	{
	case (9):
		return 30;
		break;
	}
	switch (a)
	{
	case (10):
		return 31;
		break;
	}
	switch (a)
	{
	case (11):
		return 30;
		break;
	}
	switch (a)
	{
	case (12):
		return 31;
		break;
	}

}
bool ret(int a, int b, int c)
{
	int x;
	x = days(a, b);
	if (c == x)
	{
		return 1;
	}
	else;
	{
		return 0;
	}
	if ((a > 12) && (a < 1))
	{
		return 0;
	}
	else;
	{
		return 1;
	}
}
int main()
{
    setlocale(LC_ALL, "ru");
    int A;
	int B;
	int C;
	cout << "Месяц"<<endl;
	cin >> A;
	cout << "Год"<<endl;
	cin >> B;
	cout << "Дени"<< endl;
	cin >> C;
	if (ret (A, B , C)) {
		cout << "ДА";
	}
	else {
		cout << "НЕТ";
	}
}