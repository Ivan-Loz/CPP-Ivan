#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int const rr = 5;
	string arr[rr];
	string d;
	int s = 0;
	int s1 = 0;
	for (int i = 0; i < rr; i++) {
		cout << "Введите Ф. " << endl;
		cin >> d;
        arr[i] += d ;
	}
	for (int i = 0; i < rr; i++) {
		cout << endl;
		cout << arr[i]<<endl;
	}
	for (int i = 0; i < rr; i++) {
		s1 = arr[i].length();
		if (s1 > s){
			s = s1;
		}
	}
	for (int i = 0; i < rr; i++) {
		if (arr[i].length() == s) {
			cout << endl;
			cout << arr[i] << endl;
			

		}
	}
}
