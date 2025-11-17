#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP
#include <iostream>
#include <string>

using namespace std;

class TextBox
{
private:
    string value;

public:
    string getValue();
    void setValue(const string &value);
    TextBox(/* args */) = default;
    explicit TextBox(const string &value);
    ~TextBox();
};

#endif