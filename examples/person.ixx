export module Person;

export class Person {
private:
  std::string name;

public:
  Person(const std::string &name);

  std::string getName();
};