#include "AnimalTraits.hpp"
#include <iostream>
#include <unordered_map>

using namespace std;

const unordered_map<std::string, AnimalTraits> AnimalsDB = {
    {"Lion", {15, 12.5f, 0.8f, 0}},
    {"Deer", {10, 14.0f, 0.5f, 0}}};