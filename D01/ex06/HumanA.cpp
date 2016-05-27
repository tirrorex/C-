#include "HumanA.hpp"
#include <iostream>
#include <string>


	HumanA::HumanA( const char *name , Weapon &weapon ) :  _weapon(weapon), _name(name)
	{
	}
	HumanA::~HumanA( void )
	{
	}
	void HumanA::attack( void )
	{
		std::cout << _name << " attacks with his " << this->_weapon.getType() << std::endl;

	}
	void HumanA::setWeapon(	Weapon &weapon)
	{
		_weapon = weapon;
	}
