#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

	Brain::Brain( void )
	{
		void	*address = this;

		std::stringstream addr2;
		addr2 << address;
		this->_adress = addr2.str();
	}
	Brain::~Brain( void )
	{
	}
	std::string Brain::identify( void ) const
	{
		return this->_adress;
	}
