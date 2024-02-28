/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:48:47 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/28 12:46:35 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	checkArgs(int ac, char **av)
{
	if (ac != 2) {
		std::cout << "\033[1;31mERROR\033[0m Invalid number of arguments\n";
		exit(EXIT_FAILURE);
	}
	std::ifstream	file(av[1]);
	std::string	line;
	if (!file.is_open()) {
		std::cout << "\033[1;31mERROR\033[0m File '" << av[1] << "' can't be opened" << std::endl;
		file.close();
		exit(EXIT_FAILURE);
	}
	std::getline(file, line);
	if (line.compare("date | value") != 0) {
		std::cout << "\033[1;31mERROR\033[0m Missing header column in input file" << std::endl;
		file.close();
		exit(EXIT_FAILURE);
	}
	std::getline(file, line);
	if (line.empty()) {
		std::cout << "\033[1;31mERROR\033[0m Missing actual data in input file" << std::endl;
		file.close();
		exit(EXIT_FAILURE);
	}
	file.close();
}

int	main(int ac, char **av) {
	checkArgs(ac, av);
	const std::string		txtFile = av[1];
	const std::string		csvFile = "files/data.csv";

	BitcoinExchange	btc;
	btc.storeRates(csvFile);
	btc.matchEvals(txtFile);
}
