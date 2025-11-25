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
	Weapon sword = Weapon("sword");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club);
	jim.attack();
	club.setType("mallet");
	jim.attack();
	jim.setWeapon(sword);
	jim.attack();
	}
    return 0;
}
