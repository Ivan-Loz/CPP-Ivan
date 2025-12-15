#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Animal {
protected:
    string name;
    string Sound;
    string Foodtype;
public:
    virtual string getname() = 0;
    virtual string getSound() = 0;
    virtual string getFoodtype() = 0;
};
class Lion : public Animal {
    string name;
    string Sound;
    string Foodtype;
public:
    Lion(string name, string Sound,string Foodtype) : name(name), Sound(Sound) , Foodtype(Foodtype)  {}
    string  getname() override {
        return name;
    }
    string getSound() override {
        return Sound;
    }
    string getFoodtype() override {
        return Foodtype;
    }

};
class Bear : public Animal {
    string name;
    string Sound;
    string Foodtype;
public:
    Bear(string name, string Sound, string Foodtype) : name(name), Sound(Sound), Foodtype(Foodtype) {}
    string  getname() override {
        return name;
    }
    string getSound() override {
        return Sound;
    }
    string getFoodtype() override {
        return Foodtype;
    }

};
class  Elephant : public Animal {
    string name;
    string Sound;
    string Foodtype;
public:
    Elephant(string name, string Sound, string Foodtype) : name(name), Sound(Sound), Foodtype(Foodtype) {}
    string  getname() override {
        return name;
    }
    string getSound() override {
        return Sound;
    }
    string getFoodtype() override {
        return Foodtype;
    }

};
void txt(Animal* mass[], int size) {
    string path = "zoo.txt";
    ofstream fout;
    fout.open(path, ofstream::app);
    if (!fout.is_open()) {
        cout << " :(";
    }
    else
    {
        for (int i = 0; i < size; i++) {
            fout <<"Имя " << mass[i]->getname();
            fout <<" Звук "<<mass[i]->getSound();
            fout << " Тип еды " << mass[i]->getFoodtype();
            fout << "\n";
        }
    }
    fout.close();
}
int main()
{
    setlocale(LC_ALL, "RU");
    int size;
    cout << "Количество книг " << endl;
    cin >> size;
    Animal*  *mass = new Animal* [size];
    for (int i = 0; i < size; i++) {
        int animal = 0;
        string title;
        string author;
        int Year;
        cout << "Кокое Животное" << endl;
        cin >> animal;
        cout << "Имя" << endl;
        cin >> title;
        cout << "Звук зверя" << endl;
        cin >> author;
        cout << "Тип еды" << endl;
        cin >> Year;
     
    }
    txt(mass, size);
}