/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:03:45 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/28 15:10:46 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(), _target("randomPlace") {
	std::cout << "RobotomyRequestForm default constructor called" << std::endl; 
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm parametric constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src), _target(src._target) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
};

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
	if (this != &src) {
		this->_target = src._target;
	}
	return (*this);
};

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	checkFormForExec(executor);
	std::cout << "* LOUD AND UNBEARABLE DRILLING NOISE *" << std::endl;
	srand(time(0));
	int	n = rand();
	if (n % 2 == 0) {
		std::cout << "Oh well, " << this->_target << " has been successfully robotomized!" << std::endl;
	} else {
		std::cout << "Phew, " << this->_target << "'s robomy has failed!" << std::endl;
	}
}
