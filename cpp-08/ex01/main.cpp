/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:42:18 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/28 11:02:38 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void){
	Span	s1(5);
	Span	s2;
	
	std::cout << "\n----- Testing out errors -----\n";
	try {
		s1.shortestSpan();
	} catch (const std::exception &e){
		std::cout << e.what() << '\n';
	}
	try {
		s1.longestSpan();
	} catch (const std::exception &e){
		std::cout << e.what() << '\n';
	}
	try {
		s1.addNumber(6);
		std::cout << "Trying s1.addNumber(6)\n";;
	} catch (const std::exception &e) {
		std::cout << e.what() << '\n';
	}
	try {
		s1.shortestSpan();
	} catch (const std::exception &e){
		std::cout << e.what() << '\n';
	}
	try {
		s1.longestSpan();
	} catch (const std::exception &e){
		std::cout << e.what() << '\n';
	}

	std::cout << "\n----- Testing with addNumber() from subject -----\n";
	try {
		s1.addNumber(3);
		std::cout << "Trying s1.addNumber(3)\n";;
		s1.addNumber(17);
		std::cout << "Trying s1.addNumber(17)\n";
		s1.addNumber(9);
		std::cout << "Trying s1.addNumber(9)\n";
		s1.addNumber(11);
		std::cout << "Trying s1.addNumber(11)\n";

		std::cout << "\nShortest span: " << s1.shortestSpan() << '\n';
		std::cout << "Longest span:  " << s1.longestSpan() << '\n';
	} catch (const std::exception &e){
		std::cout << e.what() << '\n';
	}
	try {
		std::cout << "\nTrying s1.addNumber(0)\n";
		s1.addNumber(0);
	} catch (const std::exception &e) {
		std::cout << e.what() << '\n';
	}

	std::cout << "\n----- Testing with large addRange() -----\n";
	Span				s3(15000);
	std::vector<int>	numbers3(15000);

	srand(time(NULL));
	for (int i = 0; i < 15000; i++) {
		numbers3[i] = rand() % 30000;
	}
	std::vector<int>::iterator begin3 = numbers3.begin();
	std::vector<int>::iterator end3 = numbers3.end();
	try {
		s3.addRange(begin3, end3);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << '\n';		
	}
	try {
		std::cout << "Shortest span: " << s3.shortestSpan() << '\n';
		std::cout << "Longest span:  " << s3.longestSpan() << '\n';
	} catch (const std::exception &e){
		std::cout << e.what() << '\n';
	}

	std::cout << "\n----- Testing with small addRange() -----\n";
	Span				s4(100);
	std::vector<int>	numbers4(100);

	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		numbers4[i] = rand() % 100;
	}
	std::vector<int>::iterator begin4 = numbers4.begin();
	std::vector<int>::iterator end4 = numbers4.end();
	try {
		s4.addRange(begin4, end4);
	} catch (const std::exception &e) {
		std::cout << e.what() << '\n';		
	}
	try {
		std::cout << "Shortest span: " << s4.shortestSpan() << '\n';
		std::cout << "Longest span:  " << s4.longestSpan() << '\n';
	} catch (const std::exception &e){
		std::cout << e.what() << '\n';
	}
}
