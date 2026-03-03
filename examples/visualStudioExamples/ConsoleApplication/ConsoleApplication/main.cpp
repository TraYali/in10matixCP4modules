#include <iostream>

import person;
import car;
import heroes.elf;
import heroes.human;

int main() {
    // Basic example
    Person p{ "Steve" };
    std::cout << p.getName() << std::endl;

    // Example with submodules
    Elf e{ "Vex" };
    std::cout << e.getHealth() << std::endl;
    std::cout << e.getMana() << std::endl;

    Human h{ "Alyx" };
    std::cout << h.getHealth() << std::endl;
    std::cout << h.getMana() << std::endl;

    // Example with partitions
    Car c{ {1.4} };
    std::cout << c.getEngine().getHorsePower() << std::endl;

    return 0;
}