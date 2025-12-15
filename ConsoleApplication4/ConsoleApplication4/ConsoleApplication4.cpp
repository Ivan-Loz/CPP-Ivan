#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <class T>
void bubbleSort(T a[], long size) {
	T X, g;
	for (int i = 0; i < size; i++) {
		for (int j = size - 1; j > i; j--) {
			if (a[j] < a[j - 1]) {
				X = a[j];
				a[j] = a[j- 1];
				 a[j - 1] = X;
			}
		}
	}
}
int main() {
	srand(time(NULL));
	const long SIZE = 6;
	int ar[SIZE];
	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % 100;
		cout << ar[i] << "\t";
	}
	cout << "\n\n";
	bubbleSort(ar, SIZE);
	for (int i = 0; i < SIZE; i++) {
		cout << ar[i] << "\t";
	}
	return 0;
}