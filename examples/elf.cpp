module;

#include <string>

module heroes.elf;

Elf::Elf(std::string name) : Hero(name) {
    this->health = 75;
    this->mana = 150;

    this->origin =  "elf";
}