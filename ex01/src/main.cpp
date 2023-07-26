#include "ScavTrap.hpp"

int main()
{
	ScavTrap Dan("Dan");

	Dan.attack("enemy");
	Dan.takeDamage(10);
	Dan.beRepaired(500);
	Dan.guardGate();
	return (0);
}