/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:59:21 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/05 17:56:14 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class	Array {

public:
	Array() : _arr(NULL), _size(0) {};
	Array(unsigned int n) : _arr(new T[n]), _size(n) {};
	Array(const Array &src) : _size(src._size) {
		if (src._size != 0) {
			_arr = new T[src._size];
			for (size_t i = 0; i < _size; i++) {
				_arr[i] = src._arr[i];
			}
		} else {
			_arr = NULL;
		}
	}
	virtual ~Array() {
		delete[] _arr;
	}

	Array&	operator=(const Array &src) {
		if (this != &src) {
			delete[] _arr;
			_arr = new T[src._size];
			_size = src._size;
			for (size_t i = 0; i < _size; i++) {
				_arr[i] = src._arr[i];
			}
		}
		return (*this);
	}

	size_t	size() const {
		return (_size);
	}

	// exceptions
	class	OutOfBoundsException : public std::exception {
	
	public:
		virtual const char* what() const throw() {
       		return "Index is out of array's bounds\n";
		}
	};

private:
	T*	_arr;
	size_t	_size;
};
