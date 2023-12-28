/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:20:37 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:34:58 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class	Point {

public:
	Point(); // ocf default constructor
	Point(const Point &src); // ocf copy constructor
	Point(const float val_x, const float val_y);
	~Point(); // ocf destructor

	Point&	operator=(const Point &src); // ocf copy assignment operator
	
	Fixed	getCoorX() const;
	Fixed	getCoorY() const;

private:
	const Fixed _x;
	const Fixed	_y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
