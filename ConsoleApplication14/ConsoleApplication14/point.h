#include <iostream>
#pragma once
using namespace std;
class point
{
	int x, y;
public:
	point() : x(0),y(0){}
	point(int x,int y) : x(x), y(y) {}
	point operator +=(const point& other) {
		point temp(0, 0);
		temp.x = this->x += other.x;
		temp.y = this->y += other.y;
		return *this;
	}
	point operator -=(const point& other) {
		point temp(0, 0);
		temp.x = this->x -= other.x;
		temp.y = this->y -= other.y;
		return *this;
	}
	bool operator==(const point& other) {
		return  (this->x == other.x && this->y == other.y);
	}
	bool operator!=(const point& other) {
		return  !(this->x == other.x && this->y == other.y);
	}	
	bool operator >(const point& other) {
		return  (this->x > other.x && this->y > other.y);
	}
	bool operator <(const point& other) {
		return  (this->x < other.x && this->y < other.y);
	}
	bool operator >=(const point& other) {
		return (*this == other || *this > other);
	}
	bool operator <=(const point& other) {
		return (*this == other || *this < other);
	}
};

