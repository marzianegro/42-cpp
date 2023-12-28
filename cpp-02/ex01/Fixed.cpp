/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:18:54 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 13:57:47 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPoint = src._fixedPoint;
}

Fixed::Fixed(const int val) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = val << this->_FractBits;
}

Fixed::Fixed(const float val) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(val * (1 << this->_FractBits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src) {
		this->_fixedPoint = src._fixedPoint;
	}
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
}

/*	Shifting a number to the left by n bits is equivalent to multiplying
	the number by 2^n */
float	Fixed::toFloat(void) const {
	return (static_cast<float>(this->_fixedPoint) / (1 << this->_FractBits));
}

/*	Shifting a number to the right by n bits is equivalent to dividing
	the number by 2^n */
int	Fixed::toInt(void) const {
	return (this->_fixedPoint >> this->_FractBits);
}

std::ostream& operator<<(std::ostream &os, const Fixed &obj) {
    os << obj.toFloat();
    return (os);
}
