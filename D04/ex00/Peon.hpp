#ifndef Peon_HPP
# define Peon_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{
	public:

		Peon( void );
		Peon( std::string name);
		Peon( Peon const & src );
		~Peon( void );

		Peon &		operator=( Peon const & rhs );
		std::string	getName( void ) const;
		virtual void getpolymorphed( void ) const;

	private:
		
		std::string	_name;
};
std::ostream&		operator<<( std::ostream & o, Peon const & i );

#endif