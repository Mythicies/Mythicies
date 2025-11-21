#include "Entity.hpp"
#include <iostream>

Entity::Entity(string type, int birthTick, float maxSize, float size, int lifespan)
{
    // this->isAlive = isAlive;
    isAlive = true;
    setType(type);
    setBirthTick(birthTick);
    setMaxSize(maxSize);
    setSize(size);
    setLifespan(lifespan);
}

// Setters!
void Entity::setBirthTick(int currentTick)
{
    if (currentTick < 0)
    {
        throw std::invalid_argument("currentTick can not be negative!");
    }
    this->birthTick = currentTick;
}

void Entity::setAge(int age)
{
    if (age < 0)
    {
        throw std::invalid_argument("Age can not be negative!");
    }
    this->age = age;
}

void Entity::setLifespan(int lifespan)
{
    if (lifespan < 0)
    {
        throw std::invalid_argument("Lifespan can not be negative!");
    }
    this->lifespan = lifespan;
}

void Entity::setMaxSize(float maxSize)
{
    if (maxSize < getSize())
    {
        throw std::invalid_argument("Max Size can't be smaller than size!");
    }
}

void Entity::setType(string type)
{
    if (type.empty())
    {
        throw std::invalid_argument("Type can't be null");
    }
    this->type = type;
}

void Entity::setSize(float size)
{
    if (size < 0)
    {
        throw std::invalid_argument("size can't be negative!");
    }
    this->size = size;
}

// Getters!
string Entity::getType()
{
    return type;
}

bool Entity::getIsAlive()
{
    return isAlive;
}

float Entity::getSize()
{
    return size;
}

int Entity::getAge()
{
    return age;
}

float Entity::getMaxSize()
{
    return maxSize;
}

int Entity::getBirthTick()
{
    return birthTick;
}

int Entity::getLifespan()
{
    return lifespan;
}

// Functions
void Entity::birthday()
{
    age++;
}

void Entity::grow(float time)
{
    float growthFactor = growthRate * time * size * (1 - size / maxSize);
    size += growthFactor;
    if (size > maxSize)
        size = maxSize;
}

void Entity::die()
{
    isAlive = false;
}

Entity::~Entity()
{
}