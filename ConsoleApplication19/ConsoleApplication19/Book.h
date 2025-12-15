#include <iostream>
#include <string>
#pragma once
using namespace std;

class Book
{
    string Title;
    string Autor;
    int Year;
    int Pages_count;
public:
    Book();
    Book(string inc_title, string inc_autor);
    void setTitle(string inc_title);
    void setAutor(string inc_Autor);
    void setYear(int inc_year);
    void setPages();
    string getTitle();
    string getAutor();
    void getYear();
    void getPages();
   
};

