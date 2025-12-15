#include <iostream>
#include <string>
using namespace std;
class Admin {
    int password;
    int accessLevel;
public:
    void changePassword(UserAccount& a);
    void changeAccessLevel(UserAccount& a);
};
class UserAccount
{
private:
    string Name;
    int password;
    int accessLevel;

public:
    UserAccount(string name, int password, int accessLevel) {
        this->Name = name;
        this->password = password;
        this->accessLevel = accessLevel;
    }
    friend void printUserAccountInfo(UserAccount& a);
    friend void Admin::changePassword(UserAccount& a);
    friend void Admin::changeAccessLevel(UserAccount& a);
};
void printUserAccountInfo(UserAccount& a);
int main()
{
    setlocale(LC_ALL, "RU");
    string Name;
    int password;
    int accessLevel;
    cin >> Name;
    cin >> password;
    cin >> accessLevel;
    UserAccount Petja(Name, password, accessLevel);
    printUserAccountInfo(Petja);
    Admin I;
    I.changePassword(Petja);
    I.changeAccessLevel(Petja);
}
void printUserAccountInfo(UserAccount & a) {
    cout << "Имя пользователя: " << a.Name << endl;
    cout << "Уровень доступа: " << a.accessLevel << endl;
}
void Admin::changePassword(UserAccount & a) {
    cin >> password;
    a.password = password;
}
void Admin::changeAccessLevel(UserAccount & a) {
    cin >> accessLevel;
    a.accessLevel = accessLevel;
}