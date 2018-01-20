#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractionalBits = 8;


Fixed::Fixed() : _value(0) {
	// std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed( Fixed const & src ) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::Fixed( int const integer ) {
	// std::cout << "Int constructor called" << std::endl;
	setRawBits(integer << this->_fractionalBits);
	return;
}

Fixed::Fixed( float const floating ) {
	// std::cout << "Float constructor called" << std::endl;
	setRawBits(std::roundf(floating * (1 << this->_fractionalBits)));
	return;
}

Fixed::~Fixed( void ) {
	// std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	// std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		this->_value = rhs.getRawBits();

	return *this;
}

int		Fixed::getRawBits( void ) const {
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
	float oui = this->_value;
	return oui / (1 << this->_fractionalBits);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs ) {
	o << rhs.toFloat();
	return (o);
}


bool	Fixed::operator>( Fixed const & rhs ) {
	if (this->_value > rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<( Fixed const & rhs ) {
	if (this->_value < rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=( Fixed const & rhs ) {
	if (this->_value >= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=( Fixed const & rhs ) {
	if (this->_value <= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==( Fixed const & rhs ) {
	if (this->_value == rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=( Fixed const & rhs ) {
	if (this->_value != rhs.getRawBits())
		return true;
	return false;
}

Fixed	Fixed::operator+( Fixed const &rhs ) {
	Fixed plus;
	plus.setRawBits((this->_value + rhs.getRawBits()) >> this->_fractionalBits);
	return plus;
}

Fixed	Fixed::operator-( Fixed const &rhs ) {
	Fixed minus;
	minus.setRawBits((this->_value - rhs.getRawBits()) >> this->_fractionalBits);
	return minus;
}

Fixed	Fixed::operator*( Fixed const &rhs ) {
	Fixed mult;
	mult.setRawBits((this->_value * rhs.getRawBits()) >> this->_fractionalBits);
	return mult;
}

Fixed	Fixed::operator/( Fixed const &rhs ) {
	Fixed divide;
	divide.setRawBits((this->_value / rhs.getRawBits()) >> this->_fractionalBits);
	return divide;
}

Fixed	Fixed::operator++(void) {
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed oui = *this;
	this->_value = this->_value + 1;
	return oui;
}

Fixed	Fixed::operator--(void) {
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed non = *this;
	this->_value = this->_value - 1;
	return non;
}



Fixed &	Fixed::min(Fixed &one, Fixed &two) {
	return one.getRawBits() > two.getRawBits() ? two : one;
}

Fixed const & Fixed::min(Fixed const &one, const Fixed &two) {
	return one.getRawBits() > two.getRawBits() ? two : one;
}


Fixed &	Fixed::max(Fixed &one, Fixed &two) {
	return one.getRawBits() < two.getRawBits() ? two : one;
}

Fixed const & Fixed::max(Fixed const &one, const Fixed &two) {
	return one.getRawBits() < two.getRawBits() ? two : one;
}