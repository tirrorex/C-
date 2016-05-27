#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>


	ZombieEvent::ZombieEvent( void )
	{
	}
	ZombieEvent::~ZombieEvent(  )
	{
	}
	void ZombieEvent::setZombieType ( std::string type )
	{
		this->_type = type;
	}
	Zombie* ZombieEvent::newZombie(std::string name)
	{
		Zombie * zombie = new Zombie( name, "walker");
		return zombie;
	}
	void ZombieEvent::randomChump()
	{
		srand(time(NULL));
		std::string random [] = {"jackie", "michel", "katsuni", "lemanche"};
		std::string name = random[ rand() % 4 ];
		Zombie * zombie = new Zombie( name, "walker");
		zombie->  Announce();
		delete zombie;
	}
