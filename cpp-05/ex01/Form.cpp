/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:35:15 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/21 18:37:27 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() : _signed(false), _toSign(150), _toExecute(150) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int toSign, int toExecute) : _name(name), _signed(false), _toSign(toSign), _toExecute(toExecute) {
	std::cout << "Form parametric constructor called" << std::endl;
	if (this->_toSign < 1 || this->_toExecute < 1) {
		throw GradeTooHighException();
	} else if (this->_toSign > 150 || this->_toExecute > 150) {
		throw GradeTooLowException();
	}
}

Form::Form(const Form &src) : _toSign(150), _toExecute(150) {
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

Form&	Form::operator=(const Form &src) {
	if (this != &src) {
		const_cast<std::string&>(this->_name) = src._name;
		this->_signed = src._signed;
		const_cast<int&>(this->_toSign) = src._toSign;
		const_cast<int&>(this->_toExecute) = src._toExecute;
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
	if (!this->_signed && (obj.getGrade() <= this->_toSign)) {
		this->_signed = true;
	} else if (this->_signed) {
		throw Form::FormAlreadySignedException();
	} else if (obj.getGrade() > this->_toSign) {
		throw Form::GradeTooLowException();
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
