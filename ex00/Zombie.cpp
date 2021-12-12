#include <iostream>
#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << _name << "  BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << " Destroyed.\n";
}