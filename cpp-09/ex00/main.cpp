/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:48:47 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/07 16:39:26 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	checkArgs(int ac, char **av)
{
	if (ac != 2) {
		std::cout << "\033[1;31mERROR\033[0m Invalid number of arguments\n";
		return (false);
	}
	std::ifstream	file(av[1]);
	if (!file.is_open()) {
		std::cout << "\033[1;31mERROR\033[0m " << av[1] << " can't be opened" << std::endl;
		return (false);
	}
	file.close();
	return (true);
}

int	main(int ac, char **av) {
	if (!checkArgs(ac, av)) {
		return (1);
	}
	std::string		evalsFile = av[1];
	std::ifstream	infile(evalsFile.c_str());

	infile.close();
}
