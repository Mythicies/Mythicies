#include "character.hpp"
#include <iostream>

Character::Character(string name, int xp, int health, int damage)
{
    this->name = name;
    this->xp = xp;
    this->health = health;
    this->damage = damage;
}

int Character::getLevel()
{
    return level;
}

int Character::getHealth()
{
    return health;
}

string Character::getName()
{
    return name;
}

void Character::attackTarget(Character &target)
{
    std::cout << name << " flails ineffectively at " << target.name << "!\n";
}

void Character::takeDamage(int amount)
{
    health -= amount;
    if (health < 0)
        health = 0;
}

bool Character::isAlive()
{
    return health > 0;
}

int Character::getDamage()
{
    return damage;
}

Character::~Character()
{
}