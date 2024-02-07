/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:43:08 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/07 11:14:16 by mnegro           ###   ########.fr       */
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
	MutantStack() : std::stack<T>() {};// ocf default constructor
	MutantStack(const MutantStack &src) : std::stack<T>(src) {};// ocf copy constructor
	virtual ~MutantStack() {}; // ocf destructor

	MutantStack&	operator=(const MutantStack &src) { // ocf copy assignment operator
		if (this != &src) {
			std::stack<T>::operator=(src);
		}
		return (*this);
	};

	typedef typename std::stack<T>::container_type::iterator		iterator;
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

	iterator	begin() {
		return (std::stack<T>::c.begin());
	}
	iterator	end() {
		return (std::stack<T>::c.end());
	}
	const_iterator	cbegin() const {
		return (std::stack<T>::c.begin());
	}
	const_iterator	cend() const {
		return (std::stack<T>::c.end());
	}
};
