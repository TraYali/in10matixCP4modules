module;

#include <string>

export module heroes;

import person;

export class Hero : public Person {
protected:
    std::string origin;

    int health;
    int mana;

public:
    Hero(std::string name) : Person(name) {};

    int getHealth();
    int getMana();

    std::string getOrigin();
};