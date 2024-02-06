/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:42:54 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/06 12:40:26 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>

class	Span {

public:
	Span(); // ocf default constructor
	Span(unsigned int N);
	Span(const Span &src); // ocf copy constructor
	~Span(); // ocf destructor

	Span&	operator=(const Span &src); // ocf copy assignment operator

	void	addNumber(int nbr);
	int	shortestSpan();
	int	longestSpan();

	// exceptions
	class	SpanAtMaxSize : public std::exception {
	
	public:
		const char* what() const throw() {
			return ("Span is already at maximum size");
		}
	};
	class	NoSpanFound : public std::exception {

	public:
		const char* what() const throw() {
			return ("No span was found");
		}
	};

private:
	std::vector<int>	_spanVec;
	unsigned int	_maxSize;
};
