/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:18:54 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/10 19:37:25 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
}

// copy constructor
Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	// "this" here refers to the object called with the copy constructor
	this->_fixedPoint = src._fixedPoint;
}

// copy assignment operator overload
Fixed&	Fixed::operator=(const Fixed &src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src) {
		this->_fixedPoint = src._fixedPoint;
	}
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
