/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:01:47 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/13 13:30:05 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	When a class is specified as a virtual base class, the most derived
	class (the one furthest down the inheritance chain) initializes it, thus
	ensuring there's only one base class instance */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*	In this case, ScavTrap and FragTrap inherit virtually from ClapTrap. So,
	DiamondTrap will only have one copy of ClapTrap's members, and there's no
	ambiguity when calling a method on a DiamondTrap object */
class	DiamondTrap : public ScavTrap, public FragTrap {

public:

	DiamondTrap(), // ocf default constructor
	DiamondTrap(const DiamondTrap &src); // ocf copy constructor
	DiamondTrap(const std::string &name);
	~DiamondTrap(); // ocf destructor

	DiamondTrap&	operator=(const DiamondTrap &src); // ocf copy assignment operator

	using ScavTrap::attack;
	void	whoAmI();

private:

	std::string	_name;
};

#endif
