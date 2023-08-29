#include "FragTrap.hpp"

using std::cout;
using std::endl;

FragTrap::FragTrap() {
	cout << "FragTrap constructor called." << endl;
	this->_name = "undefined";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) {
	cout << "FragTrap string constructor called." << endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragtrap) {
	cout << "FragTrap copy constructor called." << endl;
	*this = fragtrap;
}

const FragTrap &FragTrap::operator=(const FragTrap &fragtrap) {
	cout << "FragTrap copy assignment operator called." << endl;
	this->_name = fragtrap._name;
	this->_hitPoints = fragtrap._hitPoints;
	this->_energyPoints = fragtrap._energyPoints;
	this->_attackDamage = fragtrap._attackDamage;
	return (*this);
}

FragTrap::~FragTrap() {
	cout << "FragTrap destructor called." << endl;
}

void	FragTrap::highFivesGuys() {
	cout << "[FragTrap] " << _name << " : High Five Guys!" << endl;
}
