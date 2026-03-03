module;

#include <string>

export module heroes.goblin;

export import heroes;

export class Goblin : public Hero {
public:
    Goblin(std::string name);
};