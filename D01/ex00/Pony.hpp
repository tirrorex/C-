#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>


class Pony
{
	public:

		Pony( std::string alloc );
		~Pony( void );

	private:

		std::string _alloc;

};

#endif