/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:10:43 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:34:16 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {

public:
	Fixed(); // ocf default constructor
	Fixed(const Fixed &src); // ocf copy constructor 
	Fixed(const int val);
	Fixed(const float val);
	~Fixed(); // ocf destructor
 
	Fixed &operator=(const Fixed &src); // ocf copy assignment operator

	int	getRawBits(void) const;

	void setRawBits(int const raw);
	/*	To represent a real number in computers (or any hardware in general),
		we can define a fixed-point number type simply by implicitly fixing the 
		binary point to be at some position of a numeral */
	float	toFloat(void) const;
	int		toInt(void) const;

private:
	/*	Fixed-point numbers are simply a shifted version of an integer, obtained
		by setting the binary point to a non-zero position */
	int 				_fixedPoint;
	static const int 	_FractBits = 8;
};

/* Overload of the insertion operator that inserts a floating point representation
of the fixed-point number into the output stream object passed as parameter */
std::ostream& operator<<(std::ostream &os, const Fixed &obj);

#endif
