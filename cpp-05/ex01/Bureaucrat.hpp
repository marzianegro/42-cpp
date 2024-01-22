/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:34:02 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/21 18:30:17 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form; // forward declaration

class	Bureaucrat {

public:
	Bureaucrat(); // ocf default constructor
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src); // ocf copy constructor
	~Bureaucrat(); // ocf destructor

	Bureaucrat	operator=(const Bureaucrat &src); // ocf copy assignment operator

	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		decrementGrade();

	void	signForm(Form &obj);

	// exceptions
	class	GradeTooHighException : public std::exception {
	
	public:
		const char* what() const throw() {
       		return "Grade too high!";
		}
	};
	class	GradeTooLowException : public std::exception {
	
	public:
		const char* what() const throw() {
        	return "Grade too low!";
		}
	};

private:
	const std::string	_name;
	int					_grade;
};

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &obj);
