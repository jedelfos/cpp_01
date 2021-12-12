#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	_weapon = 0;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if (_weapon)
		std::cout << _name << "  attacks with his " << _weapon->getType() << "\n";
	else
		std::cout << _name << "	ne peut pas attaquer" << "\n";
}
