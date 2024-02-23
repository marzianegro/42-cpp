/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:03:45 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/23 10:07:41 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(), _target("randomPlace") {
	std::cout << "RobotomyRequestForm default constructor called" << "\n";
	srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm parametric constructor called" << "\n";
	srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src), _target(src._target) {
	std::cout << "RobotomyRequestForm copy constructor called" << "\n";
	srand(time(0));
};

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called" << "\n";
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
	if (this != &src) {
		this->_target = src._target;
	}
	return (*this);
};

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	checkFormForExec(executor);
	std::cout << "* LOUD AND UNBEARABLE DRILLING NOISE *" << "\n";
	int	n = rand();
	if (n % 2 == 0) {
		std::cout << "Oh well, " << this->_target << " has been successfully robotomized!" << "\n";
	} else {
		std::cout << "Phew, " << this->_target << "'s robomy has failed!" << "\n";
	}
}
