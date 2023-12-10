/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:00:32 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/10 21:42:57 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	// ClapTrap	c_trap("Clappy");
	// c_trap.getStats();
	// c_trap.attack("Enemy");
	// c_trap.takeDamage(3);
	// c_trap.beRepaired(2);
	// c_trap.getStats();

	// ScavTrap	s_trap("Scavvy");
	// s_trap.getStats();
	// s_trap.attack("Enemy");
	// s_trap.takeDamage(3);
	// s_trap.beRepaired(2);
	// s_trap.guardGate();
	// s_trap.getStats();

	FragTrap	f_trap("Fraggy");
	f_trap.getStats();
	f_trap.attack("Enemy");
	f_trap.takeDamage(3);
	f_trap.beRepaired(2);
	f_trap.highFivesGuys();
	f_trap.getStats();
	return (0);
}
