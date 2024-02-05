/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:19:47 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/05 15:40:41 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

/*	Function templates are a feature in C++ that allows functions to operate
	with generic types. This means that a function template's functionality
	can be used with any data type, including user-defined types, without the
	need for separate code for each type.
	T is a placeholder for any data type, so the compiler generates and then
	calls the appropriate function based on the data type. */

/*	C++ passes arguments by value by default, meaning that a copy is made for
	use within the function. To actually swap the values of the arguments,
	you need to pass them by reference. */
template <typename T>
void swap(T &a, T &b) {
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b) {
	if (a < b) {
		return (a);
	}
	return (b);
}

template <typename T>
T max(T a, T b) {
	if (a > b) {
		return (a);
	}
	return (b);
}
