/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:00:32 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 16:30:29 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap A("A");
	ScavTrap B(A);
	// ClapTrap C("C");
	// ClapTrap D(C);

	std::cout << "\n----------\n\n";
	std::cout << "ClapTraps' inital statistics\n";
	A.getStats();
	B.getStats();
	// C.getStats();
	// D.getStats();
	std::cout << "----------\n\n";
	std::cout << "ScavTrap A\n";
	A.attack("ENEMY");
	A.takeDamage(9);
	A.beRepaired(2);
	A.guardGate();
	std::cout << "\nScavTrap B (copy of A)\n";
	B.attack("ENEMY");
	B.takeDamage(9);
	B.beRepaired(2);
	B.guardGate();
	// std::cout << "\nClapTrap C\n";
	// C.attack("ENEMY");
	// C.takeDamage(9);
	// C.beRepaired(2);
	// std::cout << "\nClapTrap D (copy of C)\n";
	// D.attack("ENEMY");
	// D.takeDamage(9);
	// D.beRepaired(2);
	std::cout << "\n----------\n\n";
	std::cout << "ClapTraps' final statistics\n";
	A.getStats();
	B.getStats();
	// C.getStats();
	// D.getStats();
	std::cout << "----------\n\n";
	return (0);
}
