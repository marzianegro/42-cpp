/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:55:14 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/09 17:19:54 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << "Operation(s) on a: " << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl << std::endl;
	std::cout << "Operation(s) on b: " << std::endl;
	std::cout << b << std::endl << std::endl;
	std::cout << "Comparison(s) between a and b: " << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return (0);
}
