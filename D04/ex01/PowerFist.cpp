#include "Powerfist.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "AWeapon.hpp"

Powerfist::Powerfist( void ) : _name( "Power Fist" ), _apcost(8), _damage(50)
{

	return;
}

Powerfist::Powerfist( std::string const & name, int apcost, int damage ) : _name(name), _apcost(apcost), _damage(damage)
{

	return;
}

Powerfist::Powerfist( Powerfist const & src )
{
	*this = src;

	return;
}

Powerfist::~Powerfist( void )
{

	return;
}

std::string		Powerfist::getName( void ) const
{
	return this->_name;
}

int				Powerfist::getAPCost( void ) const
{
	return this->_apcost;
}

int				Powerfist::getDamage( void ) const
{
	return this->_damage;
}

virtual void	PowerFist::attack( void ) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

Powerfist &		Powerfist::operator=( Powerfist const & rhs )
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