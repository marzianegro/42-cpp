/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:50:16 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 14:59:33 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	ScalarConverter {

public:
	ScalarConverter(); // ocf default constructor
	ScalarConverter(const ScalarConverter &src); // ocf copy constructor
	~ScalarConverter(); // ocf destructor

	ScalarConverter&	operator=(const ScalarConverter &src); // ocf copy assignment operator

	static void	convert(std::string literal);

private:
};
