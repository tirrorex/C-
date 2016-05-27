#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <string>

class Victim
{
	public:

		Victim( void );
		Victim( std::string name);
		Victim( Victim const & src );
		~Victim( void );

		Victim &		operator=( Victim const & rhs );
		std::string	getName( void ) const;
		virtual void getpolymorphed( void ) const;

	private:


		std::string	_name;
};
std::ostream&		operator<<( std::ostream & o, Victim const & i );

#endif