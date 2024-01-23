/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:33:41 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 14:44:12 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	std::cout << "---------- CONSTRUCTORS ----------\n";
	Intern	someRandomIntern;
	AForm	*SCForm;
	AForm	*RRForm;
	AForm	*PPForm;
	AForm	*IEForm;

	std::cout << "\n---------- \033[1;32mExisting Forms OK\033[0m ----------\n";
	SCForm = someRandomIntern.makeForm("ShrubberyCreation", "Bender");
	std::cout << "\n";
	RRForm = someRandomIntern.makeForm("RobotomyRequest", "Bender");
	std::cout << "\n";
	PPForm = someRandomIntern.makeForm("PresidentialPardon", "Bender");

	std::cout << "\n---------- \033[1;31mNon-Existent Form InternExploitation KO\033[0m ----------\n";
	IEForm = someRandomIntern.makeForm("InternExploitation", "Bender");
	std::cout << "\n";
	(void)IEForm;

	std::cout << "---------- DESTRUCTORS ----------\n";
	delete SCForm;
	delete RRForm;
	delete PPForm;
    return (0);
}
