module;

#include <string>

export module heroes.elf;

export import heroes;

export class Elf : public Hero {
public:
    Elf(std::string name);
};