#include "Zombie.hpp"
#include <iostream>
#include <string>


	Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
	{
	}
	Zombie::~Zombie( void )
	{
	}
	void Zombie::Announce( void )
	{
		std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
	}