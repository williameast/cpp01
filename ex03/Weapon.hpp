// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/12/02 10:40:55 by weast             #+#    #+#             //
//   Updated: 2025/12/02 10:40:59 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

	// getters
	const std::string& getType(void);

	// setters
		void setType(std::string str);
};


#endif // WEAPON_H
