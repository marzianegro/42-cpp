/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:33:54 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/21 18:29:56 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat parametric constructor called" << std::endl;
	if (grade < 1) {
		throw GradeTooHighException();
	} else if (grade > 150) {
		throw GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat	Bureaucrat::operator=(const Bureaucrat &src) {
	if (this != &src) {
		const_cast<std::string&>(this->_name) = src._name;
		this->_grade = src._grade;
	}
	return (*this);
}

std::string	Bureaucrat::getName() const {
	return (this->_name);
}

int	Bureaucrat::getGrade() const {
	return (this->_grade);
}

void	Bureaucrat::incrementGrade() {
	this->_grade--;
	if (this->_grade < 1) {
		throw GradeTooHighException();
	}
}

void	Bureaucrat::decrementGrade() {
	this->_grade++;
	if (this->_grade > 150) {
		throw GradeTooLowException();
	}
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return (os);
}
