#include "player.hpp"
#include "enemy.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <random>

using namespace std;

Enemy generateRandomEnemy(int playerLevel);
int getRandomInt(int min, int max);

int main()
{
    Player player("Hero", 0, 40, 15);
    int level = 1;

    while (player.isAlive())
    {
        Enemy enemy = generateRandomEnemy(level);

        std::cout << "\n=== LEVEL " << level << " ===\n";
        std::cout << "A wild " << enemy.getName() << " appears!\n";

        // Battle loop
        while (enemy.isAlive() && player.isAlive())
        {
            std::cout << "\n"
                      << player.getName() << " HP: " << player.getHealth()
                      << " | " << enemy.getName() << " HP: " << enemy.getHealth() << "\n";

            std::cout << "\nWhat will you do?\n";
            std::cout << "1. Attack\n2. Defend\n3. Run\n> ";

            int choice;
            std::cin >> choice;

            switch (choice)
            {
            case 1:
                player.attackTarget(enemy);
                break;
            case 2:
                std::cout << player.getName() << " braces for the next attack!\n";
                // maybe add defense bonus here later
                break;
            case 3:
                std::cout << player.getName() << " runs away!\n";
                return 0; // exit the game
            default:
                std::cout << "Invalid choice.\n";
                continue;
            }

            if (enemy.isAlive())
                enemy.attackTarget(player);
        }

        if (player.isAlive())
        {
            std::cout << "\nYou defeated the " << enemy.getName() << "!\n";
            level++;
            if (player.isAlive())
            {
                std::cout << "Continue to next level? (y/n): ";
                char ans;
                std::cin >> ans;
                if (ans != 'y')
                    break;
            }
        }
        else
        {
            std::cout << "\nYou were defeated...\n";
            break;
        }
    }

    return 0;
}

int getRandomInt(int min, int max)
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(min, max);
    return dist(gen);
}

Enemy generateRandomEnemy(int playerLevel)
{
    // Define possible enemy names
    std::vector<std::string> names = {"Goblin", "Skeleton", "Bandit", "Wolf"};

    std::string name = names[getRandomInt(0, names.size() - 1)];

    // Scale stats based on player level
    int baseHealth = 10 + playerLevel * 5;
    int baseDamage = 2 + playerLevel * 2;

    // Add some randomness so enemies vary slightly
    int health = baseHealth + getRandomInt(-3, 3);
    int damage = baseDamage + getRandomInt(-1, 2);

    return Enemy(name, health, health, damage);
}
