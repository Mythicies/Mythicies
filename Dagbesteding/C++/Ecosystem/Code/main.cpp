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

    std::vector<Plant> plants = {
        Plant("Berk", PlantsDB.at("Berk")),
        Plant("Wildflowers", PlantsDB.at("Wildflowers"))};
    while (running)
    {
        for (auto &plant : plants)
        {
            if (plant.getIsAlive())
            {
                plant.grow(deltaTime);
                std::cout << plant.getType() << " size: " << plant.getSize() << std::endl;

                if (plant.getSize() >= plant.getNextBirthdaySize())
                {
                    plant.birthday();
                    std::cout << "Age: " << plant.getAge() << std::endl;

                    if (plant.getAge() < plant.getLifespan())
                    {
                        float newSize = plant.getNextBirthdaySize() + plant.getMaxSize() / plant.getLifespan();
                        plant.setNextBirthdaySize(newSize);
                    }
                    else
                    {
                        plant.die();
                    }
                }
            }
            // Remove dead plants
        }
        plants.erase(
            std::remove_if(plants.begin(), plants.end(),
                           [](Plant &p)
                           { return !p.getIsAlive(); }),
            plants.end());
        std::cout << "------------------------" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}