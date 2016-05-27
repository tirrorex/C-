#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>
# include <string>

class Enemy
{
	public:

		Enemy( void );
		Enemy( int hp, std::string const & type );
		Enemy( Enemy const & src );
		~Enemy( void );

		Enemy &		operator=( Enemy const & rhs );
		std::string		getType( void ) const;
		int				getHP( void ) const;
		virtual void	takeDamage( int );

	protected:

		std::string	_type;
		int		_hp;
};

#endif