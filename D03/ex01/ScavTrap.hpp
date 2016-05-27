#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>

class ScavTrap
{
	public:

		ScavTrap( void );
		ScavTrap( std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap( void );

		ScavTrap &		operator=( ScavTrap const & rhs );
		std::string	getName( void ) const;
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer(std::string const & target);

	private:

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