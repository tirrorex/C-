#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
	public:

		ClapTrap( void );
		ClapTrap( std::string name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap( void );

		ClapTrap &		operator=( ClapTrap const & rhs );
		std::string	getName( void ) const;
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer(std::string const & target);

	protected:

		int		_hitPoints;
		int		_maxHitPoints;
		int		_energyPoints;
		int		_maxEnergyPoints;
		int		_level;
		std::string	_name;
		int		_meleeAttackDamage;
		int		_rangedAttackDamage;
		int		_armorDamageReduction;
};

#endif