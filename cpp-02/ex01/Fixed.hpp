/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:10:43 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/10 15:31:45 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

public:
	Fixed(); // ocf default constructor
	Fixed(const Fixed &source); // ocf copy constructor 
	Fixed(const int val);
	Fixed(const float val);
	~Fixed(); // ocf destructor
 
	Fixed &operator=(const Fixed &source); // ocf copy assignment operator

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
std::ostream& operator<<(std::ostream &os, const Fixed &obj);

#endif
