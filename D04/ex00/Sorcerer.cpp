#include "Sorcerer.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
# include "Victim.hpp"
# include "Peon.hpp"

Sorcerer::Sorcerer( void ) : _name( "Merlin" ), _title("the magnificent")
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;

	return;
}

Sorcerer::Sorcerer( std::string name, std::string title) : _name( name ), _title( title )
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;

	return;
}

Sorcerer::Sorcerer( Sorcerer const & src )
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
	*this = src;

	return;
}

Sorcerer::~Sorcerer( void )
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;

	return;
}

std::string	Sorcerer::getName( void ) const
{
	return _name;
}

std::string	Sorcerer::getTitle( void ) const
{
	return _title;
}

void	Sorcerer::polymorph( Victim const & src) const
{
	src.getpolymorphed();
}


Sorcerer &		Sorcerer::operator=( Sorcerer const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
	{
		this->_name = 	rhs._name;
		this->_title = rhs._title;
	}

	return *this;
}

std::ostream &		operator<<( std::ostream & o, Sorcerer const & i )
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies !" << std::endl;

	return o;
}