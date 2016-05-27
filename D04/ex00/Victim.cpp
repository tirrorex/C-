#include "Victim.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

Victim::Victim( void ) : _name( "Regis" )
{
	std::cout << "Some random victim called "<<  _name << " just popped !" << std::endl;

	return;
}

Victim::Victim( std::string name ) : _name( name )
{
	std::cout << "Some random victim called "<<  _name << " just popped !" << std::endl;

	return;
}

Victim::Victim( Victim const & src )
{
	std::cout << "Some random victim called "<<  _name << " just popped !" << std::endl;
	*this = src;

	return;
}

Victim::~Victim( void )
{
	std::cout << "Victim "<<  _name << " just died for no apparent reason !" << std::endl;

	return;
}

std::string	Victim::getName( void ) const
{
	return _name;
}

void	Victim::getpolymorphed( void ) const
{
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;

}


Victim &		Victim::operator=( Victim const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
	{
		this->_name = 	rhs._name;
	}

	return *this;
}

std::ostream &		operator<<( std::ostream & o, Victim const & i )
{
	o << "I am " << i.getName() << " and I like otters !" << std::endl;

	return o;
}