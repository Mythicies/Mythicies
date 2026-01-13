#include "Animal.hpp"

Animal::Animal(string type, AnimalTraits animalTraits, int birthTick, float maxSize, float size) : Entity(type, birthTick, maxSize, size, animalTraits.lifespan)
{
    this->type = type;
    this->animalTraits = animalTraits;
    this->birthTick = birthTick;
    // this->lifespan = animalTraits.lifespan;
}

void Animal::Move()
{
}

void Animal::Eat()
{
}

float Animal::getLifespan()
{
    return lifespan;
}

void Animal::Rest()
{
}

Animal::~Animal()
{
}