/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:56:29 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/23 15:32:05 by mnegro           ###   ########.fr       */
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

void	ScalarConverter::convert(std::string literal) {
	CheckFn		isWhat[4] = {ScalarConverter::isChar, ScalarConverter::isInt, ScalarConverter::isDouble, ScalarConverter::isFloat};
	ConvertFn	fromWhat[4] = {ScalarConverter::fromChar, ScalarConverter::fromInt, ScalarConverter::fromDouble, ScalarConverter::fromFloat};

	for (int i = 0; i < 4; i++) {
		if (isWhat[i](literal)) {
			(fromWhat[i])(literal);
			return ;
		}
	}
	if (literal == "+inf" || literal == "+inff") {
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: +inff\n";
		std::cout << "double: +inf\n";
	} else if  (literal == "-inf" || literal == "-inff") {
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: -inff\n";
		std::cout << "double: -inf\n";
	} else if (literal == "nan" || literal == "nanf") {
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: nanf\n";
		std::cout << "double: nan\n";
	} else {
		std::cout << "\033[1;31mERROR\033[0m The literal provided either contains invalid characters, or is a number far beyond the range of both float and double. Please, try again!\n";
	}
	return ;
}

bool	ScalarConverter::isChar(std::string const &literal) {
	if (literal.length() != 1 || isdigit(literal[0])) {
		return (false);
	}
	return (true);
}

bool	ScalarConverter::isInt(std::string const &literal) {
	std::istringstream	iss(literal);
	int	tryInt;

	iss >> tryInt;
	return (iss.eof() && !iss.fail());
}

bool	ScalarConverter::isFloat(std::string const &literal) {
	std::string	literalCopy;
	float	tryFloat;

	// check for literals not ending in 'f'
	if (literal[literal.length() - 1] != 'f') {
		return (false);
	} else {
		literalCopy = literal.substr(0, literal.length() - 1);
	}
	std::istringstream	iss(literalCopy);
	iss >> tryFloat;
	return (iss.eof() && !iss.fail());
}

bool	ScalarConverter::isDouble(std::string const &literal) {
	std::istringstream	iss(literal);
	double	tryDouble;

	iss >> tryDouble;
	return (iss.eof() && !iss.fail());
}

void	ScalarConverter::fromChar(std::string const &literal) {
	std::cout << "Converting from char\n";
	char	isChar = static_cast<char>(literal[0]);

	std::cout << "char: '" << isChar << "'\n";
	std::cout << "int: " << static_cast<int>(isChar) << '\n';
	std::cout << "float: " << std::fixed << std::setprecision(4) << static_cast<float>(isChar) << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(4) << static_cast<double>(isChar) << '\n';
}

void	ScalarConverter::fromInt(std::string const &literal) {
	std::cout << "Converting from int\n";
	std::istringstream iss(literal);
	int isInt;

    iss >> isInt;
	if (isInt < 0 || isInt > 127) {
		std::cout << "char: impossible\n";
	} else if (!std::isprint(isInt)) {
		std::cout << "char: non displayable\n";
	} else {
		std::cout << "char: '" << static_cast<char>(isInt) << "'\n";
	}
	std::cout << "int: " << isInt << '\n';
	std::cout << "float: " << std::fixed << std::setprecision(4) << static_cast<float>(isInt) << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(4) << static_cast<double>(isInt) << '\n';
}

void	ScalarConverter::fromFloat(std::string const &literal) {
	std::cout << "Converting from float\n";
	std::string	literalCopy = literal.substr(0, literal.length() - 1);
	std::istringstream iss(literalCopy);
	float	isFloat;

    iss >> isFloat;
	if (static_cast<int>(isFloat) < 0 || static_cast<int>(isFloat) > 127 || !literal.compare("nanf")) {
		std::cout << "char: impossible\n";
	} else if (!std::isprint(static_cast<int>(isFloat))) {
		std::cout << "char: non displayable\n";
	} else {
		std::cout << "char: '" << static_cast<char>(isFloat) << "'\n";
	}
	if (isFloat > std::numeric_limits<int>::max() || isFloat < std::numeric_limits<int>::min() || !literal.compare("nanf")) {
		std::cout << "int: impossible\n";
	} else {
		std::cout << "int: " << static_cast<int>(isFloat) << '\n';
	}
	std::cout << "float: " << std::fixed << std::setprecision(4) << isFloat << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(4) << static_cast<double>(isFloat) << '\n';
}

void	ScalarConverter::fromDouble(std::string const &literal) {
	std::cout << "Converting from double\n";
	std::istringstream iss(literal);
	double isDouble;

    iss >> isDouble;
	if (static_cast<int>(isDouble) < 0 || static_cast<int>(isDouble) > 127 || !literal.compare("nan")) {
		std::cout << "char: impossible\n";
	} else if (!std::isprint(static_cast<int>(isDouble))) {
		std::cout << "char: non displayable\n";
	} else {
		std::cout << "char: '" << static_cast<char>(isDouble) << "'\n";
	}
	if (isDouble > std::numeric_limits<int>::max() || isDouble < std::numeric_limits<int>::min() || !literal.compare("nan")) {
		std::cout << "int: impossible\n";
	} else {
		std::cout << "int: " << static_cast<int>(isDouble) << '\n';
	}
	std::cout << "float: " << std::fixed << std::setprecision(4) << static_cast<float>(isDouble) << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(4) << isDouble << '\n';
}
