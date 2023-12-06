/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:38:20 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/04 15:32:42 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	numZombies = 7;
	std::string	zombieName = "Zombert";

	Zombie* horde = zombieHorde(numZombies, zombieName); 
    for (int i = 0; i < numZombies; ++i)
    {
        std::cout << i << ") ";
        horde[i].announce();
    }
    delete[] horde;

    return (0);
}
