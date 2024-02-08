/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:48:47 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/08 16:44:58 by mnegro           ###   ########.fr       */
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
	std::string	line;
	if (!file.is_open()) {
		std::cout << "\033[1;31mERROR\033[0m File '" << av[1] << "' can't be opened" << std::endl;
		return (false);
	}
	std::getline(file, line);
	if (line.compare("data | value")) {
		std::cout << "\033[1;31mERROR\033[0m Missing header column in TXT file" << std::endl;
		return (false);
	}
	file.close();
	return (true);
}

int	main(int ac, char **av) {
	if (!checkArgs(ac, av)) {
		return (1);
	}
	const std::string		txtFile = av[1];
	const std::string		csvFile = "data.csv";

	BitcoinExchange	btc;
	btc.storeRates(csvFile);
	btc.matchEvals(txtFile);
}
