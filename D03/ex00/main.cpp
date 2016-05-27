#include <iostream>
#include <string>
#include "FragTrap.hpp"

int		main( void )
{
	FragTrap yolo;
	FragTrap bis("Cherminator");
	FragTrap tres = bis;
	yolo.rangedAttack(bis.getName());
	bis.takeDamage(20);
	bis.meleeAttack(yolo.getName());
	yolo.takeDamage(30);
	yolo.beRepaired(20);
	bis.vaulthunter_dot_exe(yolo.getName());
	return 0;
}