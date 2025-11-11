#include "Animal.hpp"

Animal::Animal(string type, AnimalTraits animalTraits, int currentTick) : Entity(type, currentTick)
{
    // this->type = species;
    this->animalTraits = animalTraits;
    this->currentTick = currentTick;
}

void Animal::Move()
{
}

void Animal::Eat()
{
}

void Animal::Rest()
{
}

Animal::~Animal()
{
}