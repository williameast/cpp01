// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/08/19 14:42:17 by weast             #+#    #+#             //
//   Updated: 2025/08/19 16:18:55 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon& _weapon;

	public:
		HumanA();
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

	void	attack(void);
};





#endif // HUMANA_H
