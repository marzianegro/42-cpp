/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:33:38 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/06 16:07:44 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac < 2) {
		std::cerr << "Harl, why aren't you saying anything...???" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
