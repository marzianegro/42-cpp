/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:33:41 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 14:43:19 by mnegro           ###   ########.fr       */
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

	std::cout << "\nCreating a Form with grades too low" << "\n";
	std::cout << "---------------------" << "\n";
	try {
		Form C46("C46", 489, 1435);
		std::cout << C46 << "\n";
	} catch (const std::exception &e) {
		std::cout << "C46 Form constructor failed: " << e.what() << "\n";
	}
	std::cout << "---------------------" << "\n\n";

	std::cout << "Creating a Form with grades too high" << "\n";
	std::cout << "---------------------" << "\n";
	try {
		Form D143("D143", -583, -800);
		std::cout << D143 << "\n";
	} catch (const std::exception &e) {
		std::cout << "D143 Form constructor failed: " << e.what() << "\n";
	}
	std::cout << "---------------------" << "\n\n";


	std::cout << "Signing Forms" << "\n";
	std::cout << "---------------------" << "\n";
	std::cout << "----------" << "\n";
	std::cout << "Attempting to sign -> " << A13 << "\n";
	A_ref.signForm(A13);
	std::cout << "Form A13 successfully signed by " << A_ref;
	std::cout << "----------" << "\n\n";

	std::cout << "----------" << "\n";
	std::cout << "Attempting to sign -> " << A13 << "\n";
	B_ref.signForm(A13);
	std::cout << "Form A13 signing failed by " << B_ref;	
	std::cout << "----------" << "\n\n";

	std::cout << "----------" << "\n";
	std::cout << "Attempting to sign -> " << B97 << "\n";
	A.signForm(B97);
	std::cout << "Form B97 successfully signed by " << A;
	std::cout << "----------" << "\n\n";

	std::cout << "----------" << "\n";
	std::cout << "Attempting to sign -> " << B97 << "\n";
	B.signForm(B97);
	std::cout << "Form B97 successfully signed by " << B;
	std::cout << "----------" << "\n";
	std::cout << "---------------------" << "\n";
	return (0);
}
