/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:35:21 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/21 18:48:36 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat; // forward declaration

class	AForm {

public:
	AForm(); // ocf default constructor
	AForm(std::string name, int toSign, int toExecute);
	AForm(const AForm &src); // ocf copy constructor
	virtual ~AForm(); // ocf destructor

	AForm&	operator=(const AForm &src); // ocf copy assignment operator

	std::string	getName() const;
	bool		getWhetherSigned() const;
	int			getSigningGrade() const;
	int			getExecutingGrade() const;

	void	setWhetherSigned(bool status);

	void			beSigned(Bureaucrat const &obj);
	void			checkFormForExec(Bureaucrat const &executor) const;
	virtual void	execute(Bureaucrat const &executor) const = 0;

	// exceptions
	class	GradeTooLowException : public std::exception {

	public:
		const char* what() const throw() {
       		return ("Grade too low!");
		}
	};
	class	GradeTooHighException : public std::exception {

	public:
		const char* what() const throw() {
       		return ("Grade too high!");
		}
	};
	class	FormAlreadySignedException : public std::exception {

	public:
		const char* what() const throw() {
       		return "Form already signed!";
		}
	};
	class	FormNotSignedException : public std::exception {
	
	public:
		const char* what() const throw() {
			return ("Form not signed!");
		}
	};

private:
	const std::string	_name;
	bool				_signed;
	const int			_toSign;
	const int			_toExecute;
};

std::ostream&	operator<<(std::ostream &os, const AForm &obj);
