#include "FragTrap.hpp"

int main()
{
	FragTrap Dan("Dan");

	Dan.attack("enemy");
	Dan.takeDamage(10);
	Dan.beRepaired(500);
	Dan.highFivesGuys();
	return (0);
}
