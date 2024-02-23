/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:02:10 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/23 10:47:32 by mnegro           ###   ########.fr       */
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

/*	reinterpret_cast is used for this kind of conversion because it
	allows you to convert any pointer type to an integer type. */
uintptr_t	Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr)); // unsigned integer representation of the pointer
}

Data*	Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw)); // Data* pointer representation of the unsigned integer
}

/*	reinterpret_cast is a powerful tool in C++ that allows for low-level
	reinterpretation of the bit-patterns of objects. It's often used in
	system-level programming or when interfacing with hardware where
	exact bit patterns are important.
	reinterpret_cast doesn't check or guarantee that the new type
	representation makes sense, it just reinterprets the binary pattern
	as a value of the new type. Misuse of reinterpret_cast can lead to
	all kinds of problems, so it should be used sparingly and carefully.
*/
