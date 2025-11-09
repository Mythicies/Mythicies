#include "FileIO.hpp"
#include <fstream>
#include <sstream>

using namespace std;

void FileIO::saveBooks(vector<Book> books, string &filename)
{
    ofstream file(filename);
    for (auto &b : books)
    {
        file << b.getTitle() << ","
             << b.getAuthor();
    }
}

vector<Book> FileIO::loadBooks(const string &filename)
{
    vector<Book> books;
    ifstream file(filename);
    string line, title, author;

    while (getline(file, line))
    {
        stringstream ss(line);
        getline(ss, title, ',');
        getline(ss, author, ',');
        books.emplace_back(title, author);
    }
    return books;
}