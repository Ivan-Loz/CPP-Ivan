#include "point.h"
#include "Dyna_Arr.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int size = 3;
	int TAK[] = {3,4,8};
	int NOTAK[] = { 0,1,4,6 };
	Dyna_Arr a(size, TAK);
	Dyna_Arr b(size, NOTAK);
	bool d = a < b;
	cout << d;
}
