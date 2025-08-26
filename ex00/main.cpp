#include "Zombie.hpp"
#include <iostream>

int main(void)
{

	Zombie *zombie;

	// heap allocation
	zombie = newZombie("Derrick");
	zombie->announce();
	delete zombie;

	// stack allocation?
	randomChump("Angela");
	return (0);
}
