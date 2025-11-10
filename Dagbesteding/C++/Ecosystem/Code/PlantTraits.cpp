#include "PlantTraits.hpp"
#include <iostream>
#include <unordered_map>

using namespace std;

const unordered_map<std::string, PlantTraits> PlantsDB = {
    {"Berk", {1, 0.05f, 400, true, 15, 0}},
    {"Wildflowers", {1, 0.07f, 200, true, 12, 0}}};