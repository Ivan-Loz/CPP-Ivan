#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class slovko {
public:
    string title;
    string author;
    int year;
    slovko() {
        this->title = "NN";
        this->author = "NN";
        this->year = -1;
    }
    slovko(string x, string y, int z) {
        this->title = x;
        this->author = y;
        this->year = z;
    }
    void Print() {
        cout << "Название книги: " << title << endl;
        cout << "Автор книги: " << author << endl;
        cout << "Год выпуска книги: " << year << endl;
    }
    string  getTitle()  {
        return title;
    }
    string getAuthor()  {
        return author;
    }
    int getYear()  {
        return year;
    }
};
void txt(slovko* mass[], int size) {
    string path = "myFile.txt";
    ofstream fout;
    fout.open(path, ofstream::app);
    if (!fout.is_open()) {
        cout << " :(";
    }
    else
    {
        for (int i = 0; i < size; i++) {
            fout << " Название книги: " << mass[i]->getTitle();
            fout << " Автор книги: " << mass[i]->getAuthor();
            fout << " Год выпуска книги: " << mass[i]->getYear();
            fout << "\n";
        }
    }
    fout.close();
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
    setlocale(LC_ALL, "ru");
    string path = "myFile.txt";
    int  size;
    string slo;
    while (1 == 1) {
        cout << "Выберите количество книг или напеши 0 и узнай список без добавления" << endl;
        cin >> size;
        if (size == 0) {
            getlin(path);
            break;
        }
        else {
            slovko** mass = new slovko * [size];
            for (int i = 0; i < size; i++) {
                string title;
                string author;
                int Year;
                cout << "Название книги " << endl;
                cin >> title;
                cout << "Автор книги " << endl;
                cin >> author;
                cout << "Год выпуска книги " << endl;
                cin >> Year;
                mass[i] = new slovko(title, author, Year);
            }
            txt(mass, size);
            getlin(path);
            cout << "Добавить ещё книгу?" << endl;
            cin >> slo;
            if (slo == "Da") {}
            else if (slo == "Net") {
                break;
            }
            else
            {
                cout << "Ошибка" << endl;
                break;
            }
        }
    }
}