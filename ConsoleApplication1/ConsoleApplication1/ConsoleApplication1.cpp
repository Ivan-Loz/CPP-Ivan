#include <iostream>
using namespace std;
int main()
{
    int A;
    for (int i = 1; i < 10; i++) {
        cout << i << "\t";
        for (int j = 1; j < 10; j++) {
            cout << i << "*" << j << "=" << i * j << "\t";
        }
        cout << endl;
    }
    cin >> A;
    return 0;
}