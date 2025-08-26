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
	std::string getType(void);

	// setters
		void setType(std::string str);
};


#endif // WEAPON_H
