/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:33:41 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 14:43:02 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "Trying to create a Bureaucrat of grade -8\n";
	try {
		Bureaucrat A("A", -8);
	} catch (std::exception &e) {
		std::cout << e.what() << " exception thrown\n";
	} catch (...) {
		std::cout << "Default exception thrown\n";
	}
	/*	This is a catch-all handler, which will catch any type of exception
		that is not caught by the previous catch blocks */

	std::cout << "\nTrying to create a Bureaucrat of grade 76 and increment it by 75\n";
	try {
		Bureaucrat B("B", 76);
		for (int i = 0; i > 77; i++) {
			B.incrementGrade();
		}
		std::cout << "Bureaucrat's grade 76 incremented to grade 1\n";
	} catch (std::exception &e) {
		std::cout << e.what() << " exception thrown\n";
	} catch (...) {
		std::cout << "Default exception thrown\n";
	}

	std::cout << "\nOverloading (<<) Bureaucrat's grade 80\n";
	try {
		Bureaucrat C("C", 80);
		std::cout << C;
	} catch (std::exception &e) {
		std::cout << e.what() << " exception thrown\n";
	} catch (...) {
		std::cout << "Default exception thrown\n";
	}

	std::cout << "\nTrying to increment Bureaucrat's grade of 1\n";
	try {
		Bureaucrat D("D", 1);
		std::cout << D;
		D.incrementGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << " exception thrown\n";
	} catch (...) {
		std::cout << "Default exception thrown\n";
	}
	return (0);
}
