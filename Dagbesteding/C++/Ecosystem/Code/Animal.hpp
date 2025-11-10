#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "AnimalTraits.hpp"
#include "Entity.hpp"

class Animal : public Entity
{
private:
    AnimalTraits animalTraits;
    string type;

public:
    Animal(string type, AnimalTraits animalTraits);
    void Move();
    void Eat();
    void Rest();
    ~Animal();
};

#endif