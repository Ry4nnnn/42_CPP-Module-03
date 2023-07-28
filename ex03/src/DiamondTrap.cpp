#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap() {
	cout << "[DiamondTrap] Default contructor called." << endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	cout << "[DiamondTrap] " << name << " : contructor called." << endl;
}