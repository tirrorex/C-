#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

ClapTrap::ClapTrap( void ) : _name( "FR4G-TP" )
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "ClapTrap activated!"  << std::endl;

	return;
}

ClapTrap::ClapTrap( std::string name ) : _name( name )
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "ClapTrap activated!" << std::endl;

	return;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
	*this = src;

	return;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Are you god? Am I dead?" << std::endl;

	return;
}

std::string	ClapTrap::getName( void ) const
{
	return _name;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "My name is Trap, Claptrap, 00...Trap." << std::endl;
	std::cout << _name << "> attacks <" << target << "> at range, causing <" << _rangedAttackDamage << "> points of damage !" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout <<  "Take That" << std::endl;
	std::cout << "FR4G-TP <" << _name << "> attacks <" << target << "> at range, causing <" << _meleeAttackDamage << "> points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_armorDamageReduction > 0 && (amount - _armorDamageReduction) > 0)
	{
		int		damage = amount;
		amount -= _armorDamageReduction;
		_armorDamageReduction -= damage;
	}
	_hitPoints -= amount;
	std::cout << "Crit-i-cal! " << amount << "damages, So cold... brrh..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount + _hitPoints < _maxHitPoints)
		_hitPoints += amount;
	else
		_hitPoints = _maxHitPoints;
}

void	ClapTrap::challengeNewcomer(std::string const & target)
{
	if (_energyPoints < 25)
		std::cout << "I could use some cell battery!" << std::endl;
	else
	{
		srand(time(NULL));
		std::string random [] = {"I fart rainbows!", "Bask in my aura of death!", "Did you guys see that?", "What's that smell? Oh wait, it's just you!", "You look like something a skag barfed up!"};
		std::string name = random[ rand() % 5 ];
		std::cout << "Attack on " << target << "! " << name << std::endl;
	}
}


ClapTrap &		ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
	{
		this->_hitPoints = 	rhs._hitPoints;
		this->_maxHitPoints = rhs._maxHitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_maxEnergyPoints = rhs._maxEnergyPoints;
		this->_level = rhs._level;
		this->_meleeAttackDamage = rhs._meleeAttackDamage;
		this->_rangedAttackDamage = rhs._rangedAttackDamage;
		this->_armorDamageReduction = rhs._armorDamageReduction;
	}

	return *this;
}