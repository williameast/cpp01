// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/19 11:50:04 by weast             #+#    #+#             //
//   Updated: 2025/08/19 13:55:27 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:
		// constructor;
		Zombie();
		Zombie(std::string name);
		// destructor;
		~Zombie();

		void	announce(void);
		void	set_name(std::string name);
};


Zombie *newZombie(std::string name);
Zombie *zombieHorde(int N, std::string name);
void	announce_all(int N, Zombie *horde);

#endif // ZOMBIE_H
