/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:08:35 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/14 15:02:36 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
	this->_type = "Fox";
}

Animal::Animal(const Animal &src) {
	std::cout << "Animal copy constructor called" << std::endl;
	this->_type = src._type;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal &src) {
	if (this != &src) {
		this->_type = src._type;
	}
	return (*this);
}

std::string	Animal::getType() const {
	return (this->_type);
}

void	Animal::makeSound() const {
	std::cout << this->_type << " goes... Wait... WHAT DOES THE FOX SAY?!" << std::endl;
}

