#ifndef ANIMALTRAITS_HPP
#define ANIMALTRAITS_HPP

#include <unordered_map>

struct AnimalTraits
{
    float hunger;
    float energy;
    float lifespan;
    float age;
};

extern std::unordered_map<std::string, AnimalTraits> AnimalsDB;

#endif
