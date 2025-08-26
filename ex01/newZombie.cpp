// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   newZombie.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/19 12:35:31 by weast             #+#    #+#             //
//   Updated: 2025/08/19 13:58:55 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include <new>

Zombie *newZombie(std::string name)
{
	return new Zombie(name);
}
