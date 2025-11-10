#ifndef ANIMALTRAITS_HPP
#define ANIMALTRAITS_HPP

#include <unordered_map>

const unordered_map<std::string, AnimalTraits> speciesDB;

struct AnimalTraits
{
    float hunger;
    float energy;
    float lifesppan;
    float age;
};

#endif
