/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:50:16 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/02 19:00:26 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>

class	ScalarConverter {

public:
	static void	convert(std::string literal);

private:
	ScalarConverter(); // ocf default constructor
	ScalarConverter(const ScalarConverter &src); // ocf copy constructor
	~ScalarConverter(); // ocf destructor

	ScalarConverter&	operator=(const ScalarConverter &src); // ocf copy assignment operator

	static bool	isChar(std::string const &literal);
	static bool	isInt(std::string const &literal);
	static bool	isFloat(std::string const &literal);
	static bool	isDouble(std::string const &literal);

	static void	fromChar(std::string const &literal);
	static void	fromInt(std::string const &literal);
	static void	fromFloat(std::string const &literal);
	static void	fromDouble(std::string const &literal);
};

// alias for a specific type of function pointer
typedef bool	(*CheckFn)(std::string const &literal);
typedef	void	(*ConvertFn)(std::string const &literal);
