#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>


class Brain
{
	public:

		Brain( void );
		~Brain( void );
		std::string identify( void ) const;

	private:
		std::string	_adress;
};

#endif