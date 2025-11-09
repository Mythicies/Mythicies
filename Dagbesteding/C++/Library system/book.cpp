#include "book.hpp"

#include <iostream>
#include <string>

using namespace std;

Book::Book(string title, string author) : title(title), author(author) {}

string Book::getTitle() { return title; }
string Book::getAuthor() { return author; }

void Book::setTitle(string &newTitle) { title = newTitle; }
void Book::setAuthor(string &newAuthor) { title = newAuthor; }

void Book::printInfo()
{
    cout << title << ", " << author << "\n";
}