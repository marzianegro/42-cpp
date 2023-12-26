/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:35:15 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/26 18:43:55 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(std::string name, int toSign, int toExecute) : _name(name), _signed(false), _toSign(toSign), _toExecute(toExecute) {
	return;
}

Form::Form(const Form &src) : _name(src._name), _signed(src._signed), _toSign(src._toSign), _toExecute(src._toExecute) {
	*this = src;
}

Form::~Form() {
	return;
}

Form&	Form::operator=(const Form &src) {
	if (this != &src) {
		this->_signed = src._signed;
	}
	return (*this);
}

std::string	Form::getName() const {
	return (this->_name);
}

bool	Form::getWhetherSigned() const {
	return (this->_signed);
}

int	Form::getSigningGrade() const {
	return (this->_toSign);
}

int	Form::getExecutingGrade() const {
	return (this->_toExecute);

}

void	Form::beSigned(const Bureaucrat &obj) {
	try {
		if (obj.getGrade() <= this->_toSign) {
			this->_signed = true;
		} else {
			throw Form::GradeTooLowException();
		}
	} catch (const Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream &os, const Form &obj) {
	os << "Form's details\n" <<
			"Name: " << obj.getName() << std::endl <<
			"Signed status: " << obj.getWhetherSigned() << std::endl <<
			"Grade required to sign: " << obj.getSigningGrade() << std::endl <<
			"Grade required to execute: " << obj.getExecutingGrade();
	return (os);
}
