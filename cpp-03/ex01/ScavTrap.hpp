/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:01:16 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/10 15:48:13 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

public:

	ScavTrap(); // ocf default constructor
	ScavTrap(const ScavTrap &source); // ocf copy constructor
	ScavTrap(std::string name);
	~ScavTrap(); // ocf destructor

	ScavTrap&	operator=(const ScavTrap &source); // ocf copy assignment operator
	
	void	attack(const std::string &target);
	void	guardGate();

};

#endif
