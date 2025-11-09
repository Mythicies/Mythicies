#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
#include "character.hpp"

using namespace std;

class Player : public Character
{
private:
public:
    Player(string name, int xp, int health, int damage);
    void attackTarget(Character &target) override;
    ~Player();
};

#endif