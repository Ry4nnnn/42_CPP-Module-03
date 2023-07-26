#include "ScavTrap.hpp"

using std::cout;
using std::endl;

ScavTrap::ScavTrap() {
	cout << "[ScavTrap] default contructor function called." << endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	cout << "[ScavTrap] " << _name << " : contructor function called." << endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) {
	cout << "[ScavTrap] " << _name << " : copy contructor function called." << endl;
	*this = scavtrap;
}

const ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap) {
	cout << "[ScavTrap] " << _name << " : copy assignment operator function called." << endl;
	this->_name = scavtrap._name;
	this->_energyPoints = scavtrap._energyPoints;
	this->_hitPoints = scavtrap._hitPoints;
	this->_attackDamage = scavtrap._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap() {
	cout << "[ScavTrap] " << _name << " : Destructor function called." << endl;
}

void ScavTrap::attack(const std::string &target) {
	if (this->_energyPoints == 0)
		cout << "[ScavTrap] " << _name << " unable to attack: " << _energyPoints << " Energy Points remaining." << endl;
	else if (this->_hitPoints == 0)
		cout << "[ScavTrap] " << _name << " unable to attack: " << _hitPoints << " Hit Points remaining." << endl;
	else
		cout << "[ScavTrap] " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << endl;
}

void ScavTrap::guardGate() {
	if (this->_hitPoints == 0)
		cout << "[ScavTrap] " << _name << " Gate keeper mode failed. " << _hitPoints << " hit points remaining."<< endl;
	else if (this->_energyPoints == 0)
		cout << "[ScavTrap] " << _name << " Gate keeper mode failed. " << _energyPoints << " energy point remaining."<< endl;
	else
	{
		this->_energyPoints -= 1;
		cout << "[ScavTrap] " << _name << " is now in Gate keeper mode. " << _energyPoints << " Energy points remaining." << endl;
	}
}