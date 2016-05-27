#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"

class NinjaTrap : public FragTrap, public NinjaTrap
{
	public:

		SuperTrap( void );
		SuperTrap( std::string name);
		SuperTrap( SuperTrap const & src );
		~SuperTrap( void );

	private:
		std::string	_name;
};

#endif