/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:57:00 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 10:32:25 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *heapZombie = newZombie("Heap Zombie");
    
	heapZombie->announce();
    delete heapZombie;
    randomChump("Stack Zombie");
    return (0);
}
