/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:56:29 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 14:59:32 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter default constructor called\n";
}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {
	std::cout << "ScalarConverter copy constructor called\n";
	*this = src;
}

ScalarConverter::~ScalarConverter() {
	std::cout << "ScalarConverter destructor called\n";
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter &src) {
	if (this != &src) {

	}
	return (*this);
}

static void	ScalarConverter::convert(std::string literal) {
	
}
