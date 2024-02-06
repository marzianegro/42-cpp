/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:43:08 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/06 18:48:03 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

/*	std::stack is a container adapter in C++98 that provides a Last-In-First-Out
	(LIFO) data structure. It is implemented as a wrapper over other STL
	containers like std::deque, std::list, or std::vector. */

template <typename T>
class	MutantStack : public std::stack<T> {

public:
	MutantStack() {};// ocf default constructor
	MutantStack(const MutantStack &src) { // ocf copy constructor
		*this = src;
	};
	~MutantStack() {}; // ocf destructor

	MutantStack&	operator=(const MutantStack &src) { // ocf copy assignment operator
		if (this != &src) {
		}
		return (*this);
	};

	void	iteratos();

private:
};
