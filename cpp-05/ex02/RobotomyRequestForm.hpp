/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:03:36 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:59:56 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>

class	RobotomyRequestForm : public AForm {

public:
	RobotomyRequestForm(); // ocf default constructor
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &src); // ocf copy constructor
	~RobotomyRequestForm(); // ocf destructor

	RobotomyRequestForm&	operator=(const RobotomyRequestForm &src); // ocf copy assignment operator

	void	execute(Bureaucrat const &executor) const;

private:
	std::string			_target;
};

