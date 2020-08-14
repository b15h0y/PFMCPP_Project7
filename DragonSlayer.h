#pragma once

#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    std::unique_ptr<AttackItem> attackItem {new AttackItem()};

    DragonSlayer(std::string n, int a, int h);
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
        
    private:
        const std::string name;
    
};
