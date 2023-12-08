/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:10:43 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/08 20:21:37 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{

public:
	Fixed();
	Fixed(const Fixed &source);
	Fixed(const int val);
	Fixed(const float val);
	~Fixed();
 
	Fixed &operator=(const Fixed &source); 

	int	getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

private:
	int _fixedPoint;
	static const int _FractBits = 8;
};

/* Overload of the insertion operator that inserts a floating point representation
of the fixed-point number into the output stream object passed as parameter */
std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
