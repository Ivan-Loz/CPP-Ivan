#pragma once
#include <iostream>
#include <string>
#include "Admin.h"
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
