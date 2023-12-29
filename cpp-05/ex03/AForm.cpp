/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:15:32 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/29 02:25:00 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("form"), _signed(false), _toSign(150), _toExecute(150) {
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, int toSign, int toExecute) : _name(name), _signed(false), _toSign(toSign), _toExecute(toExecute) {
	std::cout << "AForm parametric constructor called" << std::endl;
	if (this->_toSign < 1 || this->_toExecute < 1)
		throw GradeTooHighException();
	else if (this->_toSign > 150 || this->_toExecute > 150)
		throw GradeTooLowException();
	return;
}

AForm::AForm(const AForm &src) : _name(src._name), _signed(src._signed), _toSign(src._toSign), _toExecute(src._toExecute) {
	std::cout << "AForm copy constructor called" << std::endl;
	*this = src;
}

AForm::~AForm() {
	std::cout << "AForm destructor called" << std::endl;
}

AForm&	AForm::operator=(const AForm &src) {
	if (this != &src) {
		this->_signed = src._signed;
	}
	return (*this);
}

std::string	AForm::getName() const {
	return (this->_name);
}

bool	AForm::getWhetherSigned() const {
	return (this->_signed);
}

int	AForm::getSigningGrade() const {
	return (this->_toSign);
}

int	AForm::getExecutingGrade() const {
	return (this->_toExecute);

}

void	AForm::setWhetherSigned(bool status) {
	this->_signed = status;
}

void	AForm::beSigned(const Bureaucrat &obj) {
	if (!this->_signed && (obj.getGrade() <= this->_toSign)) {
		this->_signed = true;
	} else if (this->_signed) {
		throw AForm::FormAlreadySignedException();
	} else if (obj.getGrade() > this->_toSign) {
		throw AForm::GradeTooLowException();
	}
}

void	AForm::checkFormForExec(Bureaucrat const &executor) const {
	if (!this->_signed) {
		throw AForm::FormNotSignedException();
	} else if (executor.getGrade() > this->_toExecute) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		return ;
	}
}

std::ostream&	operator<<(std::ostream &os, const AForm &obj) {
	os << "AForm's details\n" <<
			"Name: " << obj.getName() << std::endl <<
			"Signed status: " << obj.getWhetherSigned() << std::endl <<
			"Grade required to sign: " << obj.getSigningGrade() << std::endl <<
			"Grade required to execute: " << obj.getExecutingGrade();
	return (os);
}
