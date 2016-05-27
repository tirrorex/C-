#include "SuperMutant.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "Ennemy.hpp"

SuperMutant::SuperMutant( void ) : _hp(170), _type("SuperMutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;

	return;
}

SuperMutant::SuperMutant( int hp, std::string const & type ) : _hp(hp), _type(type)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;

	return;
}

SuperMutant::SuperMutant( SuperMutant const & src )
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	*this = src;

	return;
}

SuperMutant::~SuperMutant( void )
{
	std::cout << "Aaargh ..." << std::endl;

	return;
}

std::string		SuperMutant::getType( void ) const
{
	return this->_type;
}

int				SuperMutant::getHP( void ) const
{
	return this->_hp;
}

virtual void	SuperMutant::takeDamage( int )
{
	damage -= 3;
	if (damage > 0)
	{
		_hp -= damage;
		if (_hp < 0 )
			_hp = 0;
	}

}

SuperMutant &		SuperMutant::operator=( SuperMutant const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
	{
		this->_hp = rhs._getHP();
		this->_type = rhs._getType();
	}

	return *this;
}