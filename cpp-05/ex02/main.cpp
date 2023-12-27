/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:33:41 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 21:53:29 by mnegro           ###   ########.fr       */
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
        Bureaucrat				BureaucratA("Ciro", 2);
        Bureaucrat				BureaucratB("BureaucratB", 150);
        ShrubberyCreationForm	FormA("Shrubbery");
        RobotomyRequestForm		FormB("Robotomy");
        PresidentialPardonForm	FormC("President");

        std::cout << "\n---------------  \033[1;32mShrubbery OK\033[0m ---------------" << std::endl;
        BureaucratA.signForm(FormA);
        std::cout << std::endl;
        BureaucratA.executeForm(FormA);
        std::cout << std::endl;

        std::cout << "\n---------------  \033[1;32mRobotomy OK\033[0m---------------" << std::endl;
        BureaucratA.signForm(FormB);
        std::cout << std::endl;
        BureaucratA.executeForm(FormB);
        std::cout << std::endl;
        BureaucratA.executeForm(FormB);
        std::cout << std::endl;
        BureaucratA.executeForm(FormB);
        std::cout << std::endl;
        BureaucratA.executeForm(FormB);
        std::cout << std::endl;
        std::cout << "\n---------------  \033[1;32mPresidential Pardon OK\033[0m---------------" << std::endl;
        BureaucratA.signForm(FormC);
        std::cout << std::endl;
        BureaucratA.executeForm(FormC);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
	
    try {
        Bureaucrat				BureaucratA("BureaucratA", 2);
        Bureaucrat				BureaucratB("BureaucratB", 150);
        ShrubberyCreationForm	FormA("Shrubbery");
        RobotomyRequestForm		FormB("Robotomy");
        PresidentialPardonForm	FormC("President");

        std::cout << "\n---------------  \033[1;31mShrubbery KO\033[0m ---------------" << std::endl;
        // FormA.set_Sign(true);
        // BureaucratA.signForm(FormA); // form is already signed DA AGGIUNGERE
        std::cout << std::endl;
        BureaucratB.executeForm(FormA); // bureaucrat's grade too low
        std::cout << std::endl;
        std::cout << "\n---------------  \033[1;31mRobotomy KO\033[0m---------------" << std::endl;
        BureaucratB.signForm(FormB); // bureaucrat's grade too low
        std::cout << std::endl;
        BureaucratB.executeForm(FormB); // form is not signed
        std::cout << "\n---------------  \033[1;31mPresident Pardon KO\033[0m ---------------" << std::endl;
        BureaucratA.signForm(FormC);
        std::cout << std::endl;
        BureaucratB.signForm(FormC);
        std::cout << std::endl;
        BureaucratB.executeForm(FormC);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
