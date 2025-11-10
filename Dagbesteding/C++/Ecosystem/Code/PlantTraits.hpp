#ifndef PLANTTRAITS_HPP
#define PLANTTRAITS_HPP

#include <unordered_map>

struct PlantTraits
{
    float size;
    float growthRate;
    float maxSize;
    bool isAlive;
    int lifespan;
    int age;
};

extern const std::unordered_map<std::string, PlantTraits> PlantsDB;

#endif