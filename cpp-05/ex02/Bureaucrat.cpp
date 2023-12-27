/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:33:54 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 21:47:25 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name) {
	*this = src;
}

Bureaucrat::~Bureaucrat() {
	return ;
}

Bureaucrat	Bureaucrat::operator=(const Bureaucrat &src) {
	if (this != &src) {
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
	if (this->_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade() {
	this->_grade++;
	if (this->_grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::signForm(AForm &form) const {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	} catch (const std::exception &e) {
		std::cout << this->_name << " couldn't sign " << form.getName() << ", because requirements were not met" << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form) const {
	try {
		form.execute(*this);
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cout << this->_name << " couldn't sign " << form.getName() << ", because " << this->_name << "'s grade is too low" << std::endl;
	} catch (const AForm::FormNotSignedException &e) {
		std::cout << this->_name << " couldn't sign " << form.getName() << ", because it's not signed" << std::endl;
	}
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return (os);
}
