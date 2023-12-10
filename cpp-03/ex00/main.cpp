/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:00:32 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/10 21:01:17 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap A("A");
	ClapTrap B;
	ClapTrap C = A;

	A.getStats();
	B.getStats();
	C.getStats();

	A.attack("ENEMY");
	A.takeDamage(9);
	A.takeDamage(2);
	A.beRepaired(11);
	A.beRepaired(11);
	A.beRepaired(11);
	A.beRepaired(11);
	A.beRepaired(11);
	A.beRepaired(11);
	A.beRepaired(11);
	A.beRepaired(11);
	A.beRepaired(11);
	A.attack("ENEMY");
	A.beRepaired(11);
	A.beRepaired(11);

	std::cout << std::endl << "Now we're attacking with C, a copy of A. They have the same name, but C has energy points left" << std::endl;
	C.attack("ENEMY");
	
	A.getStats();
	B.getStats();
	C.getStats();
	return (0);
}
