#include <iostream>
#include <string>
#pragma once
using namespace std;
class da
{
	int size;
	double* price;
public:
	da(int size) {
		this->size = size;
		this->price = new double[size];
		for (int i = 0; i < size; i++) {
			this->price[i] = 25 * (3 + i);
		}
	}
	da(const da& NO) {
		for (int i = 0; i < size; i++) {
			this->size = NO.size;
			this->price = NO.price;
		}
	}
	void printprice() {
		for (int i = 0; i < size; i++) {
			cout <<"Число: "<< this->price[i] << endl;
		}
		cout << "Конец" << endl;
	}
	~da() {
		delete[] price;
	}
	void operator= (const da& NO) {
		if (this->price != nullptr) {
			delete[] this->price;
		}
		this->size = NO.size;
		this->price = new double[NO.size];
		for (int i = 0; i < NO.size; i++) {
			this->price[i] = NO.price[i];
		}
		
	}
	
};

