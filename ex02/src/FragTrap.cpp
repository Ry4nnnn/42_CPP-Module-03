#include "FragTrap.hpp"

using std::cout;
using std::endl;

FragTrap::FragTrap() {
	cout << "[FragTrap] default constructor function called." << endl;
}

FragTrap::FragTrap(std::string name) {
	cout << "[FragTrap] " << name << " : contructor function called." << endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragtrap) {
	cout << "[FragTrap] " << _name << " : copy contructor function called." << endl;
	*this = fragtrap;
}

const FragTrap &FragTrap::operator=(const FragTrap &fragtrap) {
	cout << "[FragTrap] " << _name << " : copy assignment operator called." << endl;
	this->_name = fragtrap._name;
	this->_hitPoints = fragtrap._hitPoints;
	this->_energyPoints = fragtrap._energyPoints;
	this->_attackDamage = fragtrap._attackDamage;
	return (*this);
}

FragTrap::~FragTrap() {
	cout << "[FragTrap] " << _name << " : Destructor function called." << endl;
}

void	FragTrap::highFivesGuys() {
	cout << "[FragTrap] " << _name << " : High Five Guys!" << endl;
}
