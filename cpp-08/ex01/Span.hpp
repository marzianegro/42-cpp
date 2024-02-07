/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:42:54 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/07 11:41:33 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

class	Span {

public:
	Span(); // ocf default constructor
	Span(unsigned int N);
	Span(const Span &src); // ocf copy constructor
	~Span(); // ocf destructor

	Span&	operator=(const Span &src); // ocf copy assignment operator

	void	addNumber(int nbr);
	int		shortestSpan();
	int		longestSpan();

	template <typename Iterator>
	void	addRange(Iterator begin, Iterator end) {
		if (_spanVec.size() == _maxSize) {
			throw SpanAtMaxSizeException();
		} else if (std::distance(begin, end) <= _maxSize) {
			_spanVec.assign(begin, end);
		} else {
			_spanVec.assign(begin, begin + _maxSize - _spanVec.size());
			std::cout << _spanVec.size() << '\n';
			throw SpanAtMaxSizeException();
		}
	}

	// exceptions
	class	SpanAtMaxSizeException : public std::exception {
	
	public:
		const char* what() const throw() {
			return ("Span is already at maximum size");
		}
	};
	class	NoSpanFoundException : public std::exception {

	public:
		const char* what() const throw() {
			return ("No span was found");
		}
	};

private:
	std::vector<int>	_spanVec;
	unsigned int	_maxSize;
};
