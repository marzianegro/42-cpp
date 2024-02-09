/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:49:04 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/09 10:53:52 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) {
	*this = src;
}

BitcoinExchange::~BitcoinExchange() {};

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange &src) {
	if (this != &src) {
		this->_date = src._date;
		this->_value = src._value;
		this->_btcExc = src._btcExc;
	}
	return (*this);
}

void	BitcoinExchange::storeRates(const std::string &filename) {
	std::ifstream	infile(filename.c_str());

	if (!infile.is_open()) {
		std::cout << "\033[1;31mERROR\033[0m File '" << filename << "' can't be opened" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string	line;
	std::getline(infile, line);
	if (line.compare("date,exchange_rate")) {
		std::cout << "\033[1;31mERROR\033[0m Missing header column in CSV file" << std::endl;
		return ;
	}
	while (std::getline(infile, line)) {
		std::istringstream	iss(line);
		std::string			date;
		double				value;
		if (std::getline(iss, date, ',') && iss >> value) {
            _btcExc[date] = value;
        }
	}
}

void	BitcoinExchange::matchEvals(const std::string &filename) {
	std::ifstream	infile(filename.c_str());
	std::string		line;

	std::getline(infile, line); // skip first line (header)
	while (std::getline(infile, line)) {
		std::istringstream						iss(line);
		std::string								date;
		std::map<std::string, double>::iterator	it;
		double									value;
		double									result;

		// find exact or closest lower date in _btcExc
		if (std::getline(iss, date, '|') && iss >> value) {
			if (_btcExc.find(date) == _btcExc.end()) {
				it = _btcExc.upper_bound(date);
				if (it != _btcExc.begin()) {
					--it; // found closest lower date in _btcExc
				} else {
					std::cout << "\033[1;31mERROR\033[0m No date lower than: " << date << '\n';
					continue ;
				}
			} else {
				it = _btcExc.find(date); // found exact date in _btcExc
			}
		} else {
			std::cout << "\033[1;31mERROR\033[0m Invalid date format: " << date << '\n';
			continue ;
		}
		if (value < 0 || value > 1000) {
			std::cout << "\033[1;31mERROR\033[0m Value out of range: " << value << '\n';
		} else {
			result = value * it->second;
			std::cout << date << "=> " << value << " = " << result << '\n';
		}
	}
}
