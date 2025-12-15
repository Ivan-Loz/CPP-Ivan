#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    vector<int> mass1{ 5,3,2,5,5 };
    vector<int> mass2{ 1,2,3,4,5 };
    vector<int> mass3(mass1.size());
    if (mass1.size() != mass2.size()) {
        return 1;
    }
    else
    {
        for (int i = 0; i < mass1.size(); i++) {
            mass3[i] = mass1[i] + mass2[i];
        }
        for (int i = 0; i < mass1.size(); i++) {
            cout << mass3.at(i) << endl;
        }
        int r;
        cout << "Если добавить пиши 1 если убавить пиши 2 закончить програму 0" << endl;
        cin >> r;
        switch (r)
        {
        case 1: {
            while (1 == 1)
            {
                string stop;
                cout << "Чтобы стопнуть пиши stop" << endl;
                cin >> stop;
                int k;
                cout << "Какое число добавить " << endl;
                cin >> k;
                mass3.push_back(k);
                for (int i = 0; i < mass3.size(); i++) {
                    cout << mass3.at(i) << endl;
                }
                if (stop == "stop") {
                    break;
                }
            }
            break;
         }
        case 2: {
            while (1 == 1)
            {
                string stop;
                cout << "Чтобы стопнуть пиши stop" << endl;
                cin >> stop;
                mass3.pop_back();
                for (int i = 0; i < mass3.size(); i++) {
                    cout << mass3.at(i) << endl;
                }
                if (stop == "stop") {
                    break;
                }
            }
            break;
        }
        case 0: {
            cout << "Конец" << endl;
            return 0;
            break;
        }
        }
    }
}