/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:18:54 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/09 19:31:47 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
}

// copy constructor
Fixed::Fixed(const Fixed &source) {
	std::cout << "Copy constructor called" << std::endl;
	// "this" here refers to the object called with the copy constructor
	this->_fixedPoint = source._fixedPoint;
}

Fixed::Fixed(const int val) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = val << this->_FractBits;
}

Fixed::Fixed(const float val) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(val * (1 << this->_FractBits));
}

Fixed&	Fixed::operator=(const Fixed &source) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &source)
		this->_fixedPoint = source._fixedPoint;
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

// this function returns the raw value of the fixed-point value
int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

// this functions sets the raw value of the fixed-point number
void	Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(this->_fixedPoint) / (1 << this->_FractBits));
}

int	Fixed::toInt(void) const {
	return (this->_fixedPoint >> this->_FractBits);
}

std::ostream& operator<<(std::ostream &os, const Fixed &obj) {
    os << obj.toFloat();
    return (os);
}
