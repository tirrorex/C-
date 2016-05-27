#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : public ClapTrap
{
	public:

		FragTrap( void );
		FragTrap( std::string name);
		FragTrap( FragTrap const & src );
		~FragTrap( void );
		void	vaulthunter_dot_exe(std::string const & target);

	private:

		std::string	_name;
};

#endif