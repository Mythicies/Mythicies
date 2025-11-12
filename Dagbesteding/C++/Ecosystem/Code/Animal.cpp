#include "Animal.hpp"

Animal::Animal(string type, AnimalTraits animalTraits, int birthTick) : Entity(type, birthTick)
{
    this->type = type;
    this->animalTraits = animalTraits;
    this->birthTick = birthTick;
    this->lifespan = animalTraits.lifespan;
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