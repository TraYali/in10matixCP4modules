module;

#include <string>

module heroes.goblin;

Goblin::Goblin(std::string name) : Hero(name) {
    this->health = 50;
    this->mana = 10;

    this->origin = "goblin";
}