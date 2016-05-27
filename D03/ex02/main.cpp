#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

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
	ScavTrap michou;
	ScavTrap micha("Cherminator");
	ScavTrap mich = micha;
	michou.rangedAttack(micha.getName());
	micha.takeDamage(20);
	micha.meleeAttack(michou.getName());
	michou.takeDamage(30);
	michou.beRepaired(20);
	micha.challengeNewcomer(michou.getName());

	return 0;
}