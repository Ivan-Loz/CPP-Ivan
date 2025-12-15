#include "Book.h"

//Конструкторы
Book::Book() {}
Book::Book(string inc_title, string inc_autor, int inc_Year, int inc_Pages_count) {
    Title = inc_title;
    Autor = inc_autor;
    Year = inc_Year;
    Pages_count = inc_Pages_count;
}
Book::~Book() {

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
void Book::setPages(int inc_Pages_count) {
    Pages_count = inc_Pages_count;
}
//Геттеры
string Book::getTitle() {
    return Title;
}
string Book::getAutor() {
    return Autor;
}
int Book::getYear() {
    return Year;
}
int Book::getPages() {
    return Pages_count;
}
