#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion
{
	public:

		RadScorpion( void );
		RadScorpion( int hp, std::string const & type );
		RadScorpion( RadScorpion const & src );
		~RadScorpion( void );

		RadScorpion &		operator=( RadScorpion const & rhs );
		std::string		getType( void ) const;
		int				getHP( void ) const;

	private:

		std::string	_type;
		int		_hp;
};

#endif