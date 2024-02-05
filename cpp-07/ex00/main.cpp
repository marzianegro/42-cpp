/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:19:36 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/05 15:37:38 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void) {
	int a = 2;
	int	b = 3;

	std::cout << "----- Test #1 -----\n";
	std::cout << "Before swap(a, b): a = " << a << ", b = " << b << '\n';
	::swap(a, b);
	std::cout << "After swap(a, b): a = " << a << ", b = " << b << '\n';
	std::cout << "min(a, b) = " << ::min(a, b) << '\n';
	std::cout << "max(a, b) = " << ::max(a, b) << '\n';

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "\n----- Test #2 -----\n";
	std::cout << "Before swap(c, d): c = " << c << ", d = " << d << '\n';
	::swap(c, d);
	std::cout << "After swap(c, d): c = " << c << ", d = " << d << '\n';
	std::cout << "min(c, d) = " << ::min(c, d) << '\n';
	std::cout << "max(c, d) = " << ::max(c, d) << '\n';
	return (0);
}
