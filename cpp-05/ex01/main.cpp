/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:33:41 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/26 18:40:58 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	A("A", 1);
	Bureaucrat	B("B", 132);
	Bureaucrat	&A_ref = A;
	Bureaucrat	&B_ref = B;
	Form	A13("A13", 4, 6);
	Form	B97("B97", 146, 135);

	std::cout << "\nCreating a Form for grades too low" << std::endl;
	std::cout << "---------------------" << std::endl;
	try {
		Form C46("C46", 489, 1435);
		std::cout << C46 << std::endl;
	} catch (const std::exception &e) {
		std::cout << "C46 Form constructor failed " << e.what() << '\n';
	}
	std::cout << "---------------------" << std::endl << std::endl;

	std::cout << "\nCreating a Form for grades too high" << std::endl;
	std::cout << "---------------------" << std::endl;
	try {
		Form D143("D143", -583, -800);
		std::cout << D143 << std::endl;
	} catch (const std::exception &e) {
		std::cout << "D143 Form constructor failed " << e.what() << '\n';
	}
	std::cout << "---------------------" << std::endl << std::endl;


	std::cout << "Signing Forms" << std::endl;
	std::cout << "---------------------" << std::endl;

	std::cout << "----------" << std::endl;
	std::cout << "Attempting to sign -> " << A13 << std::endl;
	// A13.beSigned(A_ref);
	A_ref.signForm(A13);
	std::cout << "Form A13 successfully signed by " << A_ref;
	std::cout << "----------" << std::endl << std::endl;

	std::cout << "----------" << std::endl;
	std::cout << "Attempting to sign -> " << A13 << std::endl;
	// A13.beSigned(B_ref);
	B_ref.signForm(A13);
	std::cout << "Form A13 signing failed by " << B_ref;	
	std::cout << "----------" << std::endl << std::endl;

	std::cout << "----------" << std::endl;
	std::cout << "Attempting to sign -> " << B97 << std::endl;
	// B97.beSigned(A);
	A.signForm(B97);
	std::cout << "Form B97 successfully signed by " << A;
	std::cout << "----------" << std::endl << std::endl;

	std::cout << "----------" << std::endl;
	std::cout << "Attempting to sign -> " << B97 << std::endl;
	// B97.beSigned(B);
	B.signForm(B97);
	std::cout << "Form B97 successfully signed by " << B;
	std::cout << "----------" << std::endl;
	std::cout << "---------------------" << std::endl;
	return (0);
}
