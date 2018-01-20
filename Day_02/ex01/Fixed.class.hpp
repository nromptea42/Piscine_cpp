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

private:

	int _value;
	static const int _fractionalBits;

};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );

#endif