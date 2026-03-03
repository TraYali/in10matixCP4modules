#include <iostream>

import person;
import car;

int main() {
    // Basic example
    Person p{"Steve"};
    std::cout << p.getName();

    // Example with submodules

    // Example with partitions
    Car c{{1.4}};
    std::cout << c.getEngine().getHorsePower();

    return 0;
}