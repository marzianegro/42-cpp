/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:20:37 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/09 18:53:21 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class	Point {

public:

	Point();
	Point(const float val_x, const float val_y);
	Point(const Point &other);
	~Point();

	Point&	operator=(const Point &source);
	
	Fixed	getCoorX() const;
	Fixed	getCoorY() const;

private:

	const Fixed _x;
	const Fixed	_y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
