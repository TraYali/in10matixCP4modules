module;

#include <string>

export module person;

export class Person {
private:
  std::string name;

public:
  Person(const std::string &name);

  std::string getName();
};