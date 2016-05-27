#include "Fixed.hpp"
#include <iostream>
#include <string>
#include <cmath>

const int	Fixed::_bit = 8;


Fixed::Fixed( void ) : _fixValue( 0 )
{
	//std::cout << "Default Constructor called" << std::endl;

	return;
}

Fixed::Fixed( int const n ) : _fixValue( n << _bit )
{
	//std::cout << "Int Constructor called" << std::endl;

	return;
}

Fixed::Fixed( float const n ) : _fixValue((int)roundf(n * (1 << _bit)))
{
	//std::cout << "Float Constructor called" << std::endl;

	return;
}

Fixed::Fixed( Fixed const & src )
{
	//std::cout << "Copy Constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor Called" << std::endl;

	return;
}

int		Fixed::getRawBits( void ) const
{
	return this->_fixValue;
}
void	Fixed::setRawBits( int const raw )
{
	this->_fixValue = raw;
}

float	Fixed::toFloat( void ) const
{
	return (((float)this->_fixValue) / (1 << _bit));
}

int		Fixed::toInt( void ) const
{
	return  this->_fixValue >> _bit;
}

bool	Fixed::operator>( Fixed const &rhs )
{
	return this->getRawBits() > rhs.getRawBits();
}

bool	Fixed::operator<( Fixed const &rhs )
{
	return this->getRawBits() < rhs.getRawBits();
}

bool	Fixed::operator>=( Fixed const &rhs )
{
	return this->getRawBits() >= rhs.getRawBits();
}

bool	Fixed::operator<=( Fixed const &rhs )
{
	return this->getRawBits() <= rhs.getRawBits();
}

bool	Fixed::operator==( Fixed const &rhs )
{
	return this->getRawBits() == rhs.getRawBits();
}

bool	Fixed::operator!=( Fixed const &rhs )
{
	return this->getRawBits() != rhs.getRawBits();
}

Fixed 	Fixed::operator+( Fixed const & rhs )
{
	return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed 	Fixed::operator-( Fixed const & rhs )
{
	return Fixed( this->toFloat() - rhs.toFloat() );

}

Fixed	Fixed::operator*( Fixed const & rhs )
{
	return Fixed( this->toFloat() * rhs.toFloat() );

}

Fixed	Fixed::operator/( Fixed const & rhs )
{
	return Fixed( this->toFloat() / rhs.toFloat() );
}

Fixed	Fixed::operator++( void )
{
	Fixed ret(*this);
	this->_fixValue += 1;
	return *this;
}

Fixed	Fixed::operator--( void )
{
	this->_fixValue -= 1;
	return *this;
}

Fixed	Fixed::operator++( int )
{
	Fixed ret(*this);
	this->_fixValue += 1;
	return ret;
}

Fixed	Fixed::operator--( int )
{
	Fixed ret(*this);
	this->_fixValue -= 1;
	return ret;
}

Fixed &	Fixed::min( Fixed & rhs1, Fixed & rhs2 )
{
	return rhs1.getRawBits() > rhs2.getRawBits() ? rhs2: rhs1;
}

Fixed &	Fixed::max( Fixed & rhs1, Fixed & rhs2 )
{
	return rhs1.getRawBits() > rhs2.getRawBits() ? rhs1: rhs2;
}

const Fixed &	Fixed::min( Fixed const & rhs1, Fixed const & rhs2 )
{
	return rhs1.getRawBits() > rhs2.getRawBits() ? rhs2: rhs1;
}

const Fixed &	Fixed::max( Fixed const & rhs1, Fixed const & rhs2 )
{
	return rhs1.getRawBits() > rhs2.getRawBits() ? rhs1: rhs2;
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();

	return o;
}