/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:42:43 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/02 20:27:15 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "\033[1;31mERROR\033[0m Invalid number of arguments\n";
		return (1);
	}
	ScalarConverter::convert(av[1]);
	return (0);
}
