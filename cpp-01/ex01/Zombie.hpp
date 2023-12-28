/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:38:27 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:32:14 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {

public:
	Zombie();
	~Zombie();

	void	announce(void);
	void	setName(std::string name);

private:
	std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
