/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:18:54 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 13:58:36 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->_fixedPoint = 0;
}

Fixed::Fixed(const Fixed &src) {
	this->_fixedPoint = src._fixedPoint;
}

Fixed::Fixed(const int val) {
	this->_fixedPoint = val << this->_FractBits;
}

Fixed::Fixed(const float val) {
	this->_fixedPoint = roundf(val * (1 << this->_FractBits));
}

Fixed::~Fixed() {
	return ;
}

Fixed&	Fixed::operator=(const Fixed &src) {
	if (this != &src) {
		this->_fixedPoint = src._fixedPoint;
	}
	return (*this);
}

/* Comparison operators: >, <, >=, <=, ==, != */
bool	Fixed::operator>(const Fixed &src) const {
	return (this->_fixedPoint > src._fixedPoint);
}

bool	Fixed::operator<(const Fixed &src) const {
	return (this->_fixedPoint < src._fixedPoint);
}

bool	Fixed::operator>=(const Fixed &src) const {
	return (this->_fixedPoint >= src._fixedPoint);
}

bool	Fixed::operator<=(const Fixed &src) const {
	return (this->_fixedPoint <= src._fixedPoint);
}

bool	Fixed::operator==(const Fixed &src) const {
	return (this->_fixedPoint == src._fixedPoint);
}

bool	Fixed::operator!=(const Fixed &src) const {
	return (this->_fixedPoint != src._fixedPoint);
}

/* Arithmetic operators: +, -, *, / */
Fixed	Fixed::operator+(const Fixed &src) {
	return ((this->toFloat() + src.toFloat()));	
}

Fixed	Fixed::operator-(const Fixed &src) {
	return ((this->toFloat() - src.toFloat()));	
}

Fixed	Fixed::operator*(const Fixed &src) {
	return ((this->toFloat() * src.toFloat()));	
}

Fixed	Fixed::operator/(const Fixed &src) {
	return ((this->toFloat() / src.toFloat()));	
}

/* Pre- and post-increment/decrement operators */
Fixed& Fixed::operator++() {
	this->_fixedPoint++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed	tmp = *this;
	this->_fixedPoint++;
	return (tmp);
}

Fixed& Fixed::operator--() {
	this->_fixedPoint--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed	tmp = *this;
	this->_fixedPoint--;
	return (tmp);
}

int	Fixed::getRawBits(void) const {
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(this->_fixedPoint) / (1 << this->_FractBits));
}

int	Fixed::toInt(void) const {
	return (this->_fixedPoint >> this->_FractBits);
}

Fixed&	Fixed::min(Fixed &val1, Fixed &val2) {
	if (val1 < val2) {
		return (val1);
	}
	return (val2);
}
 
const Fixed&	Fixed::min(const Fixed &val1, const Fixed &val2) {
	if (val1 < val2) {
		return (val1);
	}
	return (val2);
}
 
Fixed&	Fixed::max(Fixed &val1, Fixed &val2) {
	if (val1 > val2) {
		return (val1);
	}
	return (val2);
}
 
const Fixed&	Fixed::max(const Fixed &val1, const Fixed &val2) {
	if (val1 > val2) {
		return (val1);
	}
	return (val2);
}

std::ostream& operator<<(std::ostream &os, const Fixed &obj) {
    os << obj.toFloat();
    return (os);
}
