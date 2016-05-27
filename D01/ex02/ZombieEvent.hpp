#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <iostream>
# include <string>


class ZombieEvent
{
	public:

		ZombieEvent( void );
		~ZombieEvent( void );
		void setZombieType ( std::string type );
		void randomChump();
		Zombie* newZombie( std::string name);

	private:
		std::string _type;
};

#endif