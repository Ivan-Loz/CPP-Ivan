#include <iostream>
#include <string>
using namespace std;
class Food {
private:
	string Name;
	int calories;
protected:
	int weight;
public:
	Food() {

	}
	Food(string name, int calories, int weight) {
	this->Name = name;
	this->calories = calories;
	this->weight = weight;
    }
	void displayInfo() {
		cout << "Имя продукта: " <<Name<< endl;
		cout << "Калории: " << calories << endl;
		cout << "Вес мродукта: " << weight << endl;
	}
	void SetName(string name) {
		this->Name = name;
	}
	void SetCalories(int calories) {
		this->calories = calories;
	}
	void GetName() {
		cout << "Имя продукта: " <<Name<< endl;
	}
	void GetCalories() {
		cout << "Калории: " <<calories << endl;
	}
};
class Fresht : protected Food {
protected:
	int expirationDate;
	int getExpirationDate() {
		return expirationDate;
	}
public:
	Fresht() {

	}
	Fresht(string name, int calories, int weight, int expirationDate){
		Food::SetName(name);
		Food::SetCalories(calories);
		this->weight = weight;
		this->expirationDate = expirationDate;
	}
	void displayInfo() {
		cout << endl;
		Food::GetName();
		Food::GetCalories();
		cout << "Вес мродукта: " << weight << endl;
		cout << "Срок годности: " << expirationDate<<endl;
	}
};
class Frozen : public Fresht{
public:
	Frozen() {

	}
	Frozen(string name, int calories, int weight, int expirationDate) {
		Food::SetName(name);
		Food::SetCalories(calories);
		this->weight = weight;
		this->expirationDate = expirationDate;
	}
	void displayInfo() {
		cout << endl;
		cout <<"Замороженный продукт" << endl;
		Food::GetName();
		Food::GetCalories();
		cout << "Вес мродукта: " << weight <<endl;
		cout << "Срок годности: " << expirationDate << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "RU");
	Food food1("Яблоко", 35, 40);
	food1.displayInfo();
	Fresht food2("Уран", 99, 99, 5);
	food2.displayInfo();
	Frozen food3("Вода", 5, 2, 33);
	food3.displayInfo();
}