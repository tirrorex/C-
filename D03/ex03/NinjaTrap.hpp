#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"
class NinjaTrap : public ClapTrap
{
	public:

		NinjaTrap( void );
		NinjaTrap( std::string name);
		NinjaTrap( NinjaTrap const & src );
		~NinjaTrap( void );
		void	ninjaShoeBox( ClapTrap const & src );
		void	ninjaShoeBox( FragTrap const & src );
		void	ninjaShoeBox( ScavTrap const & src );
		void	ninjaShoeBox( NinjaTrap const & src );

	private:
		std::string	_name;
};

#endif