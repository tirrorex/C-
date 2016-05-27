#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:

		PowerFist( void );
		PowerFist( std::string const & name, int apcost, int damage );
		PowerFist( PowerFist const & src );
		~PowerFist( void );

		PowerFist &		operator=( PowerFist const & rhs );
		std::string		getName( void ) const;
		int				getAPCost( void ) const;
		int				getDamage( void ) const;
		virtual void	attack( void ) const;

	private:

		std::string	_name;
		int		_apcost;
		int		_damage;
};

#endif