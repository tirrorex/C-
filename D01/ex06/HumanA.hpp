#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"


class HumanA
{
	public:

		HumanA( const char *name , Weapon &weapon);
		~HumanA( void );
		void attack( void );
		void setWeapon( Weapon &weapon );
	private:
		Weapon		&_weapon;
		std::string _name;
};

#endif