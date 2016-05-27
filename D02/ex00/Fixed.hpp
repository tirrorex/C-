#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
	public:

		Fixed( void );
		Fixed( int const n );
		Fixed( Fixed const & src );
		~Fixed( void );

		Fixed &		operator=( Fixed const & rhs );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:

		int		_fixValue;
		static const int	_bit;
};

std::ostream&		operator<<( std::ostream & o, Fixed const & i );

#endif