#include <time.h>
#pragma once
class Dyna_Arr
{
	int* arr;
	int size;
public:
	Dyna_Arr(int size, int* other_arr) :size(size) {
		this->arr = new int[size];
		for (int i = 0; i < size; i++) {
			this->arr[i] = other_arr[i];
		}
	}
	~Dyna_Arr() {
		delete[] this->arr;
	}
	bool operator==(const Dyna_Arr& other) {
		for (int i = 0; i < size; i++) {
			return  (this->arr[i] == other.arr[i]);
		}
		return  (this->size == other.size);
	}
	bool operator!=(const Dyna_Arr& other) {
		for (int i = 0; i < size; i++) {
			return  (this->arr[i] != other.arr[i]);
		}
	}
	bool operator >(const Dyna_Arr& other) {
		for (int i = 0; i < size; i++) {
			return  (this->arr[i] > other.arr[i] );
		}
	}
	bool operator <(const Dyna_Arr& other) {
		for (int i = 0; i < size; i++) {
			return  (this->arr[i] < other.arr[i]);
		}
	}
	bool operator >=(const Dyna_Arr& other) {
		for (int i = 0; i < size; i++) {
			return (*this == other || *this > other);
		}
	}
	bool operator <=(const Dyna_Arr& other) {
		for (int i = 0; i < size; i++) {
			return (*this == other || *this < other);
		}
	}
};

