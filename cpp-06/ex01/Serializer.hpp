/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:02:02 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 15:08:57 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Serializer {

public:
	Serializer(); // ocf default constructor
	Serializer(const Serializer &src); // ocf copy constructor
	~Serializer(); // ocf destructor

	Serializer&	operator=(const Serializer &src); // ocf copy assignment operator

private:
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};
