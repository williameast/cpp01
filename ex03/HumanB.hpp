// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/19 14:42:17 by weast             #+#    #+#             //
//   Updated: 2025/08/19 16:52:28 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;

	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();

	void	attack(void);
	void	setWeapon(Weapon& weapon);
};





#endif // HUMANB_H
