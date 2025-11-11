#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <string>
using namespace std;

class Entity
{
protected:
    bool isAlive = true;
    string type;
    int currentTick;

public:
    Entity(string type, int currentTick);
    string getType();
    bool getIsAlive();
    ~Entity();
};

#endif