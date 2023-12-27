/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:01:10 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:36:39 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap {

public:
	FragTrap(); // ocf default constructor
	FragTrap(const FragTrap &src); // ocf copy constructor
	FragTrap(const std::string &name);
	~FragTrap(); // ocf destructor

	FragTrap&	operator=(const FragTrap &src); // ocf copy assignment operator

	void	highFivesGuys(void);
};

#endif
