#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
class stud {
    string name;
    int age;
public:
    stud(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void print() {
        cout << "Имя студента " << name << endl;
        cout << "Возрост студента " << age << endl;
        cout << endl;
    }
    string getname() {
        return name;
    }
    int getage() {
        return age;
    }
};
int main()
{
    setlocale(LC_ALL, "ru");
    vector<stud> top;
    string name;
    int age;
    int r;
    while (1 == 1)
    {
        cout << "1 добавить студента,2 удалить студента, 3 показать всех студентов,4 записать в файл,5 прочитать с фаила, 0 выход" << endl;
        cin >> r;
        switch (r)
        {
        case 1: {
            cout << "Добавь" << endl;
            cin >> name;
            cin >> age;
            top.push_back(stud(name, age));
            break;
        }
        case 2: {
            cout << "Убрать" << endl;
            top.pop_back();
            break;
        }
        case 3: {
            for (int i = 0; i < top.size(); i++) {
                top[i].print();
            }
            break;
        }
        case 4: {
            string path = "myFile.txt";
            ofstream fout;
            fout.open(path, ofstream::app);
            if (!fout.is_open()) {
                cout << " :(";
            }
            else
            {
                for (int i = 0; i < top.size(); i++) {
                    fout << " Имя студента: " << top[i].getname();
                    fout << " Возрост студента: " << top[i].getage();
                    fout << "\n";
                }
            }
            fout.close();
            break;
        }
        case 5: {
            string pach = "myFile.txt";
            ifstream fin;
            fin.open(pach);
            if (!fin.is_open()) {
                cout << "ACCEES ERROR!!! 8( DANGER!! CALL 112" << endl;
            }
            else {
                cout << "File is open! WOW!" << endl;
                string str;
                while (!fin.eof()) {
                    str = " ";
                    getline(fin, str);
                    cout << str << endl;

                }
                fin.close();
            }
        }
        case 0: {
            return 1;
            break;
        }
        }
    }
}