#include "Plant.hpp"
#include "PlantTraits.hpp"

Plant::Plant(string type, PlantTraits plantTraits, int currentTick) : Entity(isAlive, type, currentTick)
{
    this->plantTraits = plantTraits;
    this->growthRate = plantTraits.growthRate;
    this->size = plantTraits.size;
    this->maxSize = plantTraits.maxSize;
    this->isAlive = plantTraits.isAlive;
    this->lifespan = plantTraits.lifespan;
    this->age = plantTraits.age;
    nextBirthdaySize = maxSize / lifespan;
}

void Plant::grow(float time)
{
    float growthFactor = growthRate * time * size * (1 - size / maxSize);
    size += growthFactor;
    if (size > maxSize)
        size = maxSize;
}

void Plant::setNextBirthdaySize(float birthdaySize)
{
    this->nextBirthdaySize = birthdaySize;
}

void Plant::setAge(int age)
{
    this->age = age;
}

float Plant::getNextBirthdaySize()
{
    return nextBirthdaySize;
}

int Plant::getAge()
{
    return age;
}
void Plant::birthday()
{
    age++;
}

int Plant::getLifespan()
{
    return lifespan;
}

int Plant::getMaxSize()
{
    return maxSize;
}

void Plant::die()
{
    isAlive = false;
}
float Plant::getSize()
{
    return size;
}

Plant::~Plant()
{
}