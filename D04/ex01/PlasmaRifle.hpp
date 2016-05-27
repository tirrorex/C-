#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:

		PlasmaRifle( void );
		PlasmaRifle( std::string const & name, int apcost, int damage );
		PlasmaRifle( PlasmaRifle const & src );
		~PlasmaRifle( void );

		PlasmaRifle &		operator=( PlasmaRifle const & rhs );
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