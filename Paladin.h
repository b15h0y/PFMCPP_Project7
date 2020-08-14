#pragma once
#include "Character.h"

struct Paladin : Character
{

    Paladin(std::string n, int a, int h);

    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
    
};
