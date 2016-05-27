#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

FragTrap::FragTrap( void ) : _name( "FR4G-TP" )
{
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!"  << std::endl;

	return;
}

FragTrap::FragTrap( std::string name ) : _name( name )
{
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