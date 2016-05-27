#include "HumanB.hpp"
#include <iostream>
#include <string>


	HumanB::HumanB( const char *name ) : _name(name)
	{
	}
	HumanB::~HumanB( void )
	{
	}
	void HumanB::attack( void )
	{
		std::cout << _name << " attacks with his " << this->_weapon->getType() << std::endl;
	}
	void HumanB::setWeapon(	Weapon &weapon)
	{
		_weapon = &weapon;
	}

