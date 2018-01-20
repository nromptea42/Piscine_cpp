#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>

class Fixed {
	
public:

	Fixed( void );

	Fixed( int const nb );
	Fixed( float const nb );

	Fixed( Fixed const & src );
	~Fixed( void );

	Fixed &	operator=( Fixed const & rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

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
	Fixed	operator++( int );
	Fixed	operator--( void );
	Fixed	operator--( int );

	static Fixed &			min(Fixed &one, Fixed &two);
	static Fixed const &	min(Fixed const &one, Fixed const &two);

	static Fixed &			max(Fixed &one, Fixed &two);
	static Fixed const &	max(Fixed const &one, Fixed const &two);

private:

	int _value;
	static const int _fractionalBits;

};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );

#endif