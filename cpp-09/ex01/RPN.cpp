/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:40:23 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/14 09:24:16 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &src) {
	*this = src;
}

RPN::~RPN() {}

RPN&	RPN::operator=(const RPN &src) {
	if (this != &src) {
		this->_operands = src._operands;
	}
	return (*this);
}

void	RPN::execOps(std::string token) {
	if (_operands.size() < 2) {
		throw InvalidRPNException();
	}
	int	operand2 = _operands.top();
	_operands.pop();
	int	operand1 = _operands.top();
	_operands.pop();
	switch (token[0]) {
		case '+': {
			_operands.push(operand1 + operand2);
			break;
		} case '-': {
			_operands.push(operand1 - operand2);
			break;
		} case '*': {
			_operands.push(operand1 * operand2);
			break;
		} case '/': {
			if (operand2 == 0) {
				throw DivisionByZeroException();
			}
			_operands.push(operand1 / operand2);
			break;
		}
	}
}

void	RPN::execRPN(std::string exp) {
	std::istringstream	iss(exp);
	std::string			token;

	try {
		while (iss >> token) {
			if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/') {
				execOps(token);
			} else if (!isdigit(token[0])) {
				throw InvalidElementException();
			} else if (token.length() != 1) {
				throw OutOfRangeException();
			} else {
				_operands.push(token[0] - '0');
			}
		}
		if (_operands.size() > 1) {
			throw InvalidRPNException();
		}
		std::cout << "Result of RPN expression is: " << _operands.top() << '\n';
	} catch (std::exception &e) {
		std::cout << "\033[1;31mERROR\033[0m " << e.what();
	}
}
