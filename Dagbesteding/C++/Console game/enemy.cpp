#include "enemy.hpp"
#include <iostream>

Enemy::Enemy(string name, int xp, int health, int damage) : Character(name, xp, health, damage)
{
}

void Enemy::attackTarget(Character &target)
{
    int damageDealt = std::max(0, damage);
    target.takeDamage(damageDealt);

    cout << name << " attacks " << target.getName()
         << " for " << damageDealt << " damage!" << std::endl;
}

void Enemy::takeDamage(int amount)
{
    health = health - amount;
    if (health < 0)
        health = 0;
}

Enemy::~Enemy()
{
}
