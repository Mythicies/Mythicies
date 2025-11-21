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
    float maxSize;
    float size;
    int lifespan;
    int age = 0;
    float growthRate;

private:
    void setBirthTick(int currentTick);
    void setAge(int age);
    void setLifespan(int lifespan);
    void setMaxSize(float maxSize);
    void setType(string type);
    void setSize(float size);

public:
    Entity(string type, int birthTick, float maxSize, float size, int lifespan);
    string getType();
    bool getIsAlive();
    float getSize();
    int getAge();
    float getMaxSize();
    int getBirthTick();
    int getLifespan();

    void birthday();
    void grow(float time);
    void die();

    ~Entity();
};

#endif