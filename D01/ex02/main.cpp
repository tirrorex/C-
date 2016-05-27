#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <string>

int		main(void)
{
	ZombieEvent event = ZombieEvent();
	Zombie* michael = event.newZombie("michael");
	michael->Announce();
	delete michael;
	event.randomChump();
	Zombie julie = Zombie("julie", "runner");
	julie.Announce();
	return (0);
}