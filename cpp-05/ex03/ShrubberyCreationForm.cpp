/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:03:45 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 14:44:19 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(), _target("randomPlace") {
	std::cout << "ShrubberyCreationForm default constructor called" << "\n"; 
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm parametric constructor called" << "\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _target(src._target) {
	std::cout << "ShrubberyCreationForm copy constructor called" << "\n";
};

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << "\n";
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	if (this != &src) {
		this->_target = src._target;
	}
	return (*this);
};

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	(void)executor;
	std::string		filename = this->_target + "_shrubbery";
	std::ofstream	file(filename);
	if (!file.is_open()) {
        std::cout << "Error: can't create file" << "\n";
        return ;
	} else {
		file << "	       .     .  .      +     .      .          ." << "\n";
		file << "     .       .      .     #       .           ." << "\n";
		file << "        .      .         ###            .      .      ." << "\n";
		file << "      .      .    #:. .:#####:. .:#   .      ." << "\n";
		file << "          .      .  #############   ." << "\n";
		file << "       .      #:.    .:#######:.    .:#   .        .       ." << "\n";
		file << "  .              ###################         .        ." << "\n";
		file << "        .     #:.   #############   .:#    .       ." << "\n";
		file << "     .     .   #######################                   ." << "\n";
		file << "                . #################            .      ." << "\n";
		file << "    .    #:. ...  .:#############:.  ... .:#      ." << "\n";
		file << "      .      ###########################       .     ." << "\n";
		file << "    .    .      #####################     .      ." << "\n";
		file << "            .            000           .     ." << "\n";
		file << "       .         .   .   000     .        .       ." << "\n";
		file << ".. .. ..................O000O........................ ...... ..." << "\n";
	}
}
