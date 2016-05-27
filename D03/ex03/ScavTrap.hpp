#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap( void );
		ScavTrap( std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap( void );
		void	challengeNewcomer(std::string const & target);

	private:
		
		std::string	_name;
};

#endif