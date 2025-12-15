#include <iostream>
#include <string>
using namespace std;
class Life {
public:
};
class nolife : public Life {
public:
    int dead(int age) {
        if (age > 13) {
            return 0;
        }
    }
};
class Fox : public Life{
    int age;
    bool v;
public:
    Fox(){}
    Fox(int age) {
        this->age = age;
    }
     

    friend nolife;
};
class rabbit : public Fox {
    int quantity;
public:
    rabbit(){}
    rabbit(int quantity) {
        this->quantity = quantity;
    }
    friend nolife;
};
class grass : public Life {
    int quantity;
public:
    grass(int quantity) {
        this->quantity = quantity;
    }
};
void sm(Life mass[]) {
 
}
int main()
{
    setlocale(LC_ALL, "RU");
    Life* mass[3];
    mass[0] = new Fox(12);
    mass[1] = new rabbit(10);
    mass[2] = new grass(4);

    
}