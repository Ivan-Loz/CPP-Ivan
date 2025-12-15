#include <iostream>
#include <string>
using namespace std;
class Animal {
public:
	virtual void makeSound() {
		cout << "Что-то говорит" << endl;
		cout << endl;
	}
};
class Dog : public Animal {
public:
	void makeSound() override {
		cout << "Гав Гав Гав" << endl;
		cout << endl;
	}
};
class Cat : public Animal {
public:
	void makeSound() override {
		cout << "Мяу Мяу Мяу" << endl;
		cout << endl;
	}
};
class Cow : public Animal {
public:
	void makeSound() override {
		cout << "Му  МУ МУ" << endl;
		cout << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "RU");
	Animal Obj1;
	Dog Obj2;
	Cat Obj3;
	Cow Obj4;
	Animal* animal[] = {new Dog(),new Cat,new Cow};
	for (Animal* animal : animal) {
		animal->makeSound();
	}
	for (Animal* animal : animal) {
		delete animal;
	}
}