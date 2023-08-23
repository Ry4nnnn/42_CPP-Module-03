/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:02:02 by welim             #+#    #+#             */
/*   Updated: 2023/07/31 16:18:33 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

using std::cout;
using std::endl;

ClapTrap::ClapTrap() {
	cout << "[ClapTrap] Default Contructor Function Called" << endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	cout << "[ClapTrap] " << _name << " : Contructor Function Called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) {
	cout << "[ClapTrap] " << _name << " : Copy Contructor Function Called" << endl;
	*this = claptrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap) {
	cout << "[ClapTrap] " << _name << " : Copy Assignment Contructor Function Called" << endl;
	this->_name = claptrap._name;
	this->_hitPoints = claptrap._hitPoints;
	this->_energyPoints = claptrap._energyPoints;
	this->_attackDamage = claptrap._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	cout << "[ClapTrap] " << _name << " : Destructor Function Called" << endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints == 0)
		cout << "[ClapTrap] " << _name << " unable to attack: " << _energyPoints << " Energy Points remaining." << endl;
	else if (this->_hitPoints == 0)
		cout << "[ClapTrap] " << _name << " unable to attack: " << _hitPoints << " Hit Points remaining." << endl;
	else
		cout << "[ClapTrap] " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0)
		cout << "[ClapTrap] " << _name << " unable to attack: " << _hitPoints << " Hit Points remaining." << endl;
	else {
		if (this->_hitPoints < amount)
			_hitPoints = 0;
		else
			_hitPoints -= amount;
		cout << "[ClapTrap] " << _name << ": took " << amount << " Hit Points damage." << endl;
		cout << "Hit Points remaining: " << _hitPoints << endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints == 0)
		cout << "[ClapTrap] " << _name << " unable to attack: " << _energyPoints << " Energy Points remaining." << endl;
	else if (this->_hitPoints == 0)
		cout << "[ClapTrap] " << _name << " unable to attack: " << _hitPoints << " Hit Points remaining." << endl;
	else
	{
		_hitPoints += amount;
		_energyPoints -= 1;
		cout << "[ClapTrap] " << _name << " is repaired, " << _energyPoints << " Energy Points remaining. " << _hitPoints << " Hit Points Remaing." << endl;
	}
}
