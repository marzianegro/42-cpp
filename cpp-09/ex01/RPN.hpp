/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:40:38 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/09 11:10:41 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class	RPN {

public:
	RPN(); // ocf default constructor
	RPN(const RPN &src); // ocf copy constructor
	~RPN(); // ocf destructor

	RPN&	operator=(const RPN &src); // ocf copy assignment operator

private:
	std::stack<int>	_operands; // LIFO
	char			_operator;
};
