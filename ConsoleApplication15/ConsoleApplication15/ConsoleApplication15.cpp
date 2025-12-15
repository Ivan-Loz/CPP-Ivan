#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
    string Name;
    int prince;
    int stock;

public:
    Product(string name, int prince,int stock) {
        this->Name = name;
        this->prince = prince;
        this->stock = stock;
    }
    friend void printProductInfo(Product& a);
 
};
void printProductInfo(Product& a);


int main()
{
    setlocale(LC_ALL, "RU");
    string Name;
    int prince;
    int stock;
    cin >> Name;
    cin >> prince;
    cin >> stock;
    Product Sal(Name, prince, stock);
    printProductInfo(Sal);

}
void printProductInfo(Product& a) {
    cout << "Имя: " << a.Name << endl;
    cout << "Цена: " << a.prince << endl;
    cout << "Количество на складе: " << a.stock << endl;
}