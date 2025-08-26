#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void){
	{
	Weapon club = Weapon("Crude Spiked Club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("Spiky ball and chain");
	bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
    return 0;
}
