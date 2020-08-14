#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin (std::string n, int hp, int armor) : 
name(n),
Character(hp, armor, 10)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(6);
}
    
const std::string& Paladin::getName ()
{
    return this->name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
