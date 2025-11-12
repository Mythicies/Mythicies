#include "AnimalTraits.hpp"
#include <iostream>
#include <unordered_map>
#include <random>

using namespace std;

float randomLifespan(int min, int max)
{
    static std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(min, max);
    return static_cast<float>(dist(rng));
}

unordered_map<std::string, AnimalTraits> AnimalsDB = {
    {"Lion", {15, 12.5f, randomLifespan(8, 16), 0}},
    {"Deer", {10, 14.0f, randomLifespan(2, 5), 0}}};
