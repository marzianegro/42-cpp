/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:00:32 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 15:34:46 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap A("A");
	ClapTrap B;
	ClapTrap C = A;

	std::cout << "\n----------\n\n";
	std::cout << "ClapTraps' initial statistics\n";
	A.getStats();
	B.getStats();
	C.getStats();
	std::cout << "----------\n\n";
	A.attack("ENEMY");
	A.takeDamage(9);
	A.takeDamage(2);
	A.beRepaired(11);
	A.beRepaired(11);
	A.attack("ENEMY");

	std::cout << "Next we'll attack with C, a copy of A. They have the same name, but C hasn't lost any energy point" << std::endl;
	C.attack("ENEMY");

	std::cout << "\n----------\n\n";
	std::cout << "ClapTraps' final statistics\n";
	A.getStats();
	B.getStats();
	C.getStats();
	std::cout << "----------\n\n";
	return (0);
}
