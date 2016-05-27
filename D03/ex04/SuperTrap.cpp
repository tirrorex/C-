#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap( void ) : _name( "FR4G-TP" )
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "Live to the max! Max Rager!"  << std::endl;

	return;
}

SuperTrap::SuperTrap( std::string name ) : _name( name )
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "It's a Bird...It's a Plane...It's SuperTrap" << std::endl;

	return;
}

SuperTrap::SuperTrap( SuperTrap const & src )
{
	std::cout << "Copy is better than the original right?" << std::endl;
	*this = src;

	return;
}

SuperTrap::~SuperTrap( void )
{
	std::cout << "No! Not the kryptonite! Noooooooooooooooo..." << std::endl;

	return;
}