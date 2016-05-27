#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

int main()
{
	Human bob;
	
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}