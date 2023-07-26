#include "ClapTrap.hpp"

int main()
{
	ClapTrap Dan("Dan");
	
	Dan.attack("enemy");

	int i = 0;

	while (i < 5)
	{
		Dan.takeDamage(3);
		Dan.beRepaired(1);
		i++;
	}
	return (0);
}