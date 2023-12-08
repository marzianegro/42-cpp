/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:18:54 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/08 21:02:55 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->_fixedPoint = 0;
}

Fixed::Fixed(const Fixed &source) {
	// "this" here refers to the object called with the copy constructor
	this->_fixedPoint = source._fixedPoint;
}

Fixed::Fixed(const int val) {
	this->_fixedPoint = val << this->_FractBits;
}

Fixed::Fixed(const float val) {
	this->_fixedPoint = roundf(val * (1 << this->_FractBits));
}

Fixed&	Fixed::operator=(const Fixed &source) {
	if (this != &source)
		this->_fixedPoint = source._fixedPoint;
	return (*this);
}

/* Comparison operators: >, <, >=, <=, ==, != */
bool	Fixed::operator>(const Fixed &source) const {
	return (this->_fixedPoint > source._fixedPoint);
}

bool	Fixed::operator<(const Fixed &source) const {
	return (this->_fixedPoint < source._fixedPoint);
}

bool	Fixed::operator>=(const Fixed &source) const {
	return (this->_fixedPoint >= source._fixedPoint);
}

bool	Fixed::operator<=(const Fixed &source) const {
	return (this->_fixedPoint <= source._fixedPoint);
}

bool	Fixed::operator==(const Fixed &source) const {
	return (this->_fixedPoint == source._fixedPoint);
}

bool	Fixed::operator!=(const Fixed &source) const {
	return (this->_fixedPoint != source._fixedPoint);
}

/* Arithmetic operators: +, -, *, / */
Fixed	Fixed::operator+(const Fixed &source) {
	return ((this->toFloat() + source.toFloat()));	
}

Fixed	Fixed::operator-(const Fixed &source) {
	return ((this->toFloat() - source.toFloat()));	
}

Fixed	Fixed::operator*(const Fixed &source) {
	return ((this->toFloat() * source.toFloat()));	
}

Fixed	Fixed::operator/(const Fixed &source) {
	return ((this->toFloat() / source.toFloat()));	
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

Fixed::~Fixed() {
	return ;
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
	if (val1 < val2)
		return (val1);
	return (val2);
}
 
const Fixed&	Fixed::min(const Fixed &val1, const Fixed &val2) {
	if (val1 < val2)
		return (val1);
	return (val2);
}
 
Fixed&	Fixed::max(Fixed &val1, Fixed &val2) {
	if (val1 > val2)
		return (val1);
	return (val2);
}
 
const Fixed&	Fixed::max(const Fixed &val1, const Fixed &val2) {
	if (val1 > val2)
		return (val1);
	return (val2);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
    return (os);
}
