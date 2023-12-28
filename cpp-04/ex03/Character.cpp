/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 23:06:56 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/15 18:32:50 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(const Character &src) {
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	*this = src;
}

Character::Character(const std::string &name) {
	std::cout << "Character naming constructor called" << std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	std::cout << "Character destructor called" << std::endl;
}

Character&	Character::operator=(const Character &src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i]) {
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++) {
			if (src._inventory[i]) {
				this->_inventory[i] = src._inventory[i]->clone();
			}
		}
	}
	return (*this);
}

std::string const&	Character::getName() const {
	return (this->_name);
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Sorry pal, the inventory's already full :/" << std::endl;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "Sorry pal, yourR MOOOOOM! >:D" << std::endl;
		return ;
	} else if (this->_inventory[idx]) {
		this->_inventory[idx] = NULL;
	} else {
		std::cout << "Sorry pal, this slot of the inventory is already empty :P" << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3) {
		std::cout << "Sorry pal, yourR MOOOOOM! >:D" << std::endl;
		return ;
	} else if (this->_inventory[idx]) {
		(*this->_inventory[idx]).use(target);
	} else {
		std::cout << "Sorry pal, this slot of the inventory is empty :P" << std::endl;
	}
}

AMateria*	Character::getMateria(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "Sorry pal, yourR MOOOOOM! >:D" << std::endl;
	} else if (this->_inventory[idx]) {
		return (this->_inventory[idx]);
	} else {
		std::cout << "Sorry pal, this slot of the inventory is empty :P" << std::endl;
	}
	return (NULL);
}
