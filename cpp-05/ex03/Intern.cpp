/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:25:39 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/29 02:35:15 by mnegro           ###   ########.fr       */
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

AForm&	Intern::makeForm(std::string name, std::string target) {
	AForm	*newForm = new AForm(name, target);
	std::cout << "Intern creates " << name << " form" << std::endl;
	return (*newForm);
}
