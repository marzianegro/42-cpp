/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:57:00 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/04 15:31:11 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	heapZombie = newZombie("Heap Zombert");
    
	heapZombie->announce();
    delete heapZombie;
    randomChump("Stack Zombert");

    return (0);
}
