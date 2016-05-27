#include "Pony.hpp"
#include <iostream>
#include <string>


	Pony::Pony( std::string alloc ) : _alloc(alloc)
	{
		std::cout << "Pony is created on the " << this->_alloc << std::endl;
	}
	Pony::~Pony( void )
	{
		std:: cout << "Pony on the " << this->_alloc << " is destroyed" << std::endl;
	}
