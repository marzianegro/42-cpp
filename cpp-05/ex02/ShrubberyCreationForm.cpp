/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:03:45 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 13:23:37 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(), _target("randomPlace") {
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 147), _target(target) {
	std::cout << "ShrubberyCreationForm parametric constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _target(src._target) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	if (this != &src) {
		this->_target = src._target;
	}
	return (*this);
};

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
}
