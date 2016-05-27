#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

	ZombieHorde::ZombieHorde( int N )
	{
		int i;
		this->_array = new Zombie[N];
		srand(time(NULL));
		for (i = 0; i < N; i++)
		{
			std::string random [] = {"jackie", "michel", "katsuni", "lemanche"};
			std::string name = random[ rand() % 4 ];
			_array[i].setZombieName(name);
		}
		this->_number = N;
		this->announce();

	}
	void ZombieHorde::announce(void)
	{
		int i;
		for (i = 0; i < _number; i++)
		{
			this->_array[i].Announce();
		}
	}

	ZombieHorde::~ZombieHorde(  )
	{
		delete [] _array;
	}