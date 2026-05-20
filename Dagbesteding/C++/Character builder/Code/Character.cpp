#include "Character.hpp"

#include <iostream>
#include <string>

Character::Character(string Name, int Age, Species Species, CharClass CharClass)
{
    SetName(Name);
    SetAge(Age);
    SetSpecies(Species);
    SetCharClass(CharClass);
}

string Character::GetName()
{
    return name;
}

int Character::GetAge()
{
    return age;
}

Species Character::GetSpecies()
{
    return species;
}

CharClass Character::GetCharClass()
{
    return charClass;
}

void Character::SetName(string Name)
{
    if (Name.empty())
    {
        throw std::invalid_argument("Name can't be Empty!");
    }
    this->name = Name;
}

void Character::SetAge(int Age)
{
    if (age < 0)
    {
        throw std::invalid_argument("Age can't be lower than 0!");
    }
    this->age = Age;
}

void Character::SetSpecies(Species Species)
{
    if (Species < Species::Dwarf || Species >= Species::Count)
    {
        throw std::invalid_argument("Invalid Species value!");
    }
    this->species = Species;
}

void Character::SetCharClass(CharClass CharClass)
{
    if (CharClass < CharClass::Barbarian || CharClass >= CharClass::Count)
    {
        throw std::invalid_argument("Invalid CharacterClass value!");
    }
    this->charClass = CharClass;
}

Character::~Character()
{
}
