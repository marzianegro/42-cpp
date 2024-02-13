/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:40:23 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/13 16:43:25 by mnegro           ###   ########.fr       */
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
				std::cout << "\033[1;31mERROR\033[0m Cannot divide by 0\n";
				return ;
			}
			_operands.push(operand1 / operand2);
			break;
		}
	}
}

void	RPN::execRPN(std::string exp) {
	std::istringstream	iss(exp);
	std::string			token;

	while (iss >> token) {
		if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/') {
			execOps(token);
		} else if (!isdigit(token[0])) {
			std::cout << "\033[1;31mERROR\033[0m Element is not an operand nor operator\n";
			return ;
		} else if (token.length() != 1) {
			std::cout << "\033[1;31mERROR\033[0m Operand out of range 0-9\n";
			return ;
		} else {
			_operands.push(token[0] - '0');
		}
	}
	if (_operands.size() > 1) {
		std::cout << "\033[1;31mERROR\033[0m Incomplete RPN expression\n";
		return ;
	}
	std::cout << "Result of RPN expression is: " << _operands.top() << '\n';
}
