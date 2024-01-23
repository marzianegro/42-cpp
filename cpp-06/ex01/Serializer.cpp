/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:02:10 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 15:08:23 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
	std::cout << "Serializer default constructor called\n";
}

Serializer::Serializer(const Serializer &src) {
	std::cout << "Serializer copy constructor called\n";
	*this = src;
}

Serializer::~Serializer() {
	std::cout << "Serializer destructor called\n";
}

Serializer&	Serializer::operator=(const Serializer &src) {
	if (this != &src) {

	}
	return (*this);
}

static uintptr_t	Serializer::serialize(Data* ptr) {

}

static Data*	deserialize(uintptr_t raw) {
	
}
