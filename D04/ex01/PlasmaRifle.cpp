#include "PlasmaRifle.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle( void ) : _name( "Plasma Rifle" ), _apcost(5), _damage(21)
{

	return;
}

PlasmaRifle::PlasmaRifle( std::string const & name, int apcost, int damage ) : _name(name), _apcost(apcost), _damage(damage)
{

	return;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src )
{
	*this = src;

	return;
}

PlasmaRifle::~PlasmaRifle( void )
{

	return;
}

std::string		PlasmaRifle::getName( void ) const
{
	return this->_name;
}

int				PlasmaRifle::getAPCost( void ) const
{
	return this->_apcost;
}

int				PlasmaRifle::getDamage( void ) const
{
	return this->_damage;
}

virtual void	PlasmaRifle::attack( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle &		PlasmaRifle::operator=( PlasmaRifle const & rhs )
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