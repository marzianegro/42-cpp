/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:28:00 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 14:01:21 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
	return ;
}

Point::Point(const float val_x, const float val_y) :_x(val_x), _y(val_y) {
	return ;
}

/*	The const_cast operator in C++ is used to add or remove the const qualifier
	from a variable. It's the only C++ style cast that can remove the const,
	volatile, and __unaligned attributed */
Point::Point(const Point &src) {
	const_cast<Fixed&>(this->_x) = src._x;
	const_cast<Fixed&>(this->_y) = src._y;
}

Point::~Point() {
	return ;
}

Point&	Point::operator=(const Point &src) {
	if (this != &src) {
		const_cast<Fixed&>(this->_x) = src._x;
		const_cast<Fixed&>(this->_y) = src._y;
	}
	return (*this);
}

Fixed	Point::getCoorX() const {
	return (this->_x);
}

Fixed	Point::getCoorY() const {
	return (this->_y);
}
