/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:58:59 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/06 10:22:10 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main() {
	std::cout << "----- Testing default constructor -----\n";
	Array<int>	a;
	std::cout << "Size of array a: " << a.size() << '\n';

	std::cout << "\n----- Testing constructor with size parameter -----\n";
	Array<int>	b(10);
	std::cout << "Size of array b: " << b.size() << '\n';

	std::cout << "\n----- Testing copy assignment operator and copy constructor -----\n";
	Array<int>	c = b;
	Array<int>	d(b);
	std::cout << "Size of array c: " << c.size() << '\n';
	std::cout << "Size of array d: " << d.size() << '\n';

	std::cout << "\n----- Testing subscript operator -----\n";
	try {
		b[0] = 1;
		std::cout << "b[0]: " << b[0] << '\n';
		std::cout << "b[10]: " << b[10] << '\n';
	} catch (std::exception &e) {
		std::cout << "Caught exception: " << e.what() << '\n';
	}
	return (0);
}
