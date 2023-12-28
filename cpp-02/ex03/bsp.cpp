/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:29:40 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 14:02:26 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*	Binary Space Partitioning (BSP) is a method for recursively subdividing a
	space into two halves. While it's not typically used for point-in-polygon
	tests, it could be adapted for this purpose. However, given the constraints
	and the function signature from the subjects, we're going to use the
	barycentric coordinate method to determine if a point is inside a triangle.
	This method doesn't require additional classes or containers, and it's
	more straightforward than Binary Space Partitioning for this specific problem */

/*	The steps are: (1) computing the areas of the triangle, (2) computing the
	area of the three sub-triangles, and (3) checking if the point is inside
	the triangle. */

static Fixed	calculateArea(Point const a, Point const b, Point const c) {
	Fixed half(static_cast<float>(0.5));
	Fixed	area = half * ((b.getCoorX() - a.getCoorX()) * (c.getCoorY() - a.getCoorY()) - (c.getCoorX() - a.getCoorX()) * (b.getCoorY() - a.getCoorY()));
	if (area < 0) {
		area = area * -1;
	}
	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	ogTriangleArea = calculateArea(a, b, c);

	Fixed	triangle1Area = calculateArea(a, point, b);
	Fixed	triangle2Area = calculateArea(b, point, c);
	Fixed	triangle3Area = calculateArea(c, point, a);
	Fixed	totalArea = triangle1Area + triangle2Area + triangle3Area;
	/*	If any of the sub-triangles have an area of 0, the point is on the
		edge or vertex of the triangle */
	if (triangle1Area == 0 || triangle2Area == 0 || triangle3Area == 0) {
		return (false);
	}
	/*	If the point is outside the triangle, the sum of the areas of the
		sub-triangles will be greater than the area of the main triangle */
	if (ogTriangleArea == totalArea) {
		return (true);
	}
	return (false);
}
