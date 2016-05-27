#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

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
	ScavTrap micha("c17");
	ScavTrap mich = micha;
	michou.rangedAttack(micha.getName());
	micha.takeDamage(20);
	micha.meleeAttack(michou.getName());
	michou.takeDamage(30);
	michou.beRepaired(20);
	micha.challengeNewcomer(michou.getName());
	ClapTrap creator;
	ClapTrap god("c17");
	ClapTrap godess = god;
	creator.rangedAttack(god.getName());
	god.takeDamage(20);
	god.meleeAttack(creator.getName());
	creator.takeDamage(30);
	creator.beRepaired(20);
	god.challengeNewcomer(creator.getName());
	NinjaTrap gaiden;
	NinjaTrap kakachi("c18");
	NinjaTrap ruyho = kakachi;
	gaiden.rangedAttack(kakachi.getName());
	kakachi.takeDamage(20);
	kakachi.meleeAttack(gaiden.getName());
	gaiden.takeDamage(30);
	gaiden.beRepaired(20);
	kakachi.ninjaShoeBox(gaiden);
	kakachi.ninjaShoeBox(micha);
	kakachi.ninjaShoeBox(yolo);
	kakachi.ninjaShoeBox(god);
	return 0;
}