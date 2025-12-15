#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void Throw(int Dice)
{
    switch (Dice)
    {
    case 1:
        cout << "===========" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "|    *    |" << endl;
        cout << "|         |" << endl;
        cout << "|         |" << endl;
        cout << "===========" << endl;
        break;
    case 2:
        cout << "===========" << endl;
        cout << "|         |" << endl;
        cout << "|    *    |" << endl;
        cout << "|         |" << endl;
        cout << "|    *    |" << endl;
        cout << "|         |" << endl;
        cout << "===========" << endl;
        break;
    case 3:
        cout << "===========" << endl;
        cout << "|         |" << endl;
        cout << "|  *      |" << endl;
        cout << "|    *    |" << endl;
        cout << "|      *  |" << endl;
        cout << "|         |" << endl;
        cout << "===========" << endl;
        break;
    case 4:
        cout << "===========" << endl;
        cout << "|         |" << endl;
        cout << "|  *   *  |" << endl;
        cout << "|         |" << endl;
        cout << "|  *   *  |" << endl;
        cout << "|         |" << endl;
        cout << "===========" << endl;
        break;
    case 5:
        cout << "===========" << endl;
        cout << "|         |" << endl;
        cout << "|  *   *  |" << endl;
        cout << "|    *    |" << endl;
        cout << "|  *   *  |" << endl;
        cout << "|         |" << endl;
        cout << "===========" << endl;
        break;
    case 6:
        cout << "===========" << endl;
        cout << "|         |" << endl;
        cout << "|  *   *  |" << endl;
        cout << "|  *   *  |" << endl;
        cout << "|  *   *  |" << endl;
        cout << "|         |" << endl;
        cout << "===========" << endl;
        break;
    }
}
int random()
{
    float A;
    float B;
    float r;
    A = rand() % 5 + 1;
    B = rand() % 5 + 1;
    r = A + B;
    Throw(A);
    Throw(B);
    cout << "Результат:" << r << endl;
    return r;
}
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    float set;
    float sett;
    for (int i = 0; i < 1; i++)
    {
        char A;
        cout << "Напиши S чтобы начать" << endl;
        cin >> A;
        set = random();
        sett = random();
    }
    if (set > sett)
    {
        cout << "Первы вы" << endl;
        cout <<" "<< endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "Твой бросок" << endl;
            set = random();
            cout << " " << endl;
            cout << "ПК бросает" << endl;
            sett = random();
            cout << " " << endl;
            set = set + set;
            sett = sett + sett;
        }
    }
    else;
    {
        cout << "Первый пк" << endl;
        for (int f = 0; f < 5; f++)
        {
            cout << "ПК бросает" << endl;
            sett = random();
            cout << " " << endl;
            cout << "Твой бросок" << endl;
            set = random();
            cout << " " << endl;
            set = set + set;
            sett = sett + sett;
        }

    }
    cout << "Твой результат " << set << endl;
    cout << "результат пк " << sett << endl;
    if (set > sett)
    {
        cout << "Победил ты" << endl;
    }
    else
    {
        cout << "Победил пк" << endl;
    }
    set = set / 5;
    sett = sett / 5;
    cout << "Твоё средние количество чисел " << set << endl;
    cout << "Пк средние количество чисел " << sett << endl;
}