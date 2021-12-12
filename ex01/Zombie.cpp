#include <iostream>
#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << _name << "  BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}

Zombie::Zombie(std::string name)
{
	set_name(name);
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << _name << " Destroyed\n";
}