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

    int tick = 0;
    const int yearLength = 12;
    int newYearLength = 0;
    while (running)
    {
        int currentTick = tick;
        std::vector<Plant> plants = {
            Plant("Berk", PlantsDB.at("Berk"), currentTick),
            Plant("Wildflowers", PlantsDB.at("Wildflowers"), currentTick)};

        for (auto &plant : plants)
        {
            if (plant.getIsAlive())
            {
                plant.grow(deltaTime);
                std::cout << plant.getType() << " size: " << plant.getSize() << std::endl;
                if (tick == newYearLength)
                {
                    plant.birthday();
                    cout << plant.getAge() << endl;
                    newYearLength += yearLength;
                    cout << newYearLength << endl;
                }
                if (plant.getAge() > plant.getLifespan())
                {
                    plant.die();
                }
            }
        }
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
