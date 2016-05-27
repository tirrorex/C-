#include "FragTrap.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

FragTrap::FragTrap( void ) : _name( "FR4G-TP" )
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!"  << std::endl;

	return;
}

FragTrap::FragTrap( std::string name ) : _name( name )
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "Booting sequence complete. Hello! I am " << _name << " your new steward bot. Designation: CL4P-TP, Hyperion Robot, Class C. \nPlease adjust factory settings to meet your needs before deployment" << std::endl;

	return;
}

FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "Good! I didnt want to be scrap metal anyway!" << std::endl;
	*this = src;

	return;
}

FragTrap::~FragTrap( void )
{
	std::cout << "I'll die as I lived: annoying!" << std::endl;

	return;
}

std::string	FragTrap::getName( void ) const
{
	return _name;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "You're listening to 'Short-Range Damage Radio.' " << std::endl;
	std::cout << _name << "> attacks <" << target << "> at range, causing <" << _rangedAttackDamage << "> points of damage !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout <<  "This is why you do your homework!" << std::endl;
	std::cout << "FR4G-TP <" << _name << "> attacks <" << target << "> at range, causing <" << _meleeAttackDamage << "> points of damage !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (_armorDamageReduction > 0 && (amount - _armorDamageReduction) > 0)
	{
		int		damage = amount;
		amount -= _armorDamageReduction;
		_armorDamageReduction -= damage;
	}
	_hitPoints -= amount;
	std::cout << "Oh my God " << amount << "damages, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if ((int)amount + _hitPoints < _maxHitPoints)
		_hitPoints += amount;
	else
		_hitPoints = _maxHitPoints;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (_energyPoints < 25)
		std::cout << "I'm out of energy sir!" << std::endl;
	else
	{
		srand(time(NULL));
		std::string random [] = {"Burn them, my mini-phoenix!", "You can call me Gundalf!", "Punch 'em in the face, mini-trap!", "Boogie time!", "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew-pew!"};
		std::string name = random[ rand() % 5 ];
		std::cout << "Attack on " << target << "! " << name << std::endl;
	}
}


FragTrap &		FragTrap::operator=( FragTrap const & rhs )
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