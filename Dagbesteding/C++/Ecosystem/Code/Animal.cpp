#include "Animal.hpp"

Animal::Animal(string type, AnimalTraits animalTraits) : Entity(isAlive, type)
{
    // this->type = species;
    this->animalTraits = animalTraits;
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