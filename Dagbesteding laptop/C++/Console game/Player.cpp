#include "player.hpp"
#include <iostream>

Player::Player(string name, int xp, int health, int damage) : Character(name, xp, health, damage)
{
}
void Player::attackTarget(Character &target)
{
    int damageDealt = std::max(0, damage);
    target.takeDamage(damageDealt);

    cout << name << " attacks " << target.getName()
         << " for " << damageDealt << " damage!" << std::endl;
}

Player::~Player()
{
}