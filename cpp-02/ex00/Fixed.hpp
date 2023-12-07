/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:10:43 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/07 11:46:20 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {

public:

	Fixed();
	Fixed(const Fixed &source);
	Fixed&	operator=(const Fixed &source);
	~Fixed();
	int	getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int	_fixedPoint;
	// is this what they meant by "integer literal 8"?
	static const int	FractBits = '8';
};

#endif
