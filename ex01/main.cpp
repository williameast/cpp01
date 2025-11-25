#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie *horde;

	horde = zombieHorde(10000, "William");

	announce_all(10000, horde);

	delete[] horde;
	return (0);
}
