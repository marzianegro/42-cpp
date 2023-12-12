/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:10:43 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 13:58:59 by mnegro           ###   ########.fr       */
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
 
	Fixed& operator=(const Fixed &src); // ocf copy assignment operator
	
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

std::ostream& operator<<(std::ostream &os, const Fixed &obj);

#endif
