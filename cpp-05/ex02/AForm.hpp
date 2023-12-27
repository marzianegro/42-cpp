/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:35:21 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 13:23:37 by mnegro           ###   ########.fr       */
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

	void	beSigned(const Bureaucrat &obj);
	virtual void	execute(Bureaucrat const &executor) const = 0;

	class	GradeTooLowException : public std::exception {
	
	public:

		const char* what() const throw() {
       		return "Grade too low!";
		}
	};
	class	GradeTooHighException : public std::exception {

	public:

		const char* what() const throw() {
       		return "Grade too high!";
		}
	};

private:

	const std::string	_name;
	bool				_signed;
	const int			_toSign;
	const int			_toExecute;

};

std::ostream&	operator<<(std::ostream &os, const AForm &obj);
