/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:25:22 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/21 20:09:40 by ggiannit         ###   ########.fr       */
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
