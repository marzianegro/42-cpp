/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:40:38 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/13 16:30:24 by mnegro           ###   ########.fr       */
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

private:
	std::stack<int>	_operands; // LIFO
};
