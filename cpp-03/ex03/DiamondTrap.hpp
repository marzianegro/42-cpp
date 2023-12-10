/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:01:47 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/10 21:32:38 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {

public:

	DiamondTrap(), // ocf default constructor
	DiamondTrap(const DiamondTrap &src); // ocf copy constructor
	DiamondTrap(const std::string &name);
	~DiamondTrap(); // ocf destructor

	DiamondTrap&	operator=(const DiamondTrap &src); // ocf copy assignment operator

	void	attack(const std::string &target);
	void	whoAmI();

private:

	std::string	_name;
};

#endif
