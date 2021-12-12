#include "Weapon.hpp"
#include <iostream>

void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string		&Weapon::getType()
{
	const std::string &typeref = _type;
	return typeref;
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
}