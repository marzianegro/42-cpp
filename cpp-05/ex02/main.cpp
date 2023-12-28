/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:33:41 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/28 15:39:16 by mnegro           ###   ########.fr       */
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
        std::cout << "\n---------- CONSTRUCTORS ----------" << std::endl;
        Bureaucrat				Bob("Bob", 2);
        Bureaucrat				John("John", 150);
        ShrubberyCreationForm	FormA("Shrubbery");
        RobotomyRequestForm		FormB("Robotomy");
        PresidentialPardonForm	FormC("President");

        std::cout << "\n---------- \033[1;32mShrubbery OK\033[0m ----------" << std::endl;
        Bob.signForm(FormA);
        std::cout << std::endl;
        Bob.executeForm(FormA);
        std::cout << std::endl;

        std::cout << "--------------- \033[1;32mRobotomy OK\033[0m---------------" << std::endl;
        Bob.signForm(FormB);
        std::cout << std::endl;
        Bob.executeForm(FormB);
        std::cout << std::endl;
        Bob.executeForm(FormB);
        std::cout << std::endl;
        Bob.executeForm(FormB);
        std::cout << std::endl;
        Bob.executeForm(FormB);
        std::cout << std::endl;
        std::cout << "--------------- \033[1;32mPresidential Pardon OK\033[0m---------------" << std::endl;
        Bob.signForm(FormC);
        std::cout << std::endl;
        Bob.executeForm(FormC);
        std::cout << std::endl;
        std::cout << "---------- DESTRUCTORS ----------" << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
	
    try {
        std::cout << "\n----------  CONSTRUCTORS ----------" << std::endl;
        Bureaucrat				Bob("Bob", 2);
        Bureaucrat				John("John", 150);
        ShrubberyCreationForm	FormA("Shrubbery");
        RobotomyRequestForm		FormB("Robotomy");
        PresidentialPardonForm	FormC("President");

        std::cout << "\n--------------- \033[1;31mShrubbery KO\033[0m ---------------" << std::endl;
        FormA.setWhetherSigned(true);
        Bob.signForm(FormA); // form is already signed
        std::cout << std::endl;
        John.executeForm(FormA); // bureaucrat's grade too low
        std::cout << std::endl;
        std::cout << "--------------- \033[1;31mRobotomy KO\033[0m---------------" << std::endl;
        John.signForm(FormB); // bureaucrat's grade too low
        std::cout << std::endl;
        John.executeForm(FormB); // form is not signed
        std::cout << std::endl;
        std::cout << "--------------- \033[1;31mPresident Pardon KO\033[0m ---------------" << std::endl;
        Bob.signForm(FormC); // form gets signed, so John can't
        std::cout << std::endl;
        John.signForm(FormC); // form is already signed
        std::cout << std::endl;
        John.executeForm(FormC); // bureaucrat's grade is too low
        std::cout << std::endl;
        std::cout << "---------- DESTRUCTORS ----------" << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
