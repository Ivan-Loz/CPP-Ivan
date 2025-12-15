#include <iostream>
#include <string.h>
using namespace std;
class Robot {
public:
    int power;
    string caseMaterials;
    string typeOfSensors;
    void pocazi() {
        cout << "мощность: " << power << ",материал корпуса: " << caseMaterials << ",типе сенсоров: " << typeOfSensors << endl;
    }
};
class RobotBuilder {
public:
    virtual void power() = 0;
    virtual void caseMaterials() = 0;
    virtual void typeOfSensors() = 0;
    virtual Robot* getProduct() = 0;
};
class IndustrialRobotBuilder : public RobotBuilder {
private:
    Robot* product;

public:
    IndustrialRobotBuilder() {
        product = new Robot();
    }

    void power() override {
        product->power = 500;
    }

    void caseMaterials() override {
        product->caseMaterials = "Крепкие";
    }

    void typeOfSensors() override {
        product->typeOfSensors = "Робочие";
    }

    Robot* getProduct() override {
        return product;
    }
};
class DomesticRobotBuilder : public RobotBuilder {
private:
    Robot* product;

public:
    DomesticRobotBuilder() {
        product = new Robot();
    }

    void power() override {
        product->power = 100;
    }

    void caseMaterials() override {
        product->caseMaterials = "Дешман";
    }

    void typeOfSensors() override {
        product->typeOfSensors = "Для скана хаты";
    }

    Robot* getProduct() override {
        return product;
    }
};
class RobotDirector {
private:
    RobotBuilder* builder;

public:
    void setBuilder(RobotBuilder* b) {
        builder = b;
    }

    void construct() {
        builder->power();
        builder->caseMaterials();
        builder->typeOfSensors();
    }
};
int main() {
    int robot = 0;
    setlocale(LC_ALL, "ru");
    RobotDirector director;
    IndustrialRobotBuilder builder;
    DomesticRobotBuilder builder1;
    cout << "1 это робот промышленного использования , 2 это рлбот домашнего использования" << endl;
    cin >> robot;
    switch (robot)
    {
    case(1): {
        director.setBuilder(&builder);
        director.construct();
        Robot* Robot = builder.getProduct();
        Robot->pocazi();
        break;
    }
    case(2): {
        director.setBuilder(&builder1);
        director.construct();
        Robot* Robot = builder1.getProduct();
        Robot->pocazi();
        break;
    }
    }
}