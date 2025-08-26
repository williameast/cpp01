#include "Weapon.hpp"


Weapon::Weapon() {};
Weapon::~Weapon() {};


void	Weapon::setType(std::string str)
{
	this->type = str;

}

Weapon::Weapon(std::string type)
{
	setType(type);
}

std::string	Weapon::getType(void)
{
	return(this->type);
}
