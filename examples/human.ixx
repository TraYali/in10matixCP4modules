module;

#include <string>

export module heroes.human;

export import heroes;

export class Human : public Hero {
    public:
    Human(std::string name);
};