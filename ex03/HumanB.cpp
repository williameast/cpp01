// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/19 15:56:11 by weast             #+#    #+#             //
//   Updated: 2025/11/25 16:57:57 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_name = name;
	this->_weapon = NULL;

	std::cout << _name << " spawned." << std::endl;

}
HumanB::~HumanB()
{
	std::cout << _name << " killed." << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	if (this->_weapon != NULL)
		std::cout << _name << " has dropped " << _weapon->getType() << std::endl;

	this->_weapon = &weapon;
	std::cout << _name << " has picked up a " << _weapon->getType() << std::endl;
}

void	HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with " <<  _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon!" << std::endl;
}
