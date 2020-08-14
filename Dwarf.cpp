#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf (std::string n, int hp, int armor) : 
name(n),
Character(hp, armor, 4)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(5);
}


const std::string& Dwarf::getName ()
{
    return this->name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
