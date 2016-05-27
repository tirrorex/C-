#include "Peon.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

Peon::Peon( void ) : _name( "Peon" )
{
	std::cout << "Zog Zog." << std::endl;

	return;
}

Peon::Peon( std::string name ) : _name( name )
{
	std::cout << "Zog Zog" << std::endl;

	return;
}

Peon::Peon( Peon const & src )
{
	std::cout << "Zog Zog" << std::endl;
	*this = src;

	return;
}

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;

	return;
}

std::string	Peon::getName( void ) const
{
	return _name;
}

void	Peon::getpolymorphed( void ) const
{
	std::cout << _name << " has been turned into a pink pony !" << std::endl;

}


Peon &		Peon::operator=( Peon const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
	{
		this->_name = 	rhs._name;
	}

	return *this;
}

std::ostream &		operator<<( std::ostream & o, Peon const & i )
{
	o << "I am " << i.getName() << " and I like otters !" << std::endl;

	return o;
}