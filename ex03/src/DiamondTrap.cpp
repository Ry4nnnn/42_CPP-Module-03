#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap(std::string name) {
	cout << "DiamondTrap constructor called." << endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	this->ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &a) {
	std::cout << "DiamondTrap copy contructor called." << endl;
	*this = a;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondtrap) {
	cout << "[DiamondTrap] " << _name << " : copy assignment contructor function called." << endl;
	this->_name = diamondtrap._name;
	this->_hitPoints = diamondtrap._hitPoints;
	this->_energyPoints = diamondtrap._energyPoints;
	this->_attackDamage = diamondtrap._attackDamage;
	ClapTrap::_name = _name + "_clap_name";
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	cout << "DiamondTrap destructor called." << endl;
}

void	DiamondTrap::attack(const std::string &target) {
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	cout << "[DiamondTrap] name : " << this->_name << ", [ClapTrap] name : " << ClapTrap::_name << endl;
}
