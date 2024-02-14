/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:40:38 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/14 09:24:17 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <stack>
#include <string>

class	RPN {

public:
	RPN(); // ocf default constructor
	RPN(const RPN &src); // ocf copy constructor
	~RPN(); // ocf destructor

	RPN&	operator=(const RPN &src); // ocf copy assignment operator

	void	execOps(std::string token);
	void	execRPN(std::string exp);

	// exceptions
	class	DivisionByZeroException : public std::exception {
	
	public:
		const char* what() const throw() {
			return ("Cannot divide by zero\n");
		}
	};
	class	InvalidElementException : public std::exception {
	
	public:
		const char* what() const throw() {
			return ("Element is not an operand nor operator\n");
		}
	};
	class	OutOfRangeException : public std::exception {
	
	public:
		const char* what() const throw() {
			return ("Operand out of range 0-9\n");
		}
	};
	class	InvalidRPNException : public std::exception {
	
	public:
		const char* what() const throw() {
			return ("RPN order not respected OR Expression missing operand/operator\n");
		}
	};

private:
	std::stack<int>	_operands; // Last In First Out (LIFO)
};
