#include "Entity.hpp"

Entity::Entity(string type, int currentTick)
{
    // this->isAlive = isAlive;
    isAlive = true;
    this->type = type;
    this->currentTick = currentTick;
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