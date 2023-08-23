#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap() {
	cout << "[DiamondTrap] Default contructor called." << endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	cout << "[DiamondTrap] " << name << " : contructor function called." << endl;
	this->ClapTrap::_name = name + "_claptrap";
	this->_name = name;
	this->_hitPoints = FragTrap::_hp;
	this->_energyPoints = ScavTrap::_ep;
	this->_attackDamage = FragTrap::_ad;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) {
	std::cout << "[DiamondTrap] " << this->_name << " : copy contructor function called." << endl;
	*this = diamondtrap;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondtrap) {
	cout << "[DiamondTrap] " << _name << " : copy assignment contructor function called." << endl;
	this->_name = diamondtrap._name;
	this->_hitPoints = diamondtrap._hitPoints;
	this->_energyPoints = diamondtrap._energyPoints;
	this->_attackDamage = diamondtrap._attackDamage;
	return (*this);
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
