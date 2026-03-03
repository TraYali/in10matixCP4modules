module;

#include <string>

module heroes;

int Hero::getHealth() { return this->health; }
int Hero::getMana() { return this->mana; }
std::string Hero::getOrigin() { return this->origin; }