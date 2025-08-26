// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/19 11:52:17 by weast             #+#    #+#             //
//   Updated: 2025/08/19 14:00:39 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include <string>


// setter
void Zombie::set_name(std::string name)
{
	_name = name;
}

Zombie::Zombie() {};

Zombie::Zombie(std::string name)
{
	set_name(name);
	std::cout << _name << " was created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " was destroyed" << std::endl;
}


void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
