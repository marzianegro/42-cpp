/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:00:30 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/10 21:13:21 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {

public:

	ClapTrap(); // ocf default constructor
	ClapTrap(const ClapTrap &src); // ocf copy constructor
	ClapTrap(const std::string &name);
	~ClapTrap(); // ocf destructor

	ClapTrap&	operator=(const ClapTrap &src); // ocf copy assignment operator

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	getStats();

protected:

	std::string	_name;
	int	_hitPoints;
	int	_energyPoints;
	int	_attackDamage;
};

#endif
