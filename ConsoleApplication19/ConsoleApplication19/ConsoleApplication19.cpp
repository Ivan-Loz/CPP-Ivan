#include "Book.h"

int main()
{
    setlocale(LC_ALL, "RU");
    Book Kniga1("300 лье под водой", "Жюль Верн");
    
    
    //Kniga1.setTitle("Энциклопедия");
    cout << Kniga1.getTitle();

}

