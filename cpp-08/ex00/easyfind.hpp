/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:30:09 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/07 15:45:12 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>

class	NoOccurenceFoundException : public std::exception {

public:
	const char* what() const throw() {
		return ("No occurrence was found");
	}
};

template <typename T>
typename	T::iterator easyfind(T& container, int value) {
	typename T::iterator iter = std::find(container.begin(), container.end(), value);
	if (iter != container.end()) {
		return (iter);
	} else {
		throw NoOccurenceFoundException();
	}
}
