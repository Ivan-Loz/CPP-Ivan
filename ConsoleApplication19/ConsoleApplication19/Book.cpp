#include "Book.h"

//Конструкторы
Book::Book(){}
Book::Book(string inc_title, string inc_autor) {
    Title = inc_title;
    Autor = inc_autor;
}
//Сеттеры
void Book::setTitle(string inc_title) {
    Title = inc_title;
}
void Book::setAutor(string inc_autor) {
    Autor = inc_autor;
}
void Book::setYear(int inc_year) {
    Year = inc_year;
}
//Геттеры
string Book::getTitle() {
    return Title;
}
string Book::getAutor() {
    return Autor;
}
