/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:38:27 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/04 15:31:24 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{

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
