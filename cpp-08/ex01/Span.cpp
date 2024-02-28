/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:43:11 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/28 10:54:54 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
}

Span::Span(unsigned int N) : _maxSize(N) {
}

Span::Span(const Span &src) {
	*this = src;
}

Span::~Span() {
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
	if (_spanVec.empty()) {
		throw Span::EmptySpanException();
	} else if (_spanVec.size() == 1) {
		throw Span::SizeOneSpanException();
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
	if (_spanVec.empty()) {
		throw Span::EmptySpanException();
	} else if (_spanVec.size() == 1) {
		throw Span::SizeOneSpanException();
	}
	int	min = *std::min_element(_spanVec.begin(), _spanVec.end());
	int	max = *std::max_element(_spanVec.begin(), _spanVec.end());
	return (max - min);
}
