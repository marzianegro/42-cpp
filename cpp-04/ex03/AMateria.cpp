/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:18:59 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/15 17:59:00 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::AMateria(std::string const &type) {
	this->_type = type;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria &src) {
	if (this != &src) {
		this->_type = src._type;
	}
	return (*this);
}

std::string const&	AMateria::getType() const {
	return (this->_type);
}

void	AMateria::use(ICharacter &target) {
	std::cout << "Mysterious Materia in use on " << target.getName() << std::endl;
}
