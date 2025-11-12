#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <string>
using namespace std;

class Entity
{
protected:
    bool isAlive = true;
    string type;
    int birthTick;

public:
    Entity(string type, int birthTick);
    string getType();
    bool getIsAlive();
    ~Entity();
};

#endif