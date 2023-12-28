/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:57:15 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:32:07 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {

public:
	Zombie(std::string name);
	~Zombie();

	void	announce(void);

private:
	std::string	_name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
