/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:30:22 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/15 00:10:38 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &src) {
	std::cout << "Ice copy constructor called" << std::endl;
	this->_type = src._type;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice &src) {
	if (this != &src) {
		this->_type = src._type;
	}
	return (*this);
}

Ice*	Ice::clone() const {
	return (new Ice());
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;	
}
