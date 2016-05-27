#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>
# include <string>

class AWeapon
{
	public:

		AWeapon( void );
		AWeapon( std::string const & name, int apcost, int damage );
		AWeapon( AWeapon const & src );
		~AWeapon( void );

		AWeapon &		operator=( AWeapon const & rhs );
		std::string		getName( void ) const;
		int				getAPCost( void ) const;
		int				getDamage( void ) const;
		virtual void	attack( void ) const = 0;

	protected:

		std::string	_name;
		int		_apcost;
		int		_damage;
};

#endif