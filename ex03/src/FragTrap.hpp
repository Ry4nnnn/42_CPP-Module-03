#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &fragtrap);
		const FragTrap &operator=(const FragTrap &scavtrap);
		~FragTrap();
		void	highFivesGuys(void);

};

#endif
