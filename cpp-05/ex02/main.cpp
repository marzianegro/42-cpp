/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:33:41 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 14:43:44 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
    try {
        std::cout << "\n---------- CONSTRUCTORS ----------" << "\n";
        Bureaucrat				Bob("Bob", 2);
        Bureaucrat				John("John", 150);
        ShrubberyCreationForm	FormA("Shrubbery");
        RobotomyRequestForm		FormB("Robotomy");
        PresidentialPardonForm	FormC("President");

        std::cout << "\n---------- \033[1;32mShrubbery OK\033[0m ----------" << "\n";
        std::cout << Bob << "\n" << FormA << "\n\n";
		std::cout << "--- Signing ---\n";
		Bob.signForm(FormA);
		std::cout << "--- Executing ---\n";
        Bob.executeForm(FormA);
        std::cout << "\n";

        std::cout << "--------------- \033[1;32mRobotomy OK\033[0m---------------" << "\n";
		std::cout << Bob << "\n" << FormB << "\n\n";
		std::cout << "--- Signing ---\n";
        Bob.signForm(FormB);
        std::cout << "--- Executing ---\n";
        Bob.executeForm(FormB);
        std::cout << "\n";
        Bob.executeForm(FormB);
        std::cout << "\n";
        Bob.executeForm(FormB);
        std::cout << "\n";
        Bob.executeForm(FormB);
        std::cout << "\n";

        std::cout << "--------------- \033[1;32mPresidential Pardon OK\033[0m---------------" << "\n";
		std::cout << Bob << "\n" << FormC << "\n\n";
		std::cout << "--- Signing ---\n";
        Bob.signForm(FormC);
		std::cout << "--- Executing ---\n";
        Bob.executeForm(FormC);
        std::cout << "\n";
        std::cout << "---------- DESTRUCTORS ----------" << "\n";
    } catch (std::exception &e) {
        std::cout << e.what() << "\n";
    }

    try {
        std::cout << "\n----------  CONSTRUCTORS ----------" << "\n";
        Bureaucrat				Bob("Bob", 2);
        Bureaucrat				John("John", 150);
        ShrubberyCreationForm	FormA("Shrubbery");
        RobotomyRequestForm		FormB("Robotomy");
        PresidentialPardonForm	FormC("President");

        std::cout << "\n--------------- \033[1;31mShrubbery KO\033[0m ---------------" << "\n";
        FormA.setWhetherSigned(true);
		std::cout << Bob << "\n" << FormA << "\n\n";
		std::cout << "--- Signing ---\n";
        Bob.signForm(FormA); // form is already signed
		std::cout << "\n" << John << "\n" << FormA << "\n\n";
		std::cout << "--- Executing ---\n";
        John.executeForm(FormA); // bureaucrat's grade too low
        std::cout << "\n";
	
        std::cout << "--------------- \033[1;31mRobotomy KO\033[0m---------------" << "\n";
		std::cout << John << "\n" << FormB << "\n\n";
		std::cout << "--- Signing ---\n";
        John.signForm(FormB); // bureaucrat's grade too low
		std::cout << "--- Executing ---\n";
        John.executeForm(FormB); // form is not signed
        std::cout << "\n";

        std::cout << "--------------- \033[1;31mPresident Pardon KO\033[0m ---------------" << "\n";
		std::cout << Bob << "\n" << FormC << "\n\n";
		std::cout << "--- Signing ---\n";
        Bob.signForm(FormC); // form gets signed, so John can't std::cout << "--- Executing ---\n";
		std::cout << "\n" << John << "\n" << FormC << "\n\n";
		std::cout << "--- Signing ---\n";
        John.signForm(FormC); // form is already signed
        std::cout << "--- Executing ---\n";
        John.executeForm(FormC); // bureaucrat's grade is too low
        std::cout << "\n";
        std::cout << "---------- DESTRUCTORS ----------" << "\n";
    } catch (std::exception &e) {
        std::cout << e.what() << "\n";
    }
    return (0);
}
