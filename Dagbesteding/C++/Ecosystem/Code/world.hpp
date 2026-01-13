#ifndef WORLD_HPP
#define WORLD_HPP

#include "Tile.hpp"
#include <vector>

class world
{
private:
    std::vector<Tile> gridmap(5, std::vector<Tile>(5, 0));

public:
    world(/* args */);
    void BuildMap();
    ~world();
};

#endif