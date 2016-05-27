#include "Fixed.hpp"
#include <iostream>
#include <string>

const int	Fixed::_bit = 8;


Fixed::Fixed( void ) : _fixValue( 0 )
{
	std::cout << "Default Constructor called" << std::endl;

	return;
}

Fixed::Fixed( int const n ) : _fixValue( n << _bit )
{
	std::cout << "Parametric Constructor called" << std::endl;

	return;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor Called" << std::endl;

	return;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function Called" << std::endl;

	return this->_fixValue;
}
void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function Called" << std::endl;
	this->_fixValue = raw;
}


Fixed &		Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
		this->_fixValue = rhs.getRawBits();

	return *this;
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i )
{
	o << "The value of _fixValue is :: " << i.getRawBits();

	return o;
}