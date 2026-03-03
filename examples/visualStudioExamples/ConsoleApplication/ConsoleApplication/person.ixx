module;

#include <string>

export module person;

export class Person {
protected:
    std::string name;

public:
    Person(const std::string& name);

    std::string getName();
};