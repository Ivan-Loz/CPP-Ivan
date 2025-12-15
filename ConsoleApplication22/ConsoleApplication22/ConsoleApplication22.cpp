#include <iostream>
#include <string>
using namespace std;
class Dish {
    string name;
    int calories;
public:
    Dish() : name("Нуль"), calories(0) {
    }
    Dish(string Name) {
        name = Name;
        calories = 0;
    }
    Dish(string Name,int calories) {
        name = Name;
        this->calories = calories;
    }
    void displayInfo() {
        cout << "Название " << name << endl;
        cout << "Калории " << calories << endl;
        cout << endl;
    }
    void getname() {
        cout << "Название " << name << endl;
    }
    void getcalori() {
        cout << "Калории " << calories << endl;
    }
    friend class OFF;
};
class Soupe : public Dish { 
public:
    Soupe(string name) : Dish(name) {

    }
    void displayInfo() {
        Dish::displayInfo();
    }
};
class Salad : public Dish {
public:
    Salad(string name) : Dish(name) {

    }
    void displayInfo() {
        Dish::displayInfo();
    }
};
class Dessert : public Dish{
    int vkus;
public:
    Dessert(int vkus) : Dish("Мамен торт", 333) {
        this->vkus = vkus;
    }
    void displayInfo() {
        Dish::displayInfo();
        cout << "Оценка вкуса " << vkus;
    }
};
class Off {
public:
    void displayInfo() {
        cout << "Название " << name << endl;
        cout << "Калории " << calories << endl;
        cout << endl;
    }
};
int main()
{
    setlocale(LC_ALL, "RU");
    
    
}