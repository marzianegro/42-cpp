/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:00:32 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/13 12:18:58 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	// ClapTrap	c_trap("Clappy");
	// std::cout << "\n----------\n\n";
	// std::cout << "ClapTrap's inital statistics\n";
	// c_trap.getStats();
	// std::cout << "----------\n\n";
	// c_trap.attack("Enemy");
	// c_trap.takeDamage(3);
	// c_trap.beRepaired(2);
	// std::cout << "\n----------\n\n";
	// std::cout << "ClapTrap's final statistics\n";
	// c_trap.getStats();
	// std::cout << "----------\n\n";

	// ScavTrap	s_trap("Scavvy");
	// std::cout << "\n----------\n\n";
	// std::cout << "ScavTrap's inital statistics\n";
	// s_trap.getStats();
	// std::cout << "----------\n\n";
	// s_trap.attack("Enemy");
	// s_trap.takeDamage(3);
	// s_trap.beRepaired(2);
	// s_trap.guardGate();
	// std::cout << "\n----------\n\n";
	// std::cout << "ScavTrap's final statistics\n";
	// s_trap.getStats();
	// std::cout << "----------\n\n";

	FragTrap	f_trap("Fraggy");
	std::cout << "\n----------\n\n";
	std::cout << "FragTrap's inital statistics\n";
	f_trap.getStats();
	std::cout << "----------\n\n";
	f_trap.attack("Enemy");
	f_trap.takeDamage(42);
	f_trap.beRepaired(27);
	f_trap.highFivesGuys();
	std::cout << "\n----------\n\n";
	std::cout << "FragTrap's final statistics\n";
	f_trap.getStats();
	std::cout << "----------\n\n";
	return (0);
}
