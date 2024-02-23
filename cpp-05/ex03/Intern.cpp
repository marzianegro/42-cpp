/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:25:39 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/23 10:23:24 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &src) {
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

Intern&	Intern::operator=(const Intern &src) {
	if (this != &src) {
	}
	return (*this);
}

AForm*	Intern::newPresidentialPardon(std::string const target) {
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::newRobotomyRequest(std::string const target) {
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::newShrubberyCreation(std::string const target) {
	return (new ShrubberyCreationForm(target));
}

/*	Pointers to member functions in C++ are used to store and invoke member
	functions of a class. They can be particularly useful in certain scenarios,
	inluding a Function Table. If you have a set of member functions that you
	want to call based on some condition or input, you can create a table (array)
	of pointers to member functions. You can then index into the table to call
	the appropriate function. */
AForm*	Intern::makeForm(std::string const name, std::string const target) {
	std::string	formName[3] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
	MemFn		formType[3]	= {&Intern::newPresidentialPardon, &Intern::newRobotomyRequest, &Intern::newShrubberyCreation};

	for (int i = 0; i < 3; i++) {
		if (formName[i].compare(name) == 0) {
			std::cout << "Intern successfully created " << name << " form" << std::endl;
			return ((this->*formType[i])(target));
		}
	}
	std::cout << "Intern failed to create " << name << " form, because prototype doesn't exist\n";
	return (NULL);
}
