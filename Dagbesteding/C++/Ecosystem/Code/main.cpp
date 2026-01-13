#include "Animal.hpp"
#include "AnimalTraits.hpp"
#include "PlantTraits.hpp"
#include "Plant.hpp"

#include <iostream>
#include <unordered_map>
#include <string>
#include <chrono>
#include <thread>
#include <atomic>
#include <csignal>
#include <vector>
#include <algorithm>
#include <random>

std::atomic<bool> running(true);

void signalHandler(int)
{
    running = false;
    std::cout << "\nStopping simulation..." << std::endl;
}

int main()
{
    std::signal(SIGINT, signalHandler);
    const float deltaTime = 1.0f;
    int CurrentYear = 0;
    int tick = 0;
    const int yearLength = 12;
    int newYearLength = 0;

    std::vector<Plant> plants = {
        Plant("Birch", PlantsDB.at("Birch"), tick),
        Plant("Wildflowers", PlantsDB.at("Wildflowers"), tick + 5),
        Plant("Grass", PlantsDB.at("Grass"), tick + 15)};

    std::vector<Animal> animals = {
        Animal("Lion", AnimalsDB.at("Lion"), tick + 2, 80, 0),
        Animal("Lion2", AnimalsDB.at("Lion"), tick + 5, 80, 0)};
    while (running)
    {
        for (auto &animal : animals)
        {
            cout << animal.getType() << ", Lifespan: " << animal.getLifespan() << endl;
        }
        for (auto &plant : plants)
        {
            if (plant.getIsAlive())
            {
                plant.grow(deltaTime);
                std::cout << plant.getType() << " size: " << plant.getSize() << std::endl;
                if (tick == newYearLength)
                {
                    // plant.birthday();
                    // cout << plant.getAge() << endl;
                    CurrentYear++;
                    newYearLength += yearLength;
                    cout << "Year: " << CurrentYear << endl;
                    // cout << newYearLength << endl;
                }

                if (tick - plant.getBirthTick() >= 12)
                {
                    plant.birthday();
                    plant.setBirthTick(tick);
                    std::cout << "🎂 " << plant.getType() << " turned " << plant.getAge() << "!\n";
                }
                if (plant.getAge() > plant.getLifespan())
                {
                    plant.die();
                }
            }
        }
        // cout << "Tick: " << endl;
        tick++;
        plants.erase(
            std::remove_if(plants.begin(), plants.end(),
                           [](Plant &p)
                           { return !p.getIsAlive(); }),
            plants.end());
        std::cout << "------------------------" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

Animal produce_animals()
{
}