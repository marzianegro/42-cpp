/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:25:22 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/02 17:05:52 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	AForm;

class	Intern {

public:
	Intern(); // ocf default constructor
	Intern(const Intern &src); // ocf copy constructor
	~Intern(); // ocf destructor

	Intern&	operator=(const Intern &src); // ocf copy assignment operator

	AForm*	makeForm(std::string const name, std::string const target);

private:
	AForm*	newPresidentialPardon(std::string const target);
	AForm*	newRobotomyRequest(std::string const target);
	AForm*	newShrubberyCreation(std::string const target);
	// alias for a specific type of member function pointer
	typedef	AForm*	(Intern::*MemFn)(std::string const target);
};
