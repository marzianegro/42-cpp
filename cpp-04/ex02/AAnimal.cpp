/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:08:35 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/14 22:11:15 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "AAnimal default constructor called" << std::endl;
	this->_type = "Fox";
}

AAnimal::AAnimal(const AAnimal &src) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	this->_type = src._type;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal &src) {
	if (this != &src) {
		this->_type = src._type;
	}
	return (*this);
}

std::string	AAnimal::getType() const {
	return (this->_type);
}

void	AAnimal::makeSound() const {
	std::cout << this->_type << " goes... Wait... WHAT DOES THE FOX SAY?!" << std::endl;
}

