#ifndef ZOMBIES_HPP
#define ZOMBIES_HPP
#include <iostream>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void    announce();

    private:
        std::string _name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif