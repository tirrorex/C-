#include "WEAPON.hpp"
#include <iostream>
#include <string>


	Weapon::Weapon( std::string type ) : _type( type )
	{
	}
	Weapon::~Weapon( void )
	{
	}
	const std::string Weapon::getType(void)
	{
		const std::string& typeRef = _type;
		return typeRef;
	}
	void Weapon::setType( std::string type )
	{
		_type = type;
	}
