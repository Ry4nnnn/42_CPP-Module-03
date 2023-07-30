#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap() {
	cout << "[DiamondTrap] Default contructor called." << endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	cout << "[DiamondTrap] " << name << " : contructor function called." << endl;
}


DiamondTrap::~DiamondTrap() {
	cout << "[DiamondTrap] " << _name << " : destructor function called." << endl;
}

void	DiamondTrap::attack(const std::string &target) {
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	cout << "[DiamondTrap] name : " << _name << "[ClapTrap] name : " << ClapTrap::_name << endl;
}
