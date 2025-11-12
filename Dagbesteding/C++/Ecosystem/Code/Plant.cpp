#include "Plant.hpp"
#include "PlantTraits.hpp"

Plant::Plant(string type, PlantTraits plantTraits, int birthTick) : Entity(type, birthTick)
{
    this->plantTraits = plantTraits;
    this->growthRate = plantTraits.growthRate;
    this->size = plantTraits.size;
    this->maxSize = plantTraits.maxSize;
    this->isAlive = plantTraits.isAlive;
    this->lifespan = plantTraits.lifespan;
    this->age = plantTraits.age;
    this->type = type;
    this->birthTick = birthTick;
}

int Plant::getBirthTick()
{
    return birthTick;
}

void Plant::setBirthTick(int currentTick)
{
    this->birthTick = currentTick;
}

void Plant::grow(float time)
{
    float growthFactor = growthRate * time * size * (1 - size / maxSize);
    size += growthFactor;
    if (size > maxSize)
        size = maxSize;
}

void Plant::setAge(int age)
{
    this->age = age;
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