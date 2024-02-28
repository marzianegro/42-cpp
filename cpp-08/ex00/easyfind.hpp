/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:30:09 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/28 10:17:40 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <exception>
#include <iostream>
#include <list>
#include <vector>

class	NoOccurenceFoundException : public std::exception {

public:
	const char* what() const throw() {
		return ("No occurrence found");
	}
};

template <typename T>
typename	T::iterator easyfind(T &container, int value) {
	typename T::iterator iter = std::find(container.begin(), container.end(), value);
	if (iter != container.end()) {
		return (iter);
	} else {
		throw NoOccurenceFoundException();
	}
}

template <typename T>
void	print(T &arr) {
	typename T::iterator it;
	for (it = arr.begin(); it != arr.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
