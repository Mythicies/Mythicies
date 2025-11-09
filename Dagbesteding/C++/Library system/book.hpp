#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;

public:
    Book(string title, string author);
    string getTitle();
    string getAuthor();

    void setTitle(string &newTitle);
    void setAuthor(string &newAuthor);

    void printInfo();
};

#endif