#include "Entity.hpp"

Entity::Entity(string type, int birthTick)
{
    // this->isAlive = isAlive;
    isAlive = true;
    this->type = type;
    this->birthTick = birthTick;
}

string Entity::getType()
{
    return type;
}

bool Entity::getIsAlive()
{
    return isAlive;
}

Entity::~Entity()
{
}