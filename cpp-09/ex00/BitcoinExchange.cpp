/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:49:04 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/08 16:44:34 by mnegro           ###   ########.fr       */
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

/*	TODO:
    - read CSV file and save date and corresponding bitcoin value into std::map container
    - read input TXT file line by line
        - for each line, validate date format.
        - if date format is valid, look for exact date in map
        - if exact date is not found, find closest lower date in map
    - if a matching or closest lower date is found in map
        - validate value from TXT file (float or int between 0-1000)
        - if value is valid, multiply it by corresponding bitcoin value from map
        - output result of the multiplication to std::cout
    - continue process until reaching the end of TXT file
    - handle potential errors: issues with reading files, invalid date formats, invalid values
*/

// reading CSV file and saving date and corresponding bitcoin value into std::map container
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
		std::string	date;

		double	value;
		if (std::getline(iss, date, ',') && iss >> value) {
            _btcExc[date] = value;
        }
	}
}

// read input TXT file line by line
void	BitcoinExchange::matchEvals(const std::string &filename) {
	std::ifstream	infile(filename.c_str());
	std::string	line;

	std::getline(infile, line); // skip first line (header)
	while (std::getline(infile, line)) {
		std::istringstream	iss(line);
		std::string	date;
		std::map<std::string, double>::iterator	it;
		double	value;
		double	result;

		// find the exact or closest lower date in map
		if (std::getline(iss, date, '|') && iss >> value) {
			if (_btcExc.find(date) == _btcExc.end()) {
				it = _btcExc.upper_bound(date);
				if (it != _btcExc.begin()) {
					--it; // found the closest lower date in map
				} else {
					std::cout << "\033[1;31mERROR\033[0m No date lower than: " << date << '\n';
					continue ;
				}
			} else {
				it = _btcExc.find(date); // found the exact date in map
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
