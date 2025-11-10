#include "Animal.hpp"
#include <iostream>
#include "AnimalTraits.hpp"
#include <unordered_map>

int main()
{
    Animal lion("Lion", speciesDB.at("Lion"));
    Animal deer("Deer", speciesDB.at("Deer"));
    cout << lion.getType() << endl;
}