// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/19 15:56:11 by weast             #+#    #+#             //
//   Updated: 2025/08/19 16:21:53 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	this->_name = name;

	this->_weapon = weapon;
	std::cout << _name << " spawned." << std::endl;
}
HumanA::~HumanA()
{
	std::cout << _name << " killed." << std::endl;
}


void	HumanA::attack()
{
	std::cout << _name << " attacks with their " <<  _weapon.getType() << std::endl;
}
