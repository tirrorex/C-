#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include <iostream>
# include <string>


class ZombieHorde
{
	public:

		ZombieHorde( int N );
		~ZombieHorde( void );
		void announce( void );


	private:
		 Zombie 	*_array;
		 int		_number;
};

#endif