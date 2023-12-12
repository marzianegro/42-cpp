/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:55:14 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 13:41:33 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed	b;
	Fixed const	c(Fixed(5.05f) * Fixed(2));

	std::cout << "Operations on a: " << std::endl;
	std::cout << a << std::endl; // Current value
	std::cout << ++a << std::endl; // Value pre-incremented
	std::cout << a << std::endl; // Current value, so value pre-incremented
	std::cout << a++ << std::endl; // Current value, so still value pre-incremented + Value post-incremented
	std::cout << a << std::endl << std::endl; // Current value, so value post-incremented
	std::cout << "Operations on b: " << std::endl;
	std::cout << b << std::endl; // Current value
	std::cout << --b << std::endl; // Value pre-decremented
	std::cout << b << std::endl; // Current value, so value pre-decremented
	std::cout << b-- << std::endl; // Current value, so still value pre-decremented + Value post-decremented
	std::cout << b << std::endl << std::endl; // Current value, so value post-decremented
	std::cout << "Printing c:\n" << c << std::endl << std::endl;
	std::cout << "Comparisons between a and c: " << std::endl;
	std::cout << "Printing the smallest between a and c: ";
	std::cout << Fixed::min(a, c) << std::endl;
	std::cout << "Printing the biggest between a and c: ";
	std::cout << Fixed::max(a, c) << std::endl;
	return (0);
}
