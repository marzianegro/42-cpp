/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:33:54 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 14:43:12 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name) {
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

void	Bureaucrat::signForm(Form &obj) {
	try {
		obj.beSigned(*this);
		std::cout << this->_name << " signed " << obj.getName() << std::endl;
	} catch (const Form::FormAlreadySignedException &e) {
		std::cout << e.what() << std::endl;
	} catch (const Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return (os);
}
