#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &diamondTrap);
		DiamondTrap &operator=(const DiamondTrap &diamondtrap);
		~DiamondTrap();
		void	attack(const std::string& target);
		void	whoAmI();

	private:
		std::string _name;
};

#endif
