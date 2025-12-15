#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void get(string pach) {
    ifstream v2;
    v2.open(pach);
    if (!v2.is_open()) {
        cout << "ACCEES ERROR!!! 8( DANGER!! CALL 112" << endl;
    }
    else {
        cout << "File is open! WOW!" << endl;
        char ch;
        while (v2.get(ch)) {
            cout << ch;
        }
        v2.close();
    }

}
void eof(string pach) {
    ifstream fin;
    fin.open(pach);
    if (!fin.is_open()) {
        cout << "ACCEES ERROR!!! 8( DANGER!! CALL 112" << endl;
    }
    else {
        cout << "File is open! WOW!" << endl;
        string str;
        while (!fin.eof()) {
            str = "";
            fin >> str;
            cout << str << endl;
        }
        fin.close();
    }

}
void getlin(string pach) {
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
int main()
{
    setlocale(LC_ALL, "RU");
    string path = "MyFile.txt";
    /*ofstream fout;
    fout.open(path, ofstream::app);

    if (!fout.is_open()) {
        cout << "ACCEES ERROR!!! 8( " << endl;
    }
    else {
        for (int i = 0; i < 4; i++)
        {
            cout << "input data: " << endl;
            int a;
            cin >> a;
            fout << a;
            fout << "\n";
        }

        fout << "\n";

    }
    fout.close();*/
    int DA = 0;
    cout << "Выбери способ вывода 1(get), 2(eof), 3(getlin)" << endl; 
    cin >> DA;
    switch (DA)
    {
    case(1): {
        get(path);
        break;
    }
    case(2): {
        eof(path);
        break;
    }
    case(3):
        getlin(path);
        break;
    }
}