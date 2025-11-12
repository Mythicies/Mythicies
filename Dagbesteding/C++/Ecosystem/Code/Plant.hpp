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
    int lifespan;
    int age;

public:
    Plant(string type, PlantTraits plantTraits, int birthTick);
    void grow(float);
    void die();
    float getSize();
    void birthday();
    int getAge();
    int getMaxSize();
    int getBirthTick();
    void setBirthTick(int currentTick);
    void setAge(int age);
    int getLifespan();
    ~Plant();
};

#endif