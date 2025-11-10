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
    int lifespan;
    int age;
    float nextBirthdaySize;

public:
    Plant(string type, PlantTraits plantTraits);
    void grow(float);
    void die();
    float getSize();
    void birthday();
    int getAge();
    int getMaxSize();
    float getNextBirthdaySize();
    void setNextBirthdaySize(float);
    void setAge(int age);
    int getLifespan();
    ~Plant();
};

#endif