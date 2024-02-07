/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:42:18 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/07 11:41:32 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void) {
	Span	testSpan = Span(20000);
	std::vector<int>	numbers(15000);

	srand(time(NULL));
	for (int i = 0; i < 15000; i++) {
		numbers[i] = rand();
	}
	std::vector<int>::iterator begin = numbers.begin();
	std::vector<int>::iterator end = numbers.end();
	try {
		testSpan.addRange(begin, end);
		std::cout << "Shortest span: " << testSpan.shortestSpan() << '\n';
		std::cout<< "Longest span: " << testSpan.longestSpan() << '\n';
	} catch (std::exception &e) {
		std::cout << "Caught exception: " << e.what() << '\n';
	}
	return (0);
}
