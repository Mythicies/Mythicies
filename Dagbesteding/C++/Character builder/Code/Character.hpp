#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include "Species.hpp"
#include "CharClass.hpp"

using namespace std;

class Character
{
protected:
    string name;
    int age;
    Species species;
    CharClass charClass;

private:
    /* data */
    // string name;
    // int age;
    // Species species;
    // CharClass charClass;
    void SetName(string Name);
    void SetAge(int Age);
    void SetSpecies(Species Species);
    void SetCharClass(CharClass CharClass);

public:
    string GetName();
    int GetAge();
    Species GetSpecies();
    CharClass GetCharClass();
    Character(string Name, int Age, Species Species, CharClass CharClass);
    ~Character();
};

#endif