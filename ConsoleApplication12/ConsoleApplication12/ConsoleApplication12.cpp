#include "da.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	da A(5);
	da B(3);
	A = B;
 A.printprice(); 
 B.printprice();
	
}