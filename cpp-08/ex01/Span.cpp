/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:43:11 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/06 16:41:52 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
	std::cout << "Span default constructor called\n";
}

Span::Span(unsigned int N) : _maxSize(N) {
	std::cout << "Span parametric constructor called\n";
}

Span::Span(const Span &src) {
	std::cout << "Span copy constructor called\n";
	*this = src;
}

Span::~Span() {
	std::cout << "Span destructor called\n";
}

Span&	Span::operator=(const Span &src) {
	if (this != &src) {
		this->_spanVec = src._spanVec;
		this->_maxSize = src._maxSize;
	}
	return (*this);
}

void	Span::addNumber(int nbr) {
	if (_spanVec.size() == _maxSize) {
		throw Span::SpanAtMaxSizeException();
	} else {
		_spanVec.push_back(nbr);
	}
}

int	Span::shortestSpan() {
	if (_spanVec.empty() || _spanVec.size() == 1) {
		throw Span::NoSpanFoundException();
	}
	std::sort(_spanVec.begin(), _spanVec.end());
	int	shortestSpan = _spanVec[1] - _spanVec[0];
	for (std::vector<int>::iterator it = _spanVec.begin() + 1; it != _spanVec.end() - 1; it++) {
		int	currentSpan = *(it + 1) - *it;
		if (currentSpan < shortestSpan) {
			shortestSpan = currentSpan;
		}
	}
	return (shortestSpan);
}

int	Span::longestSpan() {
	if (_spanVec.empty() || _spanVec.size() == 1) {
		throw Span::NoSpanFoundException();
	}
	int	min = *std::min_element(_spanVec.begin(), _spanVec.end());
	int	max = *std::max_element(_spanVec.begin(), _spanVec.end());
	return (max - min);
}
