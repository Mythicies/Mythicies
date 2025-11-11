#ifndef PLANT_HPP
#define PLANT_HPP

#include "Entity.hpp"
#include "PlantTraits.hpp"

class Plant : public Entity
{
private:
    float growthRate;
    int maxSize;
    bool eaten;
    bool edible;
    float size;
    PlantTraits plantTraits;
    string type;
    bool isAlive;
    int lifespan;
    int age;
    float nextBirthdaySize;
    int currentTick;

public:
    Plant(string type, PlantTraits plantTraits, int currentTick);
    void grow(float);
    void die();
    float getSize();
    void birthday();
    int getAge();
    int getMaxSize();
    int getCurrentTick();
    void setCurrentTick(int currentTick);
    float getNextBirthdaySize();
    // void setNextBirthdaySize(float);
    void setAge(int age);
    int getLifespan();
    ~Plant();
};

#endif