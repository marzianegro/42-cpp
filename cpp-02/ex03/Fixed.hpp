/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:10:43 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/10 19:37:25 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

public:

	Fixed(); // ocf default constructor
	Fixed(const Fixed &src); // ocf copy constructor
	Fixed(const int val);
	Fixed(const float val);
	~Fixed(); // ocf destructor
 
	Fixed& operator=(const Fixed &src); // ocf copy assignment operator
	
	/*	For comparison operators and arithmetic operators it's more common
		to return a copy of the result, not a reference. This is because
		these operators usually do not modify the objects they are called
		on, but instead create a new object that is the result of the operation. */
	bool	operator>(const Fixed &src) const;
	bool	operator<(const Fixed &src) const;
	bool	operator>=(const Fixed &src) const;
	bool	operator<=(const Fixed &src) const;
	bool	operator==(const Fixed &src) const;
	bool	operator!=(const Fixed &src) const;
	Fixed	operator+(const Fixed &src);
	Fixed	operator-(const Fixed &src);
	Fixed	operator*(const Fixed &src);
	Fixed	operator/(const Fixed &src);
	/*	In the case of the increment and decrement operators,
		returning a reference is common because these operators
		usually modify the object they are called on and then
		return the modified object itself, not a copy of the object. */
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);

	int	getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed&	min(Fixed &val1, Fixed &val2);
	static const Fixed&	min(const Fixed &val1, const Fixed &val2);
	static Fixed&	max(Fixed &val1, Fixed &val2);
	static const Fixed&	max(const Fixed &val1, const Fixed &val2);

private:

	int _fixedPoint;
	static const int _FractBits = 8;
};

/* Overload of the insertion operator that inserts a floating point representation
of the fixed-point number into the output stream object passed as parameter */
std::ostream& operator<<(std::ostream &os, const Fixed &obj);

#endif
