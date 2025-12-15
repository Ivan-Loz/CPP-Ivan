#include <iostream>
#include <string>
using namespace std;
class Vehicle {
public:
    string brand;
    string model;
    int year;
    Vehicle() {

    }
    Vehicle(string brand,string model,int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }
    void displayInfo() {
        cout <<"Марка" << brand << endl;
        cout << "Модель" << model << endl;
        cout << "Год выпуска" << year << endl;
    }
    void Setbrand(string brand) {
        this->brand = brand;
    }
    void Setmodel(string model) {
        this->model = model;
    }
    void SetYear(int year) {
        this->year = year;
    }
};
class Car : public Vehicle {
public:
    int numberOfDoors;
    Car(string brand,string model , int Year, int numberOfDoors)  {
        Vehicle::Setbrand(brand);
        Vehicle::Setmodel(model);
        Vehicle::SetYear(Year);
        this->numberOfDoors = numberOfDoors;
    }
    void displayInfo() {
        cout << "Марка " << brand << endl;
        cout << "Модель " << model << endl;
        cout << "Год выпуска " << year << endl;
        cout << "Кол. дверей " << numberOfDoors << endl;
    }
    
};
int main()
{
    setlocale(LC_ALL, "RU");
    Car dog1("Крутые Люди", "Крутая", 2030, 99);
    dog1.displayInfo();
   
}