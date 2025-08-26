// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   zombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/19 12:47:39 by weast             #+#    #+#             //
//   Updated: 2025/08/19 13:57:16 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
  if (N <= 0)
    return NULL;

  Zombie *horde = new Zombie[N];

  for (int i = 0; i < N; i++)
	  horde[i].set_name(name);

    return horde;
}

void	announce_all(int N, Zombie *horde)
{
	for (int i = 0; i < N; i++)
		horde[i].announce();
}
