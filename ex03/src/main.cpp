#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("diam");
	
	diamond.beRepaired(10);
	diamond.attack("enemy");
	diamond.guardGate();
	diamond.takeDamage(5);
	diamond.whoAmI();
}
