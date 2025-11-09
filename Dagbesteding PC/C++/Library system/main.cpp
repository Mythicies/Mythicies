#include "book.hpp"
#include "FileIO.hpp"

#include <vector>
#include <iostream>

using namespace std;

void searchByAuthor(const vector<Book> &books, const string &query);

int main()
{
    vector<Book> books = FileIO::loadBooks("books.txt");
    searchByAuthor(books, "J.R.R. Tolkien");
    for (auto &book : books)
    {
        book.printInfo();
    }
}

void searchByAuthor(const std::vector<Book> &books, const std::string &query)
{
    for (auto book : books)
    {
        if (book.getAuthor().find(query) != std::string::npos)
        {
            book.printInfo();
        }
    }
}