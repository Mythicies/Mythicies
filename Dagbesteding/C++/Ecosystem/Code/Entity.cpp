#include "Entity.hpp"

Entity::Entity(bool isAlive, string type)
{
    this->isAlive = isAlive;
    this->type = type;
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