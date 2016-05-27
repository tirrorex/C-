#include "Zombie.hpp"
#include <iostream>
#include <string>


	Zombie::Zombie( void ) : _name(), _type("walker")
	{
	}
	Zombie::~Zombie( void )
	{
		std::cout << _name << " is destroyed" << std::endl;
	}
	void Zombie::Announce( void )
	{
		std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
	}
	void Zombie::setZombieName ( std::string name )
	{
		_name = name;
	}
