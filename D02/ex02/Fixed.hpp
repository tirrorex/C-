#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
	public:

		Fixed( void );
		Fixed( int const n );
		Fixed( float const n );
		Fixed( Fixed const & src );
		~Fixed( void );

		bool	operator>( Fixed const & rhs );
		bool	operator<( Fixed const & rhs );
		bool	operator>=( Fixed const & rhs );
		bool	operator<=( Fixed const & rhs );
		bool	operator==( Fixed const & rhs );
		bool	operator!=( Fixed const & rhs );
		Fixed	operator+( Fixed const & rhs );
		Fixed	operator-( Fixed const & rhs );
		Fixed	operator*( Fixed const & rhs );
		Fixed	operator/( Fixed const & rhs );
		Fixed	operator++( void );
		Fixed	operator--( void );
		Fixed	operator++(int);
		Fixed	operator--(int);



		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static Fixed & min( Fixed & rhs1, Fixed & rhs2 );
		static Fixed & max( Fixed & rhs1, Fixed & rhs2 );
		static const Fixed & min( Fixed const & rhs1, Fixed const  & rhs2 );
		static const Fixed & max( Fixed const & rhs1, Fixed const & rhs2 );

	private:

		int		_fixValue;
		static const int	_bit;
};

std::ostream&		operator<<( std::ostream & o, Fixed const & i );

#endif