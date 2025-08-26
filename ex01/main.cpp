#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie *horde;

	horde = zombieHorde(100, "William");

	announce_all(100, horde);

	delete[] horde;
	return (0);
}
