module;

#include <string>

module person;

Person::Person(const std::string& name) { this->name = name; }

std::string Person::getName() { return this->name; }