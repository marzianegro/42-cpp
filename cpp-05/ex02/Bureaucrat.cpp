/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:33:54 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/21 18:51:30 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat default constructor called" << "\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat parametric constructor called" << "\n";
	if (grade < 1) {
		throw GradeTooHighException();
	} else if (grade > 150) {
		throw GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	std::cout << "Bureaucrat copy constructor called" << "\n";
	*this = src;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << "\n";
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

void	Bureaucrat::signForm(AForm &form) const {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << "\n";
	} catch (const AForm::FormAlreadySignedException &e) {
		std::cout << e.what() << "\n";
	} catch (const AForm::GradeTooLowException &e) {
		std::cout << e.what() << "\n";
	}
}

void	Bureaucrat::executeForm(AForm const &form) const {
	try {
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << "\n";
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cout << this->_name << " couldn't execute " << form.getName() << ", because " << this->_name << "'s grade is too low" << "\n";
	} catch (const AForm::FormNotSignedException &e) {
		std::cout << this->_name << " couldn't execute " << form.getName() << ", because it's not signed" << "\n";
	}
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return (os);
}
