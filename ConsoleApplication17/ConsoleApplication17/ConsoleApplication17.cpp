#include <iostream>
#include <string>
using namespace std;
class Car { 
public:
    class Engine {
        string type;
        int power;
    public:
        Engine(string tupe, int power) {
            this->type = tupe;
            this->power = power;
        }
        string getTupe() {
            return this->type;
        }
        int getPower() {
            return power;
        }
    };

    Car(string mod,int Year, string tupe,int power) : motor(tupe, power) {
        this->model = mod;
        this->Year = Year;
        
    }
    void printInfo() {
        cout << "Модель " << model << endl;
        cout << "Год выпуска " << Year << endl;
        cout << "Тип двиготеля " << motor.getTupe() << endl;
        cout << "Мощность двигателя в лошадиных силах " << motor.getPower() << endl;
    }
    Engine motor;
private:
    string model;
    int Year;
};
int main() {
    setlocale(LC_ALL, "RU");
    Car avto1("ООО",1999,"Электро", 30);
    avto1.printInfo();
    
}