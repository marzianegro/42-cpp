/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:30:08 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/15 18:32:50 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria() {
	std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure &src) : AMateria(src) {
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure&	Cure::operator=(const Cure &src) {
	if (this != &src) {
		this->_type = src._type;
	}
	return (*this);
}

// check this
AMateria*	Cure::clone() const {
	return (new Cure());
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
