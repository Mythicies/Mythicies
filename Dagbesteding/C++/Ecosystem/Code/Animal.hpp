#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "AnimalTraits.hpp"
#include "Entity.hpp"

class Animal : public Entity
{
private:
    AnimalTraits animalTraits;
    float growthRate;
    int maxSize;
    float lifespan;

public:
    Animal(string type, AnimalTraits animalTraits, int currentTick, float maxSize, float size);
    void Move();
    void Eat();
    void Rest();
    float getLifespan();
    ~Animal();
};

#endif