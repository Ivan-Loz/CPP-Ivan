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
    Book(string inc_title, string inc_autor, int inc_Year, int inc_Pages_count);
    ~Book();
    void setTitle(string inc_title);
    void setAutor(string inc_Autor);
    void setYear(int inc_year);
    void setPages(int inc_Pages_count);
    string getTitle();
    string getAutor();
    int getYear();
    int getPages();


};

