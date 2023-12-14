/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 23:01:52 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/14 23:49:52 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			this->_inventory[i] = src._inventory[i];
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Sorry pal, the inventory's already full :/" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
			if (this->_inventory[i]->getType().compare(type) == 0) {
				return (this->_inventory[i]->clone());
			}
		}
	}
	std::cout << "Sorry pal, dunno this typa Materia xP" << std::endl;
	return (NULL);
}
