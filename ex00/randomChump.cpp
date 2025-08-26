// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   randomChump.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/19 12:42:04 by weast             #+#    #+#             //
//   Updated: 2025/08/19 12:43:03 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"


void	randomChump(std::string name)
{
	Zombie zombie(name);

	zombie.announce();
}
