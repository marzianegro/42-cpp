/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:48:56 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/08 16:40:13 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>

class	BitcoinExchange {

public:
	BitcoinExchange(); // ocf default constructor
	BitcoinExchange(const BitcoinExchange &src); // ocf copy constructor
	~BitcoinExchange(); // ocf destructor

	BitcoinExchange&	operator=(const BitcoinExchange &src); // ocf copy assignment operator

	void	storeRates(const std::string &filename);
	void	matchEvals(const std::string &filename);

	// exceptions

private:
	std::string	_date;
	double		_value; // can store both int and float
	std::map<std::string, double>	_btcExc; // stores date and converted value
};
