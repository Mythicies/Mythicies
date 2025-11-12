#include "PlantTraits.hpp"
#include <iostream>
#include <unordered_map>

using namespace std;

const unordered_map<std::string, PlantTraits> PlantsDB = {
    {"Birch", {1, 0.05f, 400, true, 15, 0}},
    {"Wildflowers", {1, 0.07f, 200, true, 12, 0}},
    {"Grass", {1, 0.01f, 100, true, 20, 0}}};