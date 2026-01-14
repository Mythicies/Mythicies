#include "AnimalTraits.hpp"
#include <iostream>
#include <unordered_map>
#include <random>
#include <chrono>

using namespace std;

// float randomLifespan(int min, int max)
// {
//     // std::mt19937 rng(std::random_device{}());
//     // std::uniform_int_distribution<int> dist(min, max);
//     // return static_cast<float>(dist(rng)); // static van RNG weghalen en ipv random device de huidige tijd als seed gebruiken. Time since epoch
//     std::mt19937 rng(
//         std::chrono::high_resolution_clock::now()
//             .time_since_epoch()
//             .count());
//     // auto seed = std::chrono::high_resolution_clock::now()
//     //                 .time_since_epoch()
//     //                 .count();
//     std::uniform_real_distribution<float> dist(min, max);
//     return dist(rng);
// }

// unordered_map<std::string, AnimalTraits> AnimalsDB = {
//     {"Lion", {15, 12.5f, randomLifespan(8, 16), 0}},
//     {"Deer", {10, 14.0f, randomLifespan(2, 5), 0}}};
