/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:55:14 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 13:59:01 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	Point	inside(3, 1);
	Point	outside(10, 10);
	Point	vertex(2, 6); // outside
	Point	edge(2, 0); // outside
	bool	insidePoint = bsp(Point(0, 0), Point(2, 6), Point(4, 0), inside);
	bool	outsidePoint = bsp(Point(0, 0), Point(2, 6), Point(4, 0), outside);
	bool	vertexPoint = bsp(Point(0, 0), Point(2, 6), Point(4, 0), vertex);
	bool	edgePoint = bsp(Point(0, 0), Point(2, 6), Point(4, 0), edge);

	std::cout << "Point(3, 1) is " << (insidePoint ? "inside" : "outside") << " the triangle" << std::endl;
	std::cout << "Point(10, 10) is " << (outsidePoint ? "inside" : "outside") << " the triangle" << std::endl;
	std::cout << "Point(2, 6) is " << (vertexPoint ? "inside" : "outside") << " the triangle" << std::endl;
	std::cout << "Point(2, 0) is " << (edgePoint ? "inside" : "outside") << " the triangle" << std::endl;
	return (0);
}
