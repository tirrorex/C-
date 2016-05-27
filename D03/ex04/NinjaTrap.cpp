#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void ) : _name( "FR4G-TP" )
{
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << "I'm going commando!"  << std::endl;

	return;
}

NinjaTrap::NinjaTrap( std::string name ) : _name( name )
{
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << "Insert Juggernaut quote or pun here." << std::endl;

	return;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src )
{
	std::cout << "So, does this make me your favorite?" << std::endl;
	*this = src;

	return;
}

NinjaTrap::~NinjaTrap( void )
{
	std::cout << "My servos... are seizing..." << std::endl;

	return;
}

void	NinjaTrap::ninjaShoeBox( ClapTrap const & src )
{
	if (_energyPoints < 25)
		std::cout << "Solly! No can do!" << std::endl;
	else
	{
		std::cout << "And now we observe the rare and beautiful " << src.getName() << " bird." << std::endl;
	}
}

void	NinjaTrap::ninjaShoeBox( FragTrap const & src )
{
	if (_energyPoints < 25)
		std::cout << "Solly! No can do!" << std::endl;
	else
	{
		std::cout << "You call yourself a badass " << src.getName() << "?" << std::endl;
	}
}

void	NinjaTrap::ninjaShoeBox( ScavTrap const & src )
{
	if (_energyPoints < 25)
		std::cout << "Solly! No can do!" << std::endl;
	else
	{
		std::cout << "I am a tornado of death and bullets! Die " << src.getName() << "!" << std::endl;
	}
}

void	NinjaTrap::ninjaShoeBox( NinjaTrap const & src )
{
	if (_energyPoints < 25)
		std::cout << "Solly! No can do!" << std::endl;
	else
	{
		std::cout << "Take a chill pill " << src.getName() << "." << std::endl;
	}
}