#include "Human.hpp"
#include <iostream>
#include <string>
#include "Brain.hpp"


	Human::Human( void ) : _brain()
	{
	}
	Human::~Human( void )
	{
	}
	std::string Human::identify(void) const
	{
		return this->_brain.identify();
	}
	const Brain Human::getBrain(void)
	{
		return _brain;
	}

