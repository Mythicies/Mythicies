#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "character.hpp"

class Enemy : public Character
{
private:
    /* data */
public:
    Enemy(string name, int xp, int health, int damage);
    void takeDamage(int amount) override;
    void attackTarget(Character &target) override;
    ~Enemy();
};

#endif