// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/19 15:56:11 by weast             #+#    #+#             //
//   Updated: 2025/08/19 16:54:11 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_name = name;

	std::cout << _name << " spawned." << std::endl;

}
HumanB::~HumanB()
{
	std::cout << _name << " killed." << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " <<  _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon!" << std::endl;
}
