#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <string>
using namespace std;

class Entity
{
protected:
    bool isAlive;
    string type;
    int currentTick;

public:
    Entity(bool isAlive, string type, int currentTick);
    string getType();
    bool getIsAlive();
    ~Entity();
};

#endif