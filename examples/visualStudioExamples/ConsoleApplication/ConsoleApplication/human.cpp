module;

#include <string>

module heroes.human;

Human::Human(std::string name) : Hero(name) {
    this->health = 200;
    this->mana = 0;

    this->origin = "human";
}