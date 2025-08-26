// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/19 11:50:04 by weast             #+#    #+#             //
//   Updated: 2025/08/19 12:58:13 by weast            ###   ########.fr       //
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
void	randomChump(std::string name);

#endif // ZOMBIE_H
