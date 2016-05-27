#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant
{
	public:

		SuperMutant( void );
		SuperMutant( int hp, std::string const & type );
		SuperMutant( SuperMutant const & src );
		~SuperMutant( void );

		SuperMutant &		operator=( SuperMutant const & rhs );
		std::string		getType( void ) const;
		int				getHP( void ) const;
		virtual void	takeDamage( int ) = 0;

	private:
		
		std::string	_type;
		int		_hp;
};

#endif