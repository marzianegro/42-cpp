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

class	Fixed {

public:

	Fixed(); // ocf default constructor
	Fixed(const Fixed &src); // ocf copy constructor
	~Fixed(); // ocf destructor

	Fixed&	operator=(const Fixed &src); // ocf copy assignment operator
	
	int	getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int	_fixedPoint;
	static const int	FractBits = 8;
};

#endif
