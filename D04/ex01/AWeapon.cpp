#include "AWeapon.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

AWeapon::AWeapon( void ) : _name( "Weapon" ), _apcost(2), _damage(10)
{

	return;
}

AWeapon::AWeapon( std::string const & name, int apcost, int damage ) : _name(name), _apcost(apcost), _damage(damage)
{

	return;
}

AWeapon::AWeapon( AWeapon const & src )
{
	*this = src;

	return;
}

AWeapon::~AWeapon( void )
{

	return;
}

std::string		AWeapon::getName( void ) const
{
	return this->_name;
}

int				AWeapon::getAPCost( void ) const
{
	return this->_apcost;
}

int				AWeapon::getDamage( void ) const
{
	return this->_damage;
}

AWeapon &		AWeapon::operator=( AWeapon const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
	{
		this->_name = 	rhs.getName();
		this->_apcost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
	}

	return *this;
}