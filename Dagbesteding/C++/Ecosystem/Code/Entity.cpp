#include "Entity.hpp"

Entity::Entity(bool isAlive, string type, int currentTick)
{
    this->isAlive = isAlive;
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