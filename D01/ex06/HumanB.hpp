#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	public:

		HumanB( const char *name );
		~HumanB( void );	
		void attack( void );
		void setWeapon( Weapon &weapon );

	private:
		Weapon *	_weapon;
		std::string _name;

};

#endif