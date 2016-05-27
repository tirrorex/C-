#include "ScavTrap.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( void ) : _name( "FR4G-TP" )
{
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "Hey everybody! Check out my package!"  << std::endl;

	return;
}

ScavTrap::ScavTrap( std::string name ) : _name( name )
{
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "It's about to get magical! " << _name << " report on duty!" << std::endl;

	return;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	std::cout << "Let's get this party started!" << std::endl;
	*this = src;

	return;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;

	return;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	if (_energyPoints < 25)
		std::cout << "OOM!" << std::endl;
	else
	{
		srand(time(NULL));
		std::string random [] = {"I fart rainbows!", "Bask in my aura of death!", "Did you guys see that?", "What's that smell? Oh wait, it's just you!", "You look like something a skag barfed up!"};
		std::string name = random[ rand() % 5 ];
		std::cout << "Attack on " << target << "! " << name << std::endl;
	}
}