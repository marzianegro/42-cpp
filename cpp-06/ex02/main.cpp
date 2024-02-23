/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:01:12 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/23 14:02:13 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void) {
	srand(time(NULL));
	Base*	p1 = generate();
	Base*	p2 = generate();
	Base*	p3 = generate();

	std::cout << "----- Try #1 -----\n";
	identify(p1);
	identify(*p1);
	std::cout << "\n----- Try #2 -----\n";
	identify(p2);
	identify(*p2);
	std::cout << "\n----- Try #3 -----\n";
	identify(p3);
	identify(*p3);

	std::cout << "\n----- DESTRUCTORS -----\n";
	delete(p1);
	delete(p2);
	delete(p3);
	return (0);
}
