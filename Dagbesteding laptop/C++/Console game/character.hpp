#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
using namespace std;

class Character
{
protected:
    string name;
    int level, hp, health, xp, damage;

public:
    Character(string name, int xp, int health, int damage);
    ~Character();
    virtual void attackTarget(Character &target);
    virtual bool isAlive();
    virtual void takeDamage(int amount);
    int getLevel();
    int getHealth();
    string getName();
    int getDamage();
};

#endif