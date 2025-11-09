#ifndef FILEIO_H
#define FILEIO_H

#include <vector>
#include "book.hpp"
using namespace std;

namespace FileIO
{
    void saveBooks(vector<Book> books, string &filename);
    vector<Book> loadBooks(const string &filename);
}

#endif