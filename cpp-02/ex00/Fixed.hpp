/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:10:43 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:34:22 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Fixed-point numbers are a simple, yet very powerful way to represent
	fractional numbers, and they offer a valuable balance between performance,
	accuracy, range, and precision */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {

public:
	Fixed(); // ocf default constructor
	Fixed(const Fixed &src); // ocf copy constructor
	~Fixed(); // ocf destructor

	Fixed&	operator=(const Fixed &src); // ocf copy assignment operator
	
	int	getRawBits(void) const;

	void	setRawBits(int const raw);

private:
	int					_fixedPoint;
	static const int	_FractBits = 8;
};

#endif
