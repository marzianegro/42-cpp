/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:02:02 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/04 16:47:34 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdint>
#include "Data.hpp"
#include <iostream>

class	Serializer {

public:
/*	uintptr_t is a special integer type that is capable of holding a pointer.
	This type is guaranteed to be able to store a void pointer, which makes
	it suitable for type punning (converting types in a way that circumvents
	the type system). */
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);

private:
	Serializer(); // ocf default constructor
	Serializer(const Serializer &src); // ocf copy constructor
	~Serializer(); // ocf destructor

	Serializer&	operator=(const Serializer &src); // ocf copy assignment operator
};
