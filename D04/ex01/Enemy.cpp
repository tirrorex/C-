#include "Enemy.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

Enemy::Enemy( void ) : _hp(100), _type("Enemy")
{

	return;
}

Enemy::Enemy( int hp, std::string const & type ) : _hp(hp), _type(type)
{

	return;
}

Enemy::Enemy( Enemy const & src )
{
	*this = src;

	return;
}

Enemy::~Enemy( void )
{

	return;
}

std::string		Enemy::getType( void ) const
{
	return this->_type;
}

int				Enemy::getHP( void ) const
{
	return this->_hp;
}

virtual void	RadScorpion::takeDamage( int damage )
{
	if (damage > 0)
	{
		_hp -= damage;
		if (_hp < 0 )
			_hp = 0;
	}
}

Enemy &		Enemy::operator=( Enemy const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
	{
		this->_hp = rhs._getHP();
		this->_type = rhs._getType();
	}

	return *this;
}