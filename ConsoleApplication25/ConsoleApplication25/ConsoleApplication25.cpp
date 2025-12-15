#include <iostream>
#include <string>
using namespace std;
class Product {
public:
    virtual void printInfo() {

    }
    virtual int calculatePrice(int col) = 0;
protected:
    string name;
};
class Book : public Product {
    int st;
    string name;
    string Author;
    int price = 300;
public:
    Book() {

    }
    Book(string name, string Author, int st) {
        this->name = name;
        this->Author = Author;
        this->st = st;
    }
    void printInfo() override {
        cout << "Название книги: " << name << endl;
        cout << "Автор: " <<Author<< endl;
        cout << "Кол. ст. " << st << endl;
        cout << "Цена: " << price << endl;
    }
    int calculatePrice(int col) override {
        for (int i = 1; i < col; i++) {
            price = price + price;
        }
        return price;
    }
};
class CD : public Product {
    int Place;
    string Name;
    int price = 250;
public:
    CD(string name,int Place){
        this->Name = name;
        this->Place = Place;
    }
    void printInfo() override {
        cout << "Название: " << Name << endl;
        cout << "Размер: " << Place << endl;
        cout << "Цена: " << price << endl;
    }
    int calculatePrice(int col) override {
        for (int i = 1; i < col; i++) {
            price = price + price;
        }
        return price;
    }
};
class DVD : public Product {
    string company;
    int price = 500;
public:
    DVD(string com) {
        company = com;
    }
    void printInfo() override {
        cout << "Фирма: " << company << endl;
        cout << "Цена: " << price << endl;
    }
    int calculatePrice(int col) override {
        for (int i = 1; i < col; i++) {
            price = price + price;
        }
        return price;
    }
};
int main()
{
    setlocale(LC_ALL, "RU");
    Product* mass[5];
    mass[0] = new Book("Welcome aboard, captain", "Иван", 999);
    mass[1] = new CD("E", 300);
    mass[2] = new DVD("ДАААА");
    mass[3] = new Book("Welcome aboard", "Feerma", 99);
    mass[4] = new CD("Y", 110);
    for (int i = 0; i < 5; i++) {
        mass[i]->calculatePrice(1);
        mass[i]->printInfo();
        cout << endl;
    }
}