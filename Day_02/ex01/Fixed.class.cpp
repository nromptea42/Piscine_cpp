#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::Fixed( int const integer ) {
	std::cout << "Int constructor called" << std::endl;
	setRawBits(integer << this->_fractionalBits);
	return;
}

Fixed::Fixed( float const floating ) {
	std::cout << "Float constructor called" << std::endl;
	setRawBits(std::roundf(floating * (1 << this->_fractionalBits)));
	return;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		this->_value = rhs.getRawBits();

	return *this;
}

int		Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}


void	Fixed::setRawBits( int const raw ) {
	this->_value = raw;
	return;
}

int		Fixed::toInt( void ) const {
	return this->getRawBits() >> this->_fractionalBits;
}

float   Fixed::toFloat( void ) const {
	float oui = this->getRawBits();
	return oui / (1 << this->_fractionalBits);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs ) {
	o << rhs.toFloat();
	return (o);
}