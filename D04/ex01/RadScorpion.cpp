#include "RadScorpion.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "Ennemy.hpp"


RadScorpion::RadScorpion( void ) : _hp(80), _type("RadScorpion")
{
	std::cout << "* click click click *" << std::endl;

	return;
}

RadScorpion::RadScorpion( int hp, std::string const & type ) : _hp(hp), _type(type)
{
	std::cout << "* click click click *" << std::endl;

	return;
}

RadScorpion::RadScorpion( RadScorpion const & src )
{
	std::cout << "* click click click *" << std::endl;
	*this = src;

	return;
}

RadScorpion::~RadScorpion( void )
{
	std::cout << "* SPROTCH *" << std::endl;
	return;
}

std::string		RadScorpion::getType( void ) const
{
	return this->_type;
}

int				RadScorpion::getHP( void ) const
{
	return this->_hp;
}

RadScorpion &		RadScorpion::operator=( RadScorpion const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
	{
		this->_hp = rhs._getHP();
		this->_type = rhs._getType();
	}

	return *this;
}