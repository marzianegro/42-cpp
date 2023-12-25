/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:34:02 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/25 15:18:13 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Bureaucrat {

public:

	Bureaucrat(std::string name, int grade); // ocf constructor
	Bureaucrat(const Bureaucrat &src); // ocf copy constructor
	~Bureaucrat(); // ocf destructor

	Bureaucrat	operator=(const Bureaucrat &src); // ocf copy assignment operator

	std::string	getName() const;
	int	getGrade() const;
	void	incrementGrade();
	void	decrementGrade();

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
	int	_grade;
};

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &obj);
